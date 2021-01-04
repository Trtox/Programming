#include <iostream>
#include <cstdlib>
#define MAX 200
using namespace std;

int main()
{
 int n,a[MAX],i,j,k,broj,b[MAX];
 broj=-200;
 for(i=0;i<100;i++) {
    b[i]=broj;
 }
 cin>>n;
for(i=0;i<n;i++) {
    cin>>a[i];
}
for(i=0;i<n-2;i++)
    for(j=i+1;j<n-1;j++)
        for(k=j+1;k<n;k++) {
            if(i!=j&&j!=k) {
            if(a[i]+a[j]+a[k]==100) {
                cout<<a[i]<<" "<<b[j]<<" "<<b[k];
                b[i]=a[i];
                b[i+1]=a[j];
                b[i+2]=a[k];
            }
            }
        }
for(i=0;i<n;i++) {
    if(b[i]+b[i+1]+b[i+2]) {
        cout<<b[i];
    }
}













    system("pause");
    return 0;
}
