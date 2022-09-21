/*
 * WAP to convert entire character  upper or lower case
 * hello_world.cpp
 *
 *  Created on: Sep 19, 2022
 *      Author: sk69648
 */
#include<iostream>	//input output operation
#include<cstring>
using namespace std;		//every std function and literals variable are defined  std namespace
int main() {
	char ch[20];
	int len=0,i=0;
	cout<<"enter the string";
	cin>>ch;
	len = strlen(ch);			//find the lenghth of the fn
    while(i<=len)				//iterate until the string length 
    {
    	ch[i] = toupper(ch[i]);		//convert each character to uppercase
    	i++;						//increment count
    }

    cout<<"string = "<<ch;			//print the string


}





