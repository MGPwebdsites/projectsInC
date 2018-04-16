#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int cypherLetterVal(int cypherLetter, string k); // calling function on header

int main (int argc, string argv[])
{
   //ci = (pi + k) % 26
   string tCypher;
   
   if (argc != 2){   //Allow a max of 2 arguments
      printf("Please enter the necesary arguments\n");
      return 1;
   }
   
   string k = argv[1]; // cypher word
   
   for (int i = 0, length = strlen(k); i < length; i++) // check if input is a collection of characters.
    {
        if (!isalpha(k[i]))
        {
            printf("Only letters Please\n");
            return 1;
        }
    }
   
  
    tCypher = GetString(); // get user's input
   
    int cypherLetter = 0;
   for (int i = 0; i < strlen(tCypher); i++)
   {
      if (islower(tCypher[i]))
      {
         //97 is the starting point for lower case letter in ASCII, 26 its numbet of lettersin alphabeth, modulo 26 will return the difference in ASCII for new value and 97 to change it back to lower case
         printf("%c", (((tCypher[i] + cypherLetterVal(cypherLetter,k)) - 97) % 26) + 97);     
         cypherLetter++;
      }
      else if (isupper(tCypher[i]))
      {
         //same process but for uppercasing
         printf("%c", (((tCypher[i] + cypherLetterVal(cypherLetter,k)) - 65) % 26) + 65);
         cypherLetter++;
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


int cypherLetterVal(int cypherLetter, string k) //function to get respective letter of cypher word per input letter
{
    int valOfLength = strlen(k);
    return tolower(k[cypherLetter % valOfLength]) - 97; //return cypher word letter value in lower case to preserve casing
}