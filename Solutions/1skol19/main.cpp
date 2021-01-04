#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;

    if(x==0 && y==0 && z==0)
    {
        a=0;
        b=0;
        c=0;
    }
    else if(x==0 && y==1 && z==1)
    {
        a=1;
        b=0;
        c=0;
    }
    else if(x==1 && y==1 && z==0)
    {
        a=0;
        b=0;
        c=1;
    }
    else if(x==1 && y==0 && z==1)
    {
        a=1;
        b=0;
        c=1;
    }
    else if(x==2 && y==1 && z==1 )
    {
        a=0;
        b=1;
        c=1;
    }
    else if(x==1 && y==2 && z==2)
    {
        a=1;
        b=0;
        c=1;
    }
    else if(x==1 && y==1 && z==2)
    {
        a=1;
        b=1;
        c=0;
    }
    else if(x==2 && y==2 && z==2)
    {
        a=1;
        b=1;
        c=1;
    }
    else
    {
        cout<<"Greska! Slucaj nije moguc!"<<endl;
        return 0;
    }

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;





    return 0;
}
