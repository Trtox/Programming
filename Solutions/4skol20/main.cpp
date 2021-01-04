#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long br,i=0,b=0;
    string n,p[10000];
    cin>>n;

    do
    {
        getline(cin,p[i]);
        i++;
        b++;
    } while(p[i-1]!="0");

    for(i=0;i<b-1;i++)
    {
        if(p[i]=="I")
            reverse(n.begin(),n.end());

        if(p[i]=="D")
        {
            br=stoll(p[i+1]);

            n=n.substr(n.size()-br,n.size()-1)+n.substr(0,n.size()-br);
            i++;
        }

        if(p[i]=="L")
        {
            br=stoll(p[i+1]);
            n=n.substr(br,n.size()-1)+n.substr(0,br);
            i++;
        }



    }

    cout<<n;

    return 0;
}
