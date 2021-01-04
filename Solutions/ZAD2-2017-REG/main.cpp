#include <iostream>
#include <cstdlib>
#include <stdio.h>
#define MAX 100
using namespace std;

int main() {
    int n,a[MAX],j,k,b,i,poz,pesma;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>a[i];
        }
    cin>>k;
    pesma=a[k-1];
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++) {
        if(a[i]>a[j]) {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }
    }
for(i=0;i<n;i++) {
 if(pesma==a[i]){
       poz=i+1;
 }
}
  cout <<poz;
    system("pause");
    return 0;
}
