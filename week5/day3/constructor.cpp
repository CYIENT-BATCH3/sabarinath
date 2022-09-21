/*
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
	myclass()				//constructor defnition
	{
		num1 = 100;
	}
	void print()						//print the private varible of the class
	{
		cout<<" "<<num1;
	}
};
int main()
{
	myclass obj;						//creating object
	obj.print();						//calling function defined inside class 

}




