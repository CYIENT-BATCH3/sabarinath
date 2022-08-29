
/*
 *write a pgm to create calculator
 */
 
 #include<stdio.h>
 int main()
 {
    float a,b,result;
    char ch;
    printf("\nenter the operand (first one should be grater)   ");		//input the numbers
    scanf("%f%f",&a,&b);
    printf("enter the operator * + / -   ");					//input the operator
    scanf(" %c",&ch);
    printf("%d",ch1);								//using switch do the corresponding operation as user input
    {
        case '+': printf("sum = %.2f",a+b);break;
        case '-': printf("substract = %.2f",a-b);break;
        case '*': printf("multiplied output = %.2f",a*b);break;
        case '/': printf("division =%.2f",a/b);break;
        default:printf("entered invalid operator");
    }
    
     
 }