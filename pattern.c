#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            // For every odd column print 1
            printf("01");
        }

        printf("\n");
    }

    return 0;

}
