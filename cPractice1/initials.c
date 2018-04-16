#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
   
   string forInitials;
   forInitials = GetString();

  
   for (int i = 0; i < strlen(forInitials); i++)
   {
       
      if (i == 0) // Check for first letter
      {
         printf("%c", toupper(forInitials[i]));     
      } 
      if (forInitials[i] == ' ' && forInitials[i+1] != '\0') //check for first letter after space and avoids null values
      {
         printf("%c", toupper(forInitials[i+1]));     
      }
      else // prints nothig for everything else
      {
         //if its not a letter return same value
         printf("");
        
      }
   }
   
   printf("\n");
   return 0;
}