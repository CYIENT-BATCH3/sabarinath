/*
 *
 * class1.cpp
 *
 *  Created on: Sep 20, 2022
 *      Author: sk69648
 */

#include<iostream>
using namespace std;

class myclass				//declaration of class
{
protected:
	int z;					//defaultly protected variable
public:
	int x;					//creating public variable
private:
	int y;//creating private variable

public:
	void assighn()				//public function to assighn values to dufferent class variable
	{
		z=12;
		x=23;
		y = 25;
	}
	void print_val()			//print the values
	{
		cout<<z<<" "<<x<<" "<<y;
	}
};
int main()
{
	myclass obj1;			//creating class object

	obj1.assighn();
	obj1.print_val();
	obj1.x=25;				//assighning values to public variable
	cout<<" "<<obj1.x;			//printing the value

}


