#include <bits/stdc++.h>

using namespace std;

bool slozen(long long n)
{
    int brojac=0;
    if(n==2 || n==3)
        return false;
    else
        for(int i=3;i<=sqrt(n);i++)
      {
         if(n%i==0)
         {
           return true;

         }
      }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   vector<long long> niz,niz2,niz3,niz4,niz5,niz6,niz7,niz8,niz9;
   long long br[10000]={0};
   long long n,i,j,broj,brojac=0,ostatak=0;
   string s;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>j;
       niz.push_back(j);
       niz2.push_back(j);
       niz3.push_back(j);
       niz4.push_back(j);
       niz5.push_back(j);
       niz6.push_back(j);
       niz7.push_back(j);
       niz8.push_back(j);
       niz9.push_back(j);
   }

   for(i=0;i<n;i++)
   {
       broj=niz2[i];
       while(broj>0)
       {
           ostatak=broj%2;
           broj/=2;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz2[i]=stoll(s);
       s.clear();
       if(slozen(niz2[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
  s.clear();

   for(i=0;i<n;i++)
   {
       if(niz[i]!=-1)
       {
           broj=niz3[i];
           while(broj>0)
           {
               ostatak=broj%3;
               broj/=3;
               brojac++;
               if(brojac==1)
                s=to_string(ostatak);
               else
                s+=to_string(ostatak);
           }
           reverse(s.begin(),s.end());
           niz3[i]=stoll(s);
           s.clear();
           if(slozen(niz3[i]))
            br[i]++;
           else
            niz[i]=-1;
       }
   }
   s.clear();

   for(i=0;i<n;i++)
   {
       broj=niz4[i];
       while(broj>0)
       {
           ostatak=broj%4;
           broj/=4;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz4[i]=stoll(s);
       s.clear();
       if(slozen(niz4[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
   s.clear();

   for(i=0;i<n;i++)
   {
       broj=niz5[i];
       while(broj>0)
       {
           ostatak=broj%5;
           broj/=5;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz5[i]=stoll(s);
       s.clear();
       if(slozen(niz5[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
   s.clear();

   for(i=0;i<n;i++)
   {
       broj=niz6[i];
       while(broj>0)
       {
           ostatak=broj%6;
           broj/=6;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz6[i]=stoll(s);
       s.clear();
       if(slozen(niz6[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
   s.clear();

   for(i=0;i<n;i++)
   {
       broj=niz7[i];
       while(broj>0)
       {
           ostatak=broj%7;
           broj/=7;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz7[i]=stoll(s);
       s.clear();
       if(slozen(niz7[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
   s.clear();

   for(i=0;i<n;i++)
   {
       broj=niz8[i];
       while(broj>0)
       {
           ostatak=broj%8;
           broj/=8;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz8[i]=stoll(s);
       s.clear();
       if(slozen(niz8[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
   s.clear();

   for(i=0;i<n;i++)
   {
       broj=niz9[i];
       while(broj>0)
       {
           ostatak=broj%9;
           broj/=9;
           brojac++;
           if(brojac==1)
            s=to_string(ostatak);
           else
            s+=to_string(ostatak);
       }
       reverse(s.begin(),s.end());
       niz9[i]=stoll(s);
       s.clear();
       if(slozen(niz9[i]))
        br[i]++;
       else
        niz[i]=-1;
   }
   s.clear();

   for(i=0;i<n;i++)
    if(niz[i]!=-1)
   cout<<niz[i]<<" ";


    return 0;
}
