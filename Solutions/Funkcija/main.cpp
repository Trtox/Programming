#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int i,br=0;
    string s,o;
    getline(cin,s);
    string k[s.size()],p[s.size()*2];

    for(i=0;i<s.size();i++)
    {
        p[i]=s[i];
        if(s[i]=='%')
        {
            if(s[i+1]=='t')
            {
                cin>>o;
                p[i]=o;
                i++;
            }
            if(s[i+1]=='k')
            {
                cin>>o;
                p[i]=o;
                i++;
            }
            if(s[i+1]=='u')
            {
                cin>>o;
                p[i]=o;
                i++;
            }

        }

    }
    for(i=0;i<s.size()+1;i++)
        cout<<p[i];


    return 0;
}
