#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define ll long long
#define elif else if

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float kp1,kp2,r1,kd1,kd2,r2;
    cin>>kp1>>kp2;
    cin>>r1;
    cin>>kd1>>kd2;
    cin>>r2;

    float ra1,ra2;
    ra1=kd1-kp1;
    ra2=kd2-kp2;
    ra2*=ra2;
    ra1*=ra1;
    float r=sqrt(ra1+ra2);

    if(r==r1+r2)
        cout<<"Krugovi se dodiruju\n";
    elif(r<r1+r2)
        cout<<"Krugovi se preklapaju\n";
    else
        cout<<"Krugovi se ne preklapaju\n";


   return 0;

}
