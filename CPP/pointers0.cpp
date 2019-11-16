#include<iostream>

int main(){
	int number = 10;
	std::cout << "Value of number : " << number << " Address of number : " << &number << std::endl;

	int *ptr1;
	ptr1 = &number;
	std::cout << "Value of *ptr1 : " << *ptr1 << " Value of ptr1 " << ptr1 << " Value of &ptr1 : " << &ptr1 << std::endl;

	int *ptr2 = NULL;		// heap memory allocated
	ptr2 = new int;
	ptr2 = &number;
	std::cout << "Value of *ptr2 : " << *ptr2 << " Value of ptr2 " << ptr2 << " Value of &ptr2 : " << &ptr2 << std::endl;
	return 0;
}
