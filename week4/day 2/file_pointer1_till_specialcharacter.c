/*
 * file_1.c
 *WAP to open a file in read mode and print the contents  a until a special character is reached
 *  Created on: Sep 13, 2022
 *      Author: sk69648
 *
 *      1 start
 *      2 declare file pointer and variables
 *      3 open the file and assighn it to file pointer
 *      4 check the file is exist or not
 *      5 print the content of files until * is reached
 */
#include<stdio.h>


int main()
{
	FILE *fp;					//file pointer declaration
	char ch;					//character to read each character from files
	fp = fopen("file.txt","r");	//open file and give to file pointer existed in same folder  as source code

	if(fp == NULL )				//check weather the file is exist or not
	{
		printf("no file found");
		exit(1);
	}
	do			//read the character until * is reached
	{
		ch = fgetc(fp);
		printf("%c",ch);
	}while(ch != '*');
	fclose(fp);					//close the file
}

