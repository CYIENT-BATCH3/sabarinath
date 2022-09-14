/*
 * error2.c
 * file pointer error
 *  Created on: Sep 14, 2022
 *      Author: sk69648
 */

#include<stdio.h>
int main()
{
	FILE *fp;							//declaring file
	fp = fopen("test.txt","a");			//open file nin read mode
	if(ferror(fp)!=0)					//check for any error
		printf("error");
	fprintf(fp,"%s"," hello world \n");
	putc('t',fp);						//try to write to file
	if(ferror(fp)!=0)					//check for error
		perror("the error is : ");					//print the error
	fclose(fp);
	return 0;
}
