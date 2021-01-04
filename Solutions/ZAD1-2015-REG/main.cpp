#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n,i;
    float c[1000],a[1000],b[1000];
    cout<<"N=";
    cin>>n;
    cout<<"A(N) = ";
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<"B(N) = ";
    for(i=0;i<n;i++) {
        cin>>b[i];
    }
    for(i=0;i<n;i++) {
        c[i]=((1/(pow(a[i],2)))+(2/b[i]));
    }
    cout<<"Elementi niza C su: ";
    for(i=0;i<n;i++) {
       cout<<fixed<<setprecision(3)<<c[i]<<" ";
    }


    system("pause");
    return 0;
}
