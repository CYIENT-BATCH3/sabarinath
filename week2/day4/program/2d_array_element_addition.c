/*
 * WAP to add all the number in 4x4 matrice 
 */
 
 #include<stdio.h>
 int main()
 {
     int a[4][4],i,j,sum=0;
     printf("\n enter the %d elements  \n",16);                //scan all the elements using 2 for loops
     for(i=0;i<4;i++)
     {
         for(j=0;j<4;j++)
         {   
             printf("\n [%d][%d] element : ",i,j);                    
             scanf("%d",&a[i][j]);
             sum = sum+a[i][j];                                 //find  sum of the all the elements
         }
     }
     
     printf("\nsum = %d",sum);
 }