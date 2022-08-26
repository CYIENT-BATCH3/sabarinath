/*
 * consider weight of 3 people as i/p and find the heaviest amoung them
 */
 
 #include<stdio.h>
 int main()
 {
     int wt1,wt2,wt3;                           //declare variables
     printf("\n enter weight of 3 people ;");   //accepting input from user
     scanf("%d%d%d",&wt1,&wt2,&wt3);
     (wt1>wt2) && (wt1>wt3) ? printf("%d is heaviest",wt1): (wt2>wt3) ? printf("%d is heviest ",wt2):printf("%d is heaviest",wt3);
    /*  intially we compare wt1 and wt2 AND wt1 and wt3 if it is true print wt3 else compare wt2 and wt3 and print the largest   */ 
 }