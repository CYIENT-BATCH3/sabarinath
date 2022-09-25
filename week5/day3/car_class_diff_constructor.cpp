/*
 * parameter constructor and copy  constructor to bulid class car
 * class.cpp
 *
 *  Created on: Sep 21, 2022
 *      Author: sk69648
 */


#include<iostream>
using namespace std;


class car				//declaration of class
{
	string colour;

public:
	car(string col)				// parameterised constructor defnition
	{
		colour = col;
	}

	car(const car &door_temp)
	{
		colour = door_temp.colour;		//copy colour in first obj to second obj
	}

	void print()						//print the private varible of the class
	{
		cout<<" "<<colour;
	}
};
int main()
{

	car door("red");						//creating object by passing clour as argument
	cout<<"door colour :  ";
	door.print();	//calling function defined inside class to print

	cout<<"\n--------------------\n";
	cout<<"o/p chasis colour:  :";
	car chasis(door);						//creating object by passing first obj as argument so it can copy elements of that object
		chasis.print();


}




