#include<iostream>

using namespace std;
class Box
{
private:
	double lenght, height, breadth;

public:
	Box(double l = 2.0, double b = 2.0, double h = 2.0) {
		cout << "Constructor called" << endl;
		lenght = l;
		breadth = b;
		height = h;
	}
	double Volume() {
		return height * breadth * lenght;
	}
};
struct BoxStruct
{
	double lenght;
	double height;
	double breadth;
};
void swap(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
}


int glabolVariable = 32;
void changeReferenceValue(int*& pp) {
	pp = &glabolVariable;
}


/*
float* findLargestGrade(float* arrGrades, int size) {
	float* max = new float;
	*max = *arrGrades;
	for (int i = 1; i < size; i++)
	{
		if (*max <= *(arrGrades + i)) {
			*max = *(arrGrades + i);
		}

	}
	return max;
}
*/





int main() {
	Box Box1(3.3, 1.2, 1.5);
	Box* ptrBox;
	ptrBox = &Box1;
	cout << "The volume of first box" << (*ptrBox).Volume() << endl;



	BoxStruct Box2;
	BoxStruct* ptrBoxStruct;
	ptrBoxStruct = &Box2;
	Box2.lenght = 8.5;
	Box2.height = 2.4;
	Box2.breadth = 6.2;
	cout << "\nHeight = " << ptrBoxStruct->height << endl;
	cout << "Lenght = " << ptrBoxStruct->lenght << endl;
	cout << "Breadth =" << (*ptrBoxStruct).breadth << endl;




	cout << "\n" << endl;



	int* i;
	string* str;
	i = new int;
	*i = 55;
	str = new string;
	*str = "Object Oriented Programming";
	cout << *i << endl;
	cout << *str << endl;
	delete i;
	delete str;



	cout << "\n" << endl;



	int numberOfStudent;
	cout << "Enter total number of students" << endl;
	cin >> numberOfStudent;
	float* ptr;
	ptr = new float[numberOfStudent];

	cout << "Enter GPA of students.\n";
	for (int i = 0; i < numberOfStudent; i++)
	{
		cout << "Student" << i + 1 << ": ";
		cin >> *(ptr + i);
	}

	cout << "\nDisplay GPA of students.\n";
	for (int i = 0; i < numberOfStudent; i++)
	{
		cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;

	}
	delete[] ptr;




	cout << "\n" << endl;



	int* first = new int;
	int* second;
	*first = 10;
	second = first;
	cout << "First: " << *first << endl;
	cout << "Second: " << *second << endl;
	cout << "After  deletion of second pointer" << endl;
	delete second;
	cout << "First= " << *first << endl;


	cout << "\n" << endl;



	int* third = new int;
	*third = 20;
	int* fourth = new int;
	*fourth = *third;
	cout << "Third: " << *third << endl;
	cout << "Fourth: " << *fourth << endl;
	cout << "After  deletion of fourth pointer" << endl;
	delete fourth;
	cout << "Third: " << *third << endl;




	cout << "\n" << endl;



	int a = 100, b = 200;
	cout << "Before Swap\n";
	cout << "a = " << a << " b = " << b << "\n";
	swap(&a, &b);
	cout << "After Swap with pass by pointer\n";
	cout << "a = " << a << " b = " << b << "\n";


	cout << "\n" << endl;



	int var = 64;
	int* ptrVar = &var;
	cout << "Passing a Reference to a pointer to funcion" << endl;
	cout << "Before :" << *ptrVar << endl;
	changeReferenceValue(ptrVar);
	cout << "After :" << *ptrVar << endl;



	cout << "\n" << endl;






	//cout << "The largest grade is : " << *findLargestGrade(ptr, numberOfStudent) << endl;

}