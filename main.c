#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int myRand(int m)
{

    return(rand()%m+1);

}


int main()
{
   int n, randomNumber;
   printf("How many random numbers would you like to have? ");
   scanf("%i",&n);

   srand(time(NULL));

   int i;
   /*for(i=1;i<=n;i++)
   {
       randomNumber = rand() % 10 +1;
       printf("%i\n", randomNumber);
   }
   */

   for(i=1; i<=n; i++)
   {
      printf("%i\n",myRand(n));
   }



   return 0;

}
