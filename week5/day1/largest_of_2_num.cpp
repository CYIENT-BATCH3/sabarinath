/*
 * WAP to input 2 number and find its largest.
 * hello_world.cpp
 *
 *  Created on: Sep 19, 2022
 *      Author: sk69648
 */
#include<iostream>			//input output operation
using namespace std;		//every std function and literals varaiable are defined  std namespace
int main() {
	int num1,num2;						//variable declaration
	cout<<"enter 2 number"<<endl;	//accept data from user
	cin>>num1>>num2;				
	if(num1>num2)					//check for thge highest number
		cout<<num1<<" is greater";	//print
	else
		cout<<num2<<" is greater";	//print
}





