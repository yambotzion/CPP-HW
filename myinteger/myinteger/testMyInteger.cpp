// A driver to test MyInteger class
// Created and updated by T. Vo for CSCI 140 Fall 2022.

// Modified by: your name

#include <iostream>
#include "MyInteger.h"

using namespace std;

int main()
{
	MyInteger i1;		// 0
	MyInteger i2(5);	// 5 (copy constructor)
	MyInteger i3 = i2;	// 5 (copy constructor)
	MyInteger* pMyInt;	// a pointer

	cout << "i1: " << i1 << endl;				// 0
	cout << "i2: " << i2.GetValue() << endl;	// 5
	cout << "i3: " << i3 << endl;				// 5

	i1.SetValue(-4);
	i3 = i1 + i2;
	cout << "i3: " << i3 << endl;              // 1

	cout << "(i2 - i1) / 2: " << (i2 - i1) / 2 << endl;	   // 4
	cout << "i2 * i1: " << i2 * i1 << endl;	   // -20

	cout << "Enter an integer: ";
	cin >> i1;                                 // input 123

	cout << i1 << " == " << i2 << ": ";
	if (i1 == i2)                              // false
		cout << "true" << endl;
	else
		cout << "false" << endl;

	i2 = i1;								   // copy assignment operator
	cout << i1 << " != " << i2 << ": ";
	if (i1 != i2)                              // false
		cout << "true" << endl;
	else
		cout << "false" << endl;

	i2.SetValue(25);
	cout << "i1: " << i1 << endl;              // 123
	cout << "i2: " << i2 << endl;              // 25

	pMyInt = new MyInteger(i2);				   // 25 (copy constructor)
	cout << "*pMyInt: " << *pMyInt << endl;	   // 25
	*pMyInt = i1;							   // 123 (copy assignment operator)			
	cout << "pMyInt->GetValue(): " << pMyInt->GetValue() << endl;	// 123
	delete pMyInt;							   // return allocated memory

	// feel free to add more test cases below

	cout << "End of test cases." << endl;
	return 0;
}