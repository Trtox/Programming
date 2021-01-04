#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    printf("Unesite velicinu reda matrice : ");
    scanf("%d" , &n);

    printf("Unesite velicinu kolone matrice : ");
    scanf("%d" , &m);

    int matrica[n][m];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        scanf("%d", &matrica[i][j]);

        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d ", matrica[i][j]);

        }
      printf("\n");
    }


    return 0;
}
