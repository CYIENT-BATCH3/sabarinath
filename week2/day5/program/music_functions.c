/* WAP to create the music function  */


#include<stdio.h>
void play();                                    //fn for playing song
void pause();                                   //pause the song
void stop();                                    //stop the fn
void current_playing();
void no_of_song();
void music_fn(int num)
{
    switch(num)                                  //check the value of user input
   {
       case 1: play();break;
       case 2: pause();break;
       case 3: stop();break;
       case 4: current_playing();break;
       case 5: no_of_song();break;
       default:printf("undefined value");
   }
}

int main()
{
    int num;
   printf("enter the number : \n1)start \n2)pause \n3)stop \n4)current_playing \n5)no_of_song  ");               //user input
   scanf("%d",&num); 
   music_fn(num);
   
}
void play()                                     //fn definition for play
{
    printf("\n Playing the song");
}

void pause()                                    //fn definition for pause
{
    printf("\n pausing the song");
}

void stop()                                     //fn definition for stop
{
    printf("\n stoping the song"); 
}

void current_playing()                          //fn definition for current_playing
{
    printf("\n current playing song is");
}

void no_of_song()                               //fn definition for no.of song
{
    printf("\n no.of songs in the playlist is");
}
