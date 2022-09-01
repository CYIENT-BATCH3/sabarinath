
/*
 * WAP to find sum of diagaonal elements of 2D array 
 */
 
 #include<stdio.h>
 int main()
 {
   int a[10][10],row,col,i,j,sum=0;
   printf("\n enter the row and colum :  ");
   scanf("%d%d",&row,&col);
   printf("\nenter the array elements : ");
   for(i=0;i<row;i++)
   {                                    //take input from user
       for(j=0;j<col;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
   
   for(i=0;i<row;i++)
   {
       for(j=0;j<col;j++)
       {
           printf(" %d ",a[i][j]);
           if(i==j)                     //find sum if the row and column matches
           sum = sum+a[i][j];
       }
       printf("\n");
   }
   printf("\n sum = %d",sum);           //print the sum
 }
