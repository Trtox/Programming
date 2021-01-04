#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,niz[50],br,brojac,nizbr[50],i;
    brojac=0;
    br=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>niz[i];
    }
    for(i=0;i<n;i++)
    {
        br=0;
        do
        {
         brojac=niz[i]%2;
        niz[i]=niz[i]/2;
        if(brojac==1)
            br++;
        }   while(niz[i]!=0);
        nizbr[i]=br;
    }
    for(i=0;i<n;i++)
        cout<<nizbr[i]<<endl;









    system("pause");
    return 0;
}
