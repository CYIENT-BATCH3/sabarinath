#include<stdio.h>
#define MAX 100				//definethe preprocessor

int main()
{
#ifdef MAX					//if certain macro is defined do certain task
	printf("it is defined");
#endif
#ifndef MAX					//if not defined
	printf("it is not defined");
#endif
}
