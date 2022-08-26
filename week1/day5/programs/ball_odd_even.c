/*
 * 5 balls are numbered with random 1 digit number each .assighn these numbers using user input print 
 * weather each ball is assogned pdd or even
 */
 
 #include<stdio.h>
 int main()
 {
     int ball1,ball2,ball3,ball4,ball5;							//declare variables
     printf("\n enter numbers for each of the 5 balls   ");				//input variables
     scanf("%1d%1d%1d%1d%1d",&ball1,&ball2,&ball3,&ball4,&ball5);
     (ball1 % 2 ==0) ? printf("\nball 1 is even"): printf("\nball 1 is odd");		//check for each variable weather it is even or not using conditional operator
     (ball2 % 2 ==0) ? printf("\nball 2 is even"): printf("\nball 2 is odd");
     (ball3 % 2 ==0) ? printf("\nball 3 is even"): printf("\nball 3 is odd");
     (ball4 % 2 ==0) ? printf("\nball 4 is even"): printf("\nball 4 is odd");
     (ball5 % 2 ==0) ? printf("\nball 5 is even"): printf("\nball 5 is odd");
 }