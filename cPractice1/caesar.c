#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
   //ci = (pi + k) % 26
   string tCypher;
   
   if (argc != 2){   //Allow a max of 2 arguments
      printf("Please enter the necesary arguments\n");
      return 1;
   }
   if (argv[1] < 0) { // only positive values
      printf("Please enter a positive value\n");
      return 1;
   }
   
   int k = atoi(argv[1]); // change string to int for letter adition
   
   
   
  
   tCypher = GetString(); // get user's input
   
  
   for (int i = 0; i < strlen(tCypher); i++)
   {
      if (islower(tCypher[i]))
      {
         //97 is the starting point for lower case letter in ASCII, 26 its numbet of lettersin alphabeth, modulo 26 will return the difference in ASCII for new value and 97 to change it back to lower case
         printf("%c", (((tCypher[i] + k) - 97) % 26) + 97);     
      }
      else if (isupper(tCypher[i]))
      {
         //same process but for uppercasing
         printf("%c", (((tCypher[i] + k) - 65) % 26) + 65);
      }
      else
      {
         //if its not a letter return same value
         printf("%c", tCypher[i]);
        
      }
   }
   
   printf("\n");
   return 0;
}