#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{

    printf("\n \
                    ######\n\
                  ############\n\
                  #####||##\n\
                vv#####||#####\n\
                vv######vv######     It's a Me Mario!\n\
                 vvvv##VVVVVVV\n\
                   #########\n\
                  #########\n\
                 ## ###### ##\n\
               ####||#####||###\n\
               ####||#####||###\n\
               ####()#####()###\n\
               ### ####### ####\n\
               #__#########___#\n\
               #######  #######\n\
              ######      ######\n\
            ########      ########\n");
            
    printf("Can you please tell me how tall its the half pyramid near myta castle?\n");

    int floorPiramid = GetInt();
   // int numBlocksAH;
    int blocksInLB;
    string direction;
    int finish = 20;
    int jump = 0;
    if (floorPiramid < 0)
    {
        printf("I need directions to my fortress, could you please tell me how many block away I am?\n");
        
        floorPiramid = GetInt();
    }
    else
    {
       
        do 
        {
            direction = GetString();
            if (strcmp("d", direction) == 0) 
            {
            finish--;
            jump = 0;
            } 
            else if (strcmp("a", direction) == 0)
            {
            finish++;
            jump = 0;
            }
            else if (strcmp("w", direction) == 0)
            {
            jump = 2;
            }
        
        for(int i = 0; i < floorPiramid; i++) 
        {    
           // numBlocksAH = i + 2;//number of blocks after inclination
            blocksInLB = i - finish - 2;//number of blocks after to left border Since its inside a variable, it will be like a parentesis in an equation
            if (jump == 2)
            {
                if(i == floorPiramid - 3)
                {
                    printf("  #");
                    blocksInLB = blocksInLB + 3;
                }
            }
            else
            {
                if(i == floorPiramid - 1)
                {
                    printf("  #");
                    blocksInLB = blocksInLB + 3;
                }
            }
            for(int b = 0; b < floorPiramid - blocksInLB; b++) 
            {
                    printf(" ");
            }
            for(int c = 0; c < i + 2; c++) 
            {
                printf("#");
            }
            printf("\n");
            
        }
        }
        while (finish > 0);
    }  

    return 0;
}
