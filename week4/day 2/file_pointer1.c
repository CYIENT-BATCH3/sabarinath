/*
 * file_1.c
 *
 *  Created on: Sep 13, 2022
 *      Author: sk69648
 *     WAP to open a file in read mode and print the contents  
 *      1 start
 *      2 declare file pointer and variables
 *      3 open the file and assighn it to file pointer
 *      4 check the file is exist or not 
 *      5 print the content of files
 */
#include<stdio.h>


int main()
{
	FILE *fp;					//file pointer cdeclaration
	char ch;					//character to read each character from files
	fp = fopen("abc.txt","r");	//open file and give to file pointer existed in same folder  as source code

	if(fp == NULL )				//check weather the file is exist or not
	{
		printf("no file found");
		exit(1);
	}
	while(!feof(fp))			//read the character until end of file is reached
	{
		ch = fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}

