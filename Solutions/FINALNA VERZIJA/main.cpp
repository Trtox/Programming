#include <bits/stdc++.h>

using namespace std;

bool slozen(long long n)
{
    int brojac=0;
    if(n==2 || n==3)
        return false;
    else
        for(long long i=1;i<=n;i++)
      {
         if(n%i==0)
         {
            brojac++;

         }
      }
    if(brojac>2)
        return true;
    else
        return false;
}

int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   vector<long long> niz,niz2,niz3,niz4,niz5,niz6,niz7,niz8,niz9;
   long long br[10000]={0};
   long long n,i,j,broj2,broj3,broj4,broj5,broj6,broj7,broj8,broj9,brojac2=0,brojac3=0,brojac4=0,brojac5=0,brojac6=0,brojac7=0,brojac8=0,brojac9=0,ostatak2=0,ostatak3=0,ostatak4=0,ostatak5=0,ostatak6=0,ostatak7=0,ostatak8=0,ostatak9=0;
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
       broj2=niz2[i];
       broj3=niz3[i];
       broj4=niz4[i];
       broj5=niz5[i];
       broj6=niz6[i];
       broj7=niz7[i];
       broj8=niz8[i];
       broj9=niz9[i];
       while(broj2>0 || broj3>0 || broj4>0 || broj5>0 || broj6>0 || broj7>0 || broj8>0 || broj9>0)
       {
         // UBACITI IF OVDJE DA PROVJERI JEL BROAJC 0
           ostatak2=broj2%2;
           broj2/=2;
           brojac2++;
           if(brojac2==1)
            s=to_string(ostatak2);
           else
            s+=to_string(ostatak2);

            reverse(s.begin(),s.end());
       niz2[i]=stoll(s);
       s.clear();
       if(slozen(niz2[i]))
        br[i]++;
       else
        niz[i]=-1;

               ostatak3=broj%3;
               broj/=3;
               brojac3++;
               if(brojac3==1)
                s=to_string(ostatak);
               else
                s+=to_string(ostatak);

           reverse(s.begin(),s.end());
           niz3[i]=stoll(s);
           s.clear();
           if(slozen(niz3[i]))
            br[i]++;
           else
            niz[i]=-1;

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











   }
    return 0;
}
