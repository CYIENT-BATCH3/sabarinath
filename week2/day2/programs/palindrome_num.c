/* palindrome or not */

#include<stdio.h>
int main()
{
    int num,temp,rev=0,rem;		
    printf("\nenter the number : ");			//take user input
    scanf("%d",&num);
    temp = num;						//store the value in temp
    while(temp>0)					//find the reverse of the number
    {
        rem = temp %10;
        rev = rev*10 +rem;
        temp = temp/10;
    }
    if(rev == num)					//if  reverse and number is equal the it is palindrome
    printf("\n%d is palindrome number",num);
    else 
    printf("\n%d is not palindrome number",num);
}
