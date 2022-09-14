/*
 * cal.c
 *
 *  Created on: Sep 14, 2022
 *      Author: sk69648
 */
//#include"function_prototype.h"


int calculator (char op,int num1, int num2)
{
	switch(op)
	{
	case '+':return num1+num2;break;
	case '-':return num1-num2;break;
	case '*':return num1*num2;break;
	case '/':return num1/num2;break;
	}
	return 0;
}

