#include <bits/stdc++.h>

using namespace std;

bool compare(string s1,string s2)
{
    return s1.size() < s2.size();
}

int nadjiPonavljanje(string s)
{
    int i,j,br=-1;

    for(size_t i=0;i<s.size()-1;i++)
        for(size_t j=i+1;j<s.size();j++)
            if(s[i]==s[j])
                br++;

    if(br> -1)
        return -1;

    else
        return 0;
}

int main()
{

    int l,n,i,j,o,br=0,pos=0;
    string s,k[1000],p;
    cin>>s;
    l=s.size();


    for(i=0;i<l;i++)
        for(j=1;j<=l-i;j++)
    {
        k[pos]=s.substr(i,j);
        pos++;

    }
    pos++;
    sort(k,k+pos,compare);

    for(i=pos-1;i>=0;i--)
    {
        p=k[i];

        if(nadjiPonavljanje(p)==0)
         {
             cout<<p.size();
             return 0;
         }
        else
            continue;

    }
    return 0;
}
