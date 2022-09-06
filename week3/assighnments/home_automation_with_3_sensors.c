/*


start
declare 3 fn for 3 sensors
take user input for each sensor 4 times in one single variable
print each value


*/

#include<stdio.h>

//differnt function prototype for different function
void temp_sensor(float *);
void humid_sensor(float *);
void speed_sensor(int *);


void main()
{
    float *temp_ptr,*humid_ptr,temp_v,humid_v;          //declaring floating variable and pointers
    int *speed_ptr,speed_v;
    temp_ptr = &temp_v;                                 //addidng addresss to the pointer
    humid_ptr = &humid_v;
    speed_ptr = &speed_v;
    
    //different function calls in different pattern
    printf("\n---------1--------------");
    temp_sensor(temp_ptr);
    humid_sensor(humid_ptr);
    speed_sensor(speed_ptr);
    
    printf("\n---------2--------------");
    temp_sensor(temp_ptr);
    speed_sensor(speed_ptr);
    humid_sensor(humid_ptr);
    
    printf("\n---------3--------------");
    humid_sensor(humid_ptr);
    temp_sensor(temp_ptr);
    speed_sensor(speed_ptr);
    
    printf("\n---------4--------------");
    speed_sensor(speed_ptr);
    temp_sensor(temp_ptr);
    humid_sensor(humid_ptr);
}

   void temp_sensor(float * temp)                   //function for the temprature sensor 
   {
       
       printf("\nenter the temprature : ");
       scanf("%f",temp);
       printf("\nThe temprature is %.2f degree C",*temp) ;
       
       
   }
   void humid_sensor(float * humid)                 //function for the humidity sensor
   {
       printf("\nenter the humidity : ");
       scanf("%f",humid);
       printf("\nThe humidity is %.2f %%",*humid) ;
   }
   void speed_sensor(int * speed)                   //function for the speed sensor
   {
       printf("\nenter the speed : ");
       scanf("%d",speed);
       printf("\nThe speed is %d rpm",*speed) ;
   }
  

