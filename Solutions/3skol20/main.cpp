#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long m,n;
    string m1,n1,zbir1,zbir2;

    cin>>m;
    cin>>n;
    m1=to_string(m);
    n1=to_string(n);


    if(m1.size()%2!=0)
        m1=m1.substr(0,m1.size()/2+1);
    else
        m1=m1.substr(0,m1.size()/2);


    if(n1.size()%2!=0)
    {
        n1=n1.substr(0,n1.size()/2+1);
    }
    else
        n1=n1.substr(0,n1.size()/2);


    zbir1=m1+n1;
    zbir2=n1+m1;
    m=stoull(zbir1);
    n=stoull(zbir2);
    if(m>n)
        cout<<zbir1;
    else
        cout<<zbir2;




    cin.ignore();
    cin.get();
    return 0;
}
