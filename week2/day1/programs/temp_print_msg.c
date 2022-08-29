
/*
 *write a pgm to read temprature in centigrade and display suitable message
 */
 #include<stdio.h>
 int main()
 {
     int temp;
     printf("enter the temprature   ");
     scanf("%d",&temp);
     if(temp<0)
     printf("\nfreezing weather");
     else if(temp >= 0 && temp <10)
     printf("\nvery cold weather");
     else if(temp >= 10 && temp <20)
     printf("\n cold weather");
     else if(temp >= 20 && temp <30)
     printf("\nnormal in temp");
     else if(temp >= 30 && temp <40)
     printf("\nit is hot");
     else if(temp>=40)
     printf("its very hot");
     
 }
