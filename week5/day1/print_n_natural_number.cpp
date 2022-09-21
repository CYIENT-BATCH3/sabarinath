/*
 * WAP print n natural numbers using do while loop
 * hello_world.cpp
 *
 *  Created on: Sep 19, 2022
 *      Author: sk69648
 */
#include<iostream>			//input output operation
using namespace std;		//every std function and literals varaiable are defined  std namespace
int main() {
	int num1,i=0;						//variable declaration
	cout<<"enter number"<<endl;	//accept data from user
	cin>>num1;
	do
	{
		cout<<i<<" ";			//print the number
		i++;					//increment the count
	}while(i<=num1);			//iterate till limit is reached

}





