/*
 * 
 * class.cpp
 *
 *  Created on: Sep 20, 2022
 *      Author: sk69648
 */

#include<iostream>
using namespace std;

class myclass				//declaration of class
{
	int z;					//defaultly protected variable
public:
	int x;					//creating public variable
private:
	int y;					//creating private variable
};
int main()
{
	myclass obj1;			//creating class object
	obj1.x=25;				//assighning values to public variable
	cout<<obj1.x;			//printing the value

}


