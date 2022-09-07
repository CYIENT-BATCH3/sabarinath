/*  array of character pointers   */

#include<stdio.h>

void main()
{
    char ch1[] ="hello";		//declaring 5 different character array to store different strings
    char ch2[] ="world";
    char ch3[] ="good";
    char ch4[] ="morning";
    char ch5[] ="hai";
    char *names[5];			//declaring  pointer of arary 
    names[0] = ch1;			//assighning the addres of each char pointer to array
    names[1] = ch2;
    names[2] = ch3;names[3] = ch4;names[4] = ch5;
    for(int i=0;i<4;i++)
    {
        printf("\n %d  %p   %s",i,&names[i],names[i]);   	//printing the values
    }
}