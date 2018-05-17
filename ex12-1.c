#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct particle{
    float mass;
    float cord;
    float velo;
    };


void print(struct particle kon)
{
    printf(" The mass of the particle is: %f\n",kon.mass);
    printf(" The x-coordinate of the particle is: %f\n",kon.cord);
    printf(" The velocity of the particle is: %f\n",kon.velo);

}

float myRand(float x, float y)
{
      /* this function should generate a random number between x and y */

      /* this generates a random between 0 and RAND_MAX */
      int r0 = rand();

      /* this generates a random number between 0 and 1 */
      float r1 = ((float)r0) / ((float)RAND_MAX);

      /* this stretches the interval of the random number */
      float r2 = (y - x) * r1;

      /* this moves the interval so that the a is the lower values */
      float r3 = r2 + x;

      return r3;
}


int main()
{

int q, i;
struct particle* vec;
float* ptr1;
float* ptr2;
float momentum,energy;

srand(time(NULL));

momentum=0;
energy=0;

printf("How many particles should be generated?\n");

scanf("%d",&q);

printf("\n\n");


vec=(struct particle*) calloc(q,sizeof(struct particle));
ptr1=(float*) calloc(q,sizeof(float));
ptr2=(float*) calloc(q,sizeof(float));

for(i=0;i<q;i++)
{
   /*vec[i].mass=rand()%1000+1;
   vec[i].cord=rand()%100-100;
   vec[i].velo=rand()%100-100;*/

   vec[i].mass=myRand(1,1000);
   vec[i].cord=myRand(-100,100);
   vec[i].velo=myRand(-100,100);

   ptr1[i]=vec[i].mass*vec[i].velo;
   ptr2[i]=vec[i].mass*vec[i].velo*vec[i].velo/2;


   momentum=momentum+ptr1[i];
   energy=energy+ptr2[i];

   printf("%d.\n",i+1);
   print(vec[i]);
   printf("The momentum of the particle is: %f\n",ptr1[i]);
   printf("The kinetic energy of the particle is: %f\n\n",ptr2[i]);
}

printf("Total momentum = %f\n",momentum);
printf("Total kinetic energy = %f",energy);



    return 0;
}
