#include<stdio.h>
#include<string.h>

int main()
{


int options;
int i;
int loop;

char color1[8];
char color2[8];
char color3[8];
char color4[8];
char color5[8];

int black=0;

char b1[]="black";
char b2[]="brown";
char r[]="red";
char o[]="orange";
char y[]="yellow";
char g[]="green";
char b[]="blue";
char v[]="violet";
char g2[]="gray";
char w[]="white";

/**************/

//char brown=1;
//char red    +-2%;
//char gold   +-5%;
//char silver +-10%;

printf("\nTHIS PROGRAM GIVES YOU THE COLOR CODE FOR RESISTOR\n\n");
printf("CHOOSE AN OPTION FOR RESISTOR COLOR CODE:\n\n"
        "OPTION 1: RESISTOR WITH 4 COLOR BAND\n\n"
        "OPTION 2: RESISTOR WITH 5 COLOR BAND\n\n");

scanf("%d", &options);

if (options==1)
{

printf("\nOPTION 1: 4 COLOR BANDS RESISTOR\n\n");
printf("\nENTER THE COLOR FOR EACH BAND\n\n");
printf("\nENTER THE FIRST COLOR BAND\n\n");
scanf ("%s", &color1);
printf("\nENTER THE SECOND COLOR BAND\n\n");
scanf ("%s", &color2);
printf("\nENTER THE THIRD COLOR BAND\n\n");
scanf ("%s", &color3);
printf("\nENTER THE FOURTH COLOR BAND\n\n");
scanf ("%s", &color4);




if (color1 && color2 && color3 && color4 == b1 || b2 ||  r ||  o || y ||  g || b ||  v ||  g2 ||  w)


    /*(color1==black || brown || red || orange || yellow || green || blue || violet || grey || white);
   (color2==black || brown || red || orange || yellow || green || blue || violet || grey || white);
   (color3==black || brown || red || orange || yellow || green || blue || violet || grey || white);
   (color4==black || brown || red || orange || yellow || green || blue || violet || grey || white);*/

{   for (loop=0; color1[loop] !=0; loop++)
    color1[loop] = toupper(color1[loop]);

     for (loop=0; color2[loop] !=0; loop++)
    color2[loop] = toupper(color2[loop]);

     for (loop=0; color3[loop] !=0; loop++)
    color3[loop] = toupper(color3[loop]);

     for (loop=0; color4[loop] !=0; loop++)
    color4[loop] = toupper(color4[loop]);

printf("\nTHE COLOR CODE BAND IS: %s-%s-%s-%s\n\n",color1,color2,color3,color4);

printf("\nTHE VALUE OF THE RESISTOR IS: %d %d %d %d\n\n", color1, color2, color3, color4);

printf("\nTHE TOLERANCE MAXIMUM VALUE IS: %d \n\n");

printf("\nTHE TOLERANCE MINIMUN VALUE IS: %d \n\n");

}

}


/*else if (options==2)
{

printf("\nOPTION 2: 5 COLOR BANDS RESISTOR\n\n");
printf("\nENTER THE COLOR FOR EACH BAND\n\n");
printf("\nENTER THE FIRST COLOR BAND\n\n");
scanf ("%s", &color1);
printf("\nENTER THE SECOND COLOR BAND\n\n");
scanf ("%s", &color2);
printf("\nENTER THE THIRD COLOR BAND\n\n");
scanf ("%s", &color3);
printf("\nENTER THE FOURTH COLOR BAND\n\n");
scanf ("%s", &color4);
printf("\nENTER THE FIFTH COLOR BAND\n\n");
scanf ("%s", &color5);

if  (color1==black || brown || red || orange || yellow || green || blue || violet || grey || white);
    (color2==black || brown || red || orange || yellow || green || blue || violet || grey || white);
    (color3==black || brown || red || orange || yellow || green || blue || violet || grey || white);
    (color4==black || brown || red || orange || yellow || green || blue || violet || grey || white);
    (color5==black || brown || red || orange || yellow || green || blue || violet || grey || white);

{
    for (loop=0; color1[loop] !=0; loop++)
    color1[loop] = toupper(color1[loop]);

     for (loop=0; color2[loop] !=0; loop++)
    color2[loop] = toupper(color2[loop]);

     for (loop=0; color3[loop] !=0; loop++)
    color3[loop] = toupper(color3[loop]);

     for (loop=0; color4[loop] !=0; loop++)
    color4[loop] = toupper(color4[loop]);

    for (loop=0; color5[loop] !=0; loop++)
    color5[loop] = toupper(color5[loop]);


printf("\nTHE COLOR CODE BAND IS: %s-%s-%s-%s-%s\n\n", color1,color2,color3,color4,color5);

printf("\nTHE VALUE OF THE RESISTOR IS: %d %d %d %d %d\n\n", color1, color2, color3, color4,color5);

printf("\nTHE TOLERANCE MAXIMUM VALUE IS: %d \n\n");

printf("\nTHE TOLERANCE MINIMUN VALUE IS: %d \n\n");


}

}*/



return 0;
}
