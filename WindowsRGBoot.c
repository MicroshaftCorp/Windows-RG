#include <iostream>
#include <stdio.h>
#include <stdlib.h>  
#include <windows.h>
#include "sco_unix.h"
  
using namespace std;
//This Initiates the fullscreen function
void fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
//Below is where you would place your normal programming code.
int main()
{
    fullscreen(); //This puts the window in fullscreen
    cout << "Hello, See It Is Fullscreen.";
    cin.get();
    return 0;
}

int main()
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen("CSUP.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      
   }
   
 

   fprintf(fptr,"C is overwritten", sentence);
   fclose(fptr); 

   return 0;
}
printf("=[-|]Windows RG Is Booting..");
sleep(9000);
sleep(1000);
fptr = fopen("WindowsRG.c", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      
   }
