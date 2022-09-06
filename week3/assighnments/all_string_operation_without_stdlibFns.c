/*
wAP to find the reverse of string and convert the string into uppercase and to_lowercase

1 start
2 take the user input string
3 take the user input operation 1revere 2 upper 3 to_lowercase
3.1 reverse
3.1.1 use reverse loop for printing the reverse of the number
3.2 to upper
3.2.1 if the string was in lower case substract 32 from each element to find its uppercase
3.3 to lower
3.3.1 opposite of upper



*/



#include<stdio.h>
#include<string.h>

void rev_string(char *,int);            //function prototype for each function
void string_upper(char *,int);
void string_lower(char *,int);
void main()
{
    char ch[30] ;
    int len,opt;
    printf("\nenetr the string : ");        //take user input from user
    scanf("%s",ch);
    len = strlen(ch);                       //find the length of string
    printf("\nenter the option  \n1)string reverse  \n2)to_uppercase  \n3)to_lowercase "); //give option fpr selectoing the operation
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:rev_string(ch,len);break;
        case 2:string_upper(ch,len);break;
        case 3:string_lower(ch,len);break;
        default:printf("\n wrong choice  ");
    }
    
}

void rev_string(char * a,int len)                   //fn for find reverse of the string
{
     for(int i=len;i>=0;i--)                        //revers loop
    printf("%c",a[i]);
}

void string_upper(char * a,int len)                 //fn for convert to upper case
{
    printf("\n");
    for(int i=0;i<=len;i++)
    {
        if(a[i] >= 97 && a[i]<= 122)
        a[i]=a[i]-32;                               //if it is lowercase substract 32
        printf("%c",a[i]);
    }
}


void string_lower(char * a,int len)                  //fn for convert to lower case
{
    printf("\n");
    for(int i=0;i<=len;i++)
    {
        if(a[i] >= 65 && a[i]<= 90)
        a[i]=a[i]+32;                               //if it is lowercase add 32
        printf("%c",a[i]);
    }
}