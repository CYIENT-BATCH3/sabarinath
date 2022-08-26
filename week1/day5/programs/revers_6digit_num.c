/* 
 * take a 6 digit number as input from ythe user and reverse the number make sure that the number doesnt include a '0' in any of 
 * its digit
 */
 
 #include<stdio.h>
 
 int main()
 {
     int num;                               //decalre the variables
     int rem,rev=0;;
     printf("\nenter the number = ");      // scan the number to find the reverse 
     scanf("%6d",&num);
     rem = num % 10;                       // extract the last digit
     rev = rev*1 +rem;                     // 1st digit of reversed number
     num = num/10;                         // delete the last digit from the number
     
     rem = num % 10;                        // same as above we need to do the step for 6 times
     rev = rev*10 +rem;
     num = num/10;
     
     rem = num % 10;
     rev = rev*10 +rem;
     num = num/10;
     
     rem = num % 10;
     rev = rev*10 +rem;
     num = num/10;
     
     rem = num % 10;
     rev = rev*10 +rem;
     num = num/10;
     
     rem = num % 10;
     rev = rev*10+rem;
     num = num/10;
     
     printf("\nreverse number = %d ",rev);
     
 }