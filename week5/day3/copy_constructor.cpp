/*
 * copy  constructor
 * class.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: sk69648
 */


#include<iostream>
using namespace std;

class myclass				//declaration of class
{
	int num1;

public:
	myclass(int a)				// parameterised constructor defnition
	{
		num1 = a;
	}

	myclass(const myclass &obj)
	{
		num1 = obj.num1;		//copy num1 in first obj to second obj
	}

	void print()						//print the private varible of the class
	{
		cout<<" "<<num1;
	}
};
int main()
{
	myclass obj(150);						//creating object by passing 150 as argument
	cout<<"o/p of parameterised constructor:  ";
	obj.print();	//calling function defined inside class

	cout<<"\n--------------------\n";
	cout<<"o/p of copy constructor :";
	myclass obj1(obj);						//creating object by passing first obj as argument so it can copy elements of that object
		obj.print();


}




