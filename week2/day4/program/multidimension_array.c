/*
 * read and print multi dimensional matrices 
 */
 
 #include<stdio.h>
 int main()
 {
     int a[5][5][5],i,j,k,r,c;
     printf("\nenter array elemnts:   ");           //inputing elements for multidimensional array

     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             for(k=0;k<2;k++)
             scanf("%d",&a[i][j][k]);
         }
     }
     printf("\nenter array elemnts:  ");            //printing the elements 
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             for(k=0;k<2;k++)
             printf("  %d  ",a[i][j][k]);
         }
         printf("\n");
     }
 }
   