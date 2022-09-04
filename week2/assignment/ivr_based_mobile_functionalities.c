

#include<stdio.h>
/* all the function ptototypes used in this program  */
int func_selection(void);
void phone_fun(void);
void camera_fun(void);
void gps_fun(void);
void music_fn(void);

/* main function  -------------------------------------------------------------------------------  */

int main()
{
    func_selection();               //calling fucnction for selecting different features of the phone
   
}

/*  function for selecting each function of mobile phone  ----------------------------------------  */

int func_selection(void)
{
    int function;
    printf("\n\n -------------------------------------------------------------------------------------------------");
   printf("\nenter the number : \n1)Music function \n2)Phone function \n3)Camera function\n9)exit from program\t ");               //user input
   scanf("%d",&function); 
    switch(function)                    //using switch statement find the user requuired feature
   {
       case 1: music_fn();break;
       case 2: phone_fun();break;
       case 3: camera_fun();break;
       case 9: return 0;
       default: printf("invalid entry ");
   }
}


/* function for the music features  -------------------------------------------------------------- */
void music_fn(void)
{   
     int num,flag = 1;
     while(flag)                        //for continious working 
     {
    printf("\n\n -------------------------------------------------------------------------------------------------");
     printf("\nenter the number : \n1)start \n2)pause \n3)stop \n4)current_playing \n5)no_of_song  \n 9)main menu\t  ");               //user input
     scanf("%d",&num);
    
    
    switch(num)                                  //check the value of user input
   {
       case 1: printf("\n Playing the song");break;
       case 2: printf("\n pausing the song");break;
       case 3: printf("\n stoping the song"); break;
       case 4: printf("\n current playing song is");break;
       case 5: printf("\n no.of songs in the playlist is");break;
       case 9: flag=0;break;
       default:printf("undefined value");
   }
}
   func_selection();
}


/* function for call functionalities  --------------------------------------------------------------*/

void phone_fun(void)
{
  int num,flag = 1;
     while(flag)
     {
         printf("\n\n -------------------------------------------------------------------------------------------------");
     printf("\nenter the number : \n1)call \n2)messege \n3)receive call \n9)main menu\t");
     scanf("%d",&num);
     switch(num)
     {
         case 1: printf("\n calling to this number  ");break;
         case 2: printf("\n messgae to this number");break;
         case 3: printf("\n incoming call is recieved ");break;
         case 9: flag =0;break;
         default:printf("undefined value");
     }
     }
      func_selection();
}


/* function for camer functinalities  ----------------------------------------------------------------*/

void camera_fun(void)
{
    int num,flag = 1;
    gps_fun();
     while(flag)
     {
         printf("\n\n -------------------------------------------------------------------------------------------------");
     printf("\nenter the number : \n1)take picture \n2)record video \n3)list 10 image  \n9)main menu\t");
     scanf("%d",&num);
     switch(num)
     {
         case 1: printf("\n taking picture ....  ");break;
         case 2: printf("\n recording the video....");break;
         case 3: printf("\n listing 10 images..... ");break;
         case 9: flag =0;break;
         default:printf("undefined value");
     }
     }
      func_selection();
    
}

/* function for gps functionality  ---------------------------------------------------------------------*/
void gps_fun(void)
{
 printf("\n GPS is turning on ....");
    
}