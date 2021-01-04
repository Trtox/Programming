#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
{
   int n,k,a[MAX],b[MAX],i,suma;
   cin>>n>>k;
   suma =0;
   for(i=0;i<k;i++) {
    cin>>a[i];
   }
   for(i=0;i<n;i++) {
    cin>>b[i];
   }
 for(i=0;i<k;i++) {
        suma=suma+b[a[i]-1];
 }
   cout<<"Ukupan broj bodova koji su osvojili najbolji ucenici je "<<suma;

    system("pause");
    return 0;
}
