#include <cs50.h>
#include <stdio.h>


int main(void) 
{
    int back = 1; //the program will run until you tell it to stop by changin 1 to 0
        do 
        {
            printf("Welcome to the Water Saver Simulator, Please choose one of our three options by typing the number:\n\n \
            (1) WaterSaver (calculate water spend during shower)\n \
            (2) WaterDaily (calculate water needed based on height and weight)\n \
            (3) WaterBody (calculate how much water does your body have in average)\n\n");
                
            printf("Type the number for your choice: ");
            int choice = GetInt(); 
            
            if (choice == 1) // String compare function foundin string.h is used to compare strings
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
                              
                    printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                    back = GetInt();
                } 
                else 
                {
                    printf("\nYou eather love the planet too much or dont like showers at all.");    
                    printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                    back = GetInt();
                }
            }
            else if (choice == 2)
            {
                printf("\nPlease enter your weight in lbs: _");
                
                int weight = GetInt();
                
                printf("\nFrom 1 to 5 what is your activity level _"); 
                
                int activity = GetInt(); //12 ounces for every 30 minutes of activity
                
                int activityWater = weight * 2/3; //calculation from http://www.slenderkitchen.com/article/how-to-calculate-how-much-water-you-should-drink-a-day
                
                switch (activity)
                {
                    case 1:
                            printf("\nCalculated Answer:\n\
                            ***************************************************************************************\n\
                            ** You should have a water intake of %d ounces a day or %0.2f bottles of water a day **\n\
                            **********************************************************************************\n",activityWater, (weight * 2/3) / 16.9);
                                  
                            printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                            back = GetInt();
                            break;
                    case 2:
                            printf("\nCalculated Answer:\n\
                            ***************************************************************************************\n\
                            ** You should have a water intake of %d ounces a day or %0.2f bottles of water a day **\n\
                            ***************************************************************************************\n", activityWater + 12, (activityWater + 12) / 16.9);
                                  
                            printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                            back = GetInt();
                            break;
                    case 3:
                            printf("\nCalculated Answer:\n\
                            ***************************************************************************************\n\
                            ** You should have a water intake of %d ounces a day or %0.2f bottles of water a day **\n\
                            ***************************************************************************************\n", activityWater + 24, (activityWater + 24) / 16.9);
                                  
                            printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                            back = GetInt();
                            break;
                    case 4:
                            printf("\nCalculated Answer:\n\
                            ***************************************************************************************\n\
                            ** You should have a water intake of %d ounces a day or %0.2f bottles of water a day **\n\
                            ***************************************************************************************\n", activityWater + 48, (activityWater + 48) / 16.9);
                                  
                            printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                            back = GetInt();
                            break;
                    case 5:
                            printf("\nCalculated Answer:\n\
                            ***************************************************************************************\n\
                            ** You should have a water intake of %d ounces a day or %0.2f bottles of water a day **\n\
                            ***************************************************************************************\n", activityWater + 96, (activityWater + 96) / 16.9);
                                  
                            printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                            back = GetInt();
                            break;
                    default:
                            printf("\nYou eather too active or dead if you dont move at all :/.");    
                            printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                            back = GetInt();
                            break;
                }
                
            }
            else if (choice == 3)
            {
                printf("\nPlease enter your weight in lbs: _");
                int weight = GetInt();
      
                float waterinWeight = 0.57 * weight; // average person has between 0.57 - 0.65 per calculation on http://chemistry.about.com/od/waterchemistry/f/How-Much-Of-Your-Body-Is-Water.htm
                float toOunces = waterinWeight * 16; //one pound has 16 ounces
                
                if (  weight > 50 ) 
                {
                    printf("\nCalculated Answer:\n\
                    **************************************************************************\n\
                    ** Your body contains %.2f ounces of water or %0.2f bottles of water **\n\
                    **************************************************************************\n", toOunces, toOunces / 16.9);
                              
                    printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                    back = GetInt();
                }
                else 
                {
                    printf("\nYou are eather a jellyfish or gotta let go on the diet :/.");    
                    printf("\nDo you want to return to the start? (1)Yes (0)No\n");
                    back = GetInt();
                }
            }
        } 
        while (back == 1);
}