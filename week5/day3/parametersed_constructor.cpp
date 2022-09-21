/*
 * parametrized constructor
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
	myclass(int a)				//constructor defnition
	{
		num1 = a;
	}
	void print()						//print the private varible of the class
	{
		cout<<" "<<num1;
	}
};
int main()
{
	myclass obj(150);						//creating object by passing 150 as argument
	obj.print();						//calling function defined inside class

}




