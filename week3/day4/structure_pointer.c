/*WAP to read and print information about library using pointer  */


#include<stdio.h>						 //include standard input and output header file using preprocessor directive
struct library{							//declare a structure
    char book_name[10];
    int id;
};
int main()
{
	setbuf(stdout,NULL);
    int i,n;
    struct library book[20];
    struct library *ptr;					//declare pointer for struct variable
    ptr=book;							//assign address of array of characters to pointer
    printf("enter no.of books:\n");
    scanf("%d",&n);						//input no.of books
    for(i=1;i<=n;i++)						//define a for loop inputing data of struct members
    {
    printf("enter book name:\n");
    scanf("%s",(ptr+i)->book_name);
    puts("enter id:");
    scanf("%d",&(ptr+i)->id);
    }
    printf("\nnmber\tbook ID\tbook name");
    for(i=1;i<=n;i++)						//print the data
    {
    printf("\n%d\t%d\t%s\n",i,(ptr+i)->id,(ptr+i)->book_name);

    }

}
