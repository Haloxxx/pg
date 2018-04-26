#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim;
    float* vec;

    printf("How many numbers do you want to enter? ");
    scanf("%d",&dim);

    vec = (float *) malloc(dim* sizeof(float));

    if (vec == NULL)
    {
        printf("ERROR: memory allocation was not successful!\n");
        return EXIT_FAILURE;
    }

    int i;
    for(i=0; i<dim; i++)
    {
        printf("%d ",i+1);
        scanf("%f",&vec[i]);
    }

    free(vec);


    return EXIT_SUCCESS;
}
