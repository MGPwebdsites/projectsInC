#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void) 
{
    int heightPiramid;
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
    do
    {
        printf("Height:");
            
        heightPiramid = GetInt();
        if (heightPiramid == 0)
        {
            return 0;
        }
    }
        
    while (heightPiramid < 1 || heightPiramid > 23); 
    
        

    for(int i = 0; i < heightPiramid; i++) 
    {    
       
        for(int b = 0; b < heightPiramid - i - 1; b++) 
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
