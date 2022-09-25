/* WAP to print all the area of circle ,triangle,rectangle
 *
 * area.cpp
 *
 *  Created on: Sep 23, 2022
 *      Author: sk69648
 */

#include<iostream>
using namespace std;
#define PI 3.14					//defining value of pi

class area
{
public :
	void area_fn(int r)			//function overloading with 1 argument
	{
		cout<<"\narea"<<PI*r*r;
	}
	void area_fn(int l,int b)		//function overloading with 2 argument
	{
		cout<<"\narea of rectangle = "<<l*b;

	}
	void area_fn(int b,double h) 	//function overloading with 2 argument
	{
		cout<<"\narea of triangle = "<<h;
	}
};

int main()
{
area obj;							//creating instance of class
obj.area_fn(3);						//calling fn with 1 argument
obj.area_fn(12, 10);				//calling fn with 2 argument
obj.area_fn(10, 8.5);				//calling fn with 2 argument
}




