/*
 * WAP to find factorial of a number
 * hello_world.cpp
 *
 *  Created on: Sep 19, 2022
 *      Author: sk69648
 */
#include<iostream>			//input output operation
using namespace std;		//every std function and literals varaiable are defined  std namespace
int main() {
	int num1,i=0,fact=1;						//variable declaration
	cout<<"enter number"<<endl;	//accept data from user
	cin>>num1;

	if(num1 ==0)				//print factorial as 1 when num is 0
	{
		cout<<"factorial is 1";
	}
	else
	{
		for(int i=1;i<=num1;i++)		//iterate the loop until the limit is meet
		{
			fact = fact * i;			//finding factorial
		}
		cout<<"factorial = "<<fact;		//print factorial 
	}

}





