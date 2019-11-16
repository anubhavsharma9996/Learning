#include<iostream>
using namespace std;

int main(){
	int number = 10;
	cout << "Value of number : " << number << " Address of number : " << &number << endl;

	int *ptr1;
	ptr1 = &number;
	cout << "Value of *ptr1 : " << *ptr1 << " Value of ptr1 " << ptr1 << " Value of &ptr1 : " << &ptr1 << endl;


	int *ptr2 = NULL;
	ptr2 = new int;
	cout << " Value of ptr2 " << ptr2 <<endl; 
	ptr2 = &number;
	cout << "Value of *ptr2 : " << *ptr2 << " Value of ptr2 " << ptr2 << " Value of &ptr2 : " << &ptr2 << endl;
	return 0;
}
