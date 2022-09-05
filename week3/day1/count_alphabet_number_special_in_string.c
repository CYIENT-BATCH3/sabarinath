/*   pgm to find no of characters numerics and special characters in apgm   */


/*
 * 1 start 
   2 decalre variables and take user input string 
   3 extract each character and compare it with alphabets numericals and special symbols
   4 increase the count value whenever corresponding digit appears
   5 print the output
 */

#include<stdio.h>
#include<string.h>

void main()
{
    char chara[20];
    int alpha=0,spec=0,num=0;
    printf("enter the string: ");                   //takeuser input
    //gets(chara);
    scanf("%s",chara)
    //printf("\n%d",strlen(chara));
    for(int i=0;i<=strlen(chara);i++)               //taking each character from the string 
    {
        if(chara[i]>=65 && chara[i]<=90 || chara[i]>=97 && chara[i]<=122)       //comparinf ascii value of A-z and a-z
        alpha++;
        if(chara[i]>=48 && chara[i]<=57 )                                       //comparing ascii of bumerical value
        num++;
        if(chara[i]>=32 && chara[i]<=47 || chara[i]>=58 && chara[i]<=64 || chara[i]>=94 && chara[i]<=97 || chara[i]>=123 && chara[i]<=127 )
        spec++;                                                                 //comparing ascii value of special symbols
    }
    
    printf("\nalphabets =%d",alpha);
    printf("\nnumerical =%d",num);
    printf("\nspecial character =%d",spec);
}
