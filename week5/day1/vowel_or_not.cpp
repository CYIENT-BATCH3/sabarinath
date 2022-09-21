/*
 * WAP to check entered character is vowel or consonent
 * hello_world.cpp
 *
 *  Created on: Sep 19, 2022
 *      Author: sk69648
 */
#include<iostream>			//input output operation
using namespace std;		//every std function and literals varaiable are defined  std namespace
int main() {
	char ch;
	cout<<"enter the character";		//inputing the character
	cin>>ch;
	if(ch == 'a' || ch == 'A'||ch == 'e' || ch == 'E'||ch == 'i' || ch == 'I'||ch == 'o' || ch == 'O'||ch == 'u' || ch == 'U')
		cout<<ch<<" is vowel";				//if codition satisfied print it is vowe;l
	else
		cout<<ch<<" is consonent";			//else print condition is not satisfied

}





