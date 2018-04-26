#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n = 2;
    const int m =2;
    float A[n][m];

    int i,j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    }

    printf("A:\n");
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
        {
            printf(" %10.3f",A[i][j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
