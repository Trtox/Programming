#include <iostream>
#include  "funkcije.h"
#include <string>
using namespace std;

int main()
{
    /*
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sortrastuce(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i];
        */
     int n;
     cin>>n;
     if(prost(n))
        cout<<"DA";
     else
        cout<<"NE";

    return 0;
}
