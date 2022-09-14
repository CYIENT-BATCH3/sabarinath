/*  extract gps signaal for longitude and lattitude 
 * gps_sig.c
 *
 *  Created on: Sep 13, 2022
 *      Author: sk69648
 *      start
 *      create file pointer and assign file file to it
 *      check weather the file is loaded  success or not
 *      extarct the necessary element using for loop and position of digit logic
 *      print
 */

#include<stdio.h>

int main()
{
	FILE *fp;						//declaring file pointer
    fp = fopen("gps.txt","r");		//open file
    if(fp == NULL)					//check file loading is succesfull or not
    {
    	printf("error");
    	exit(1);
    }
    for(int i=0;i<18;i++)			//avoid thefirst 18 characters
    {
    	fgetc(fp);
    }
    printf("\nlongitude = : ");		//print the next 10 character a s longitude
    for(int i=0;i<11;i++)
        {
        	printf("%c",fgetc(fp));
        }
    fgetc(fp);
    printf("\nlattitude = : ");		//print the nxt  11 elements as lattitiude
    for(int i=0;i<12;i++)
        {
    	printf("%c",fgetc(fp));
        }
}

