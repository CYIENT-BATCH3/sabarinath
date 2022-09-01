/*
 * read and print 2 dimensional matrices 
 */
 
 #include<stdio.h>
 int main()
 {
     int a[4][3],i,j,r,c;
     printf("\nenter no.of rows and columns: ");
     scanf("%d%d",&r,&c);
     printf("\n enter the %d elements",r*c);
     for(i=0;i<r;i++)					//reading eleemnts in 2D array
     {
         for(j=0;j<c;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
     
     for(i=0;i<r;i++)					//printing elements of 2D array
     {
         for(j=0;j<c;j++)
         {
             printf("  %d  ",a[i][j]);
         }
         printf("\n");
     }
 }		