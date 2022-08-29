
#include<stdio.h>

int main()
{
    char V_driverside_Doors =0xA5 ,  V_Passengerside_Doors =0x55,  V_Tail_Doors = 0xAA ;		//declare variables as shown in the question and assighn correponding values
    char driver_door_1,driver_door_2,pass_door_1,pass_door_2,tail_door;					//vreate variables to store the extracted bit from the variable
    
    driver_door_1 = ( V_driverside_Doors>>7) &(0x01);							//extracting 7th bit from v_driverside_door
    driver_door_2 = ( V_driverside_Doors>>6) &(0x01);							//extrcating 6th bit
    pass_door_1   = ( V_Passengerside_Doors>>3) &(0x01);						//extracting 3rd bit
    pass_door_2    = ( V_Passengerside_Doors>>4) &(0x01);						//extracting 4th bit
    tail_door     = ( tail_door >> 0) &(0x01);								//extracting 0th bit
    
    (driver_door_1 ==1)?printf("\ndriver side door 1 is open"): printf("\ndriver side door 1 is closed");	//print the status of driverside door
    (driver_door_2 ==1)?printf("\ndriver side door 2 is open"): printf("\ndriver side door 2 is closed");
    (pass_door_1 ==1)?printf("\npassenger side door 1 is open"): printf("\npasseneger side door 1 is closed");	//print status of passenger side door
    (pass_door_2 ==1)?printf("\npassenger side door 1 is open"): printf("\npassenger side door 1 is closed");
    (tail_door ==1)?printf("\ntail side door 1 is open"): printf("\ntail side door 1 is closed");		//print status of tail door
}

