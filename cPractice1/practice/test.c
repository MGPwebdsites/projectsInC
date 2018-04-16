#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int quarters = atoi(2);
   // float dimes = 0.10;
   // float nickles = 0.5;
   // float cents = 0.1;
    
    string testSting = GetString();

    int times = testSting + quarters;
    
    printf("qual to: %c", times);
}