#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int* domino(int *res, int *p)
{
    int i, k, most, l;

    int* b;

    b=*p;

    most=0;
    k=0;
    l=0;

    for(i=0;i<10;i++)
    {
        if(res[i]>most)
        {
            most=res[i];
            //k=i+1;
            b[0]=i+1;
        }

        if(res[i]==most)
        {
            l++;
            b[l]=i+1;
        }
    }
return(b);
}


int counter(int* vec, int* res, int n)
{
    int i;


    for(i=0;i<n;i++)
    {
        res[vec[i]-1]++;
    }

    for(i=0;i<10;i++)
    {
    printf("%2i:  %3i\n",i+1,res[i]);
    }



}


float length(int* vec, int n)
{
    float result, part;
    int i;


    part=0;
    result=0;

    for(i=0;i<n;i++)
    {
        part=part+vec[i]*vec[i];
    }

    result=sqrt(part);

    return(result);
}


int sum(int* a, int n)

{
    int result, i;

    result=0;

    for(i=0;i<n;i++)
    {
       result=result+a[i];
    }

    return(result);
}


void printVector(int* a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%2i: %3i\n",i,a[i]);
    }
}

int main()
{
    int vec[100];
    int res[10];
    int  p[10];

    srand(time(NULL));

    int i;

     for(i=0;i<10;i++)
    {
        res[i] = 0;
    }



    for(i=0;i<100;i++)
    {
        vec[i] = rand() % 10 + 1;
    }

    printf("The vector is:\n");
    printVector(vec, 100);

    printf("\n\n\nThe sum of the vector elements is: %i\n\n",sum(vec,100));

    printf("The length of the vector is: %.2f\n",length(vec,100));

    printf("\nNumbers appear as follows:\n");
    counter(vec,res,100);

    domino(res, p);



    return EXIT_SUCCESS;
}
