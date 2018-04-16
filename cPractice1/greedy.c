#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    
    int quarters = 25;
    int dimes = 10;
    int nickles = 5;
 
    
    int countQr;
    int countDi;
    int countNi;
    float change;
    int coins;
    int remain;
    int amountToDecimal;
    
    
    do 
    {
        printf("You gave me: ");
        change = GetFloat();
        
        if(change == 0||change <= 0)
        printf("Number Should be greater than 0\n:");
    }
    while(change <= 0);
    
 
    
    amountToDecimal = (int)round(change*100);
    
    countQr = amountToDecimal / quarters;
    remain = amountToDecimal % quarters;
    
    countDi = remain / dimes;
    remain = remain % dimes;
        
    countNi = remain / nickles;
    remain = remain % nickles;
        
    coins = countQr + countDi + countNi + remain;    
    printf("%d\n", coins);  
    return 0;
}
