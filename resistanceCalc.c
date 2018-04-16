#include<stdio.h>
#include<math.h>


int main()
{
int option;
int i;
int n;
//int v;
int series=0;
float parallel=0;
float parallel2;
float series_parallel=0;



printf("\n  THIS PROGRAM DO THE SUM OF TOTAL RESISTANCE IN A DC CIRCUITS:\n"
       "\n* OPTION 1 FOR TOTAL RESISTANCE IN SERIES\n"
       "\n* OPTION 2 FOR TOTAL RESISTANCE IN PARALLEL\n"
       "\n* OPTION 3 FOR TOTAL RESISTANCE IN SERIES-PARALLEL\n\n");

scanf("%d", &option);



if (option == 1)
{
printf("\nOPTION 1: RESISTANCE IN SERIES\n");
printf("\nENTER HOW MANY RESISTORS IN SERIES YOU WANT TO ADD\n\n");
scanf("%d", &n);

                printf("\nENTER THE VALUES FOR THE RESISTORS:\n");
                int s[n];
                for (i=0; i<n; i++)
               // , s[n]
                {
                printf("\nRESISTOR [%d] VALUE IS:\n\n", i+1);
                scanf("%d", &s[i]);
                series +=s[i];
                }

printf("\nTHE TOTAL RESISTANCE IN SERIES IS: %d\n\n", series);



}

else if (option == 2)
{
printf("\nOPTION 2: RESISTANCE IN PARALLEL\n");
printf("\nENTER HOW MANY RESISTORS IN PARALLEL YOU WANT TO ADD\n\n");
scanf("%d", &n);


            printf("\nENTER THE VALUES FOR THE RESISTORS:\n\n");
                float p[n];
                for (i=0; i<n; i++)
            //    , p[n]
                {
                printf("\nRESISTOR [%d] VALUE IS:\n\n", i+1);
                scanf("%f", &p[i]);
                parallel += 1/p[i];
                parallel2= 1/parallel;
                }

printf("\nTHE TOTAL RESISTANCE IN PARALLEL IS: %0.2f\n", parallel2);

}

else if (option == 3)
{
printf("\nOPTION 3: RESISTANCE IN SERIES-PARALLEL\n");
printf("\nFIRST, DO THE SUM OF RESISTORS IN PARALLEL, ENTER HOW MANY RESISTORS ARE:\n\n");
scanf("%d", &n);

printf("\nENTER VALUES FOR THE RESISTORS:\n\n");
                float sp[n];
                for (i=0; i<n; i++)
              //  , sp[n]
                {
                printf("\nRESISTOR [%d] VALUE IS:\n\n", i+1);
                scanf("%f", &sp[i]);
                parallel += 1/sp[i];
                parallel2 = 1/parallel;
                }


// printf("\nTHE TOTAL RESISTANCE IN PARALLEL IS: %.2f\n", parallel2);

printf("\nNOW ENTER HOW MANY RESISTORS IN SERIES YOU WANT TO ADD\n\n");
scanf("%d", &n);

                printf("\nENTER THE VALUES FOR THE RESISTORS:\n");
                int sp2[n];
                int spt;
                for (i=0; i<n; i++)
             //   , sp2[n]
                {
                printf("\nRESISTOR [%d] VALUE IS:\n\n", i+1);
                scanf("%d", &sp2[i]);
                series_parallel +=sp2[i];
                spt=series_parallel+parallel2;
                }

printf("\nTHE TOTAL RESISTANCE IN SERIES-PARALLEL IS: %d\n\n", spt);

}

return 0;
}




