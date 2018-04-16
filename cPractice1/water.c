#include <cs50.h>
#include <stdio.h>


int main(void) 
{

    printf("\nPlease enter the amount of time in minutes you spend on the shower: _");
    
    int minutes = GetInt(); //values is store in minutes as an integer
    
    int bottles = minutes * 12; // 12 bottles of water are equal to 1 minute as said in the question
    
    if ( minutes >= 1 ) // will only take positive numbers to give you an answer
    {
        printf("\nCalculated Answer:\n\
        ***************************************************************\n\
        ** You spend %d bottles of water while you are in the shower **\n\
        ***************************************************************\n", bottles);
    } 

}