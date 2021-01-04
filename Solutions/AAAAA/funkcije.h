#ifndef FUNKCIJE_H_INCLUDED
#define FUNKCIJE_H_INCLUDED
#include <string>
void sortopadajuce(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

void sortrastuce(int a[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

bool prost(int n)
{
    int brojac=0;
    if(n%2==0)
        return false;
    else
        for(int i=3;i<=sqrt(n);i++)
      {
         if(n%i==0)
         {
            return false;

         }
      }
    return true;
}


#endif // FUNKCIJE_H_INCLUDED
