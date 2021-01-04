#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    printf("Unesite velicinu niza: ");
    scanf("%d" , &n);
    int niz[n];

    for(i=0;i<n;i++)
    {
        printf("Unesite %d. clan niza : ",i+1);
        scanf("%d" , &niz[i]);
    }


    for(i=0;i<n;i++)
        printf("%d. clan niza je : %d\n" , i+1 ,niz[i]);








    return 0;
}
