#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n,i;
    float a[100],b[100],suma1,suma2,x;
    int y;
    suma1=0;
    suma2=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    for(i=0;i<n;i++) {
        cin>>b[i];
    }
    for(i=0;i<n;i++) {
        suma1=suma1+a[i];
    }
    for(i=0;i<n;i++) {
        suma2=suma2+b[i];
    }

    x=(suma2*100)/suma1;

if( abs( x  - int( x ) ) >=0 )
{
   cout<<fixed<<setprecision(1)<<x;
}
else
{
     y = int( x );
    cout<< y;
}







    system("pause");
    return 0;
}
