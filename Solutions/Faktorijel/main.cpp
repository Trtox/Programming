#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n,i,c[20]={0};
   cin>>n;
   cout<<n<<"! = ";
   for(i=2;i<=n;i++)
   {
      switch(i)
      {
          case 2 : c[2]++;
          break;
          case 3 : c[3]++;
          break;
          case 4: c[2]+=2;
          break;
          case 5 : c[5]++;
          break;
          case 6 : {c[2]++; c[3]++;}
          break;
          case 7 : c[7]++;
          break;
          case 8 : c[2]+=3;
          break;
          case 9 : c[3]+=2;
          break;
          case 10 : {c[2]++; c[5]++;}
          break;
          case 11 : c[11]++;
          break;
          case 12 :  {c[2]+=2; c[3]++;}
          break;
          case 13 : c[13]++;
          break;
          case 14 : {c[2]++; c[7]++;}
          break;
          case 15 : {c[5]++; c[3]++;}
          break;
          case 16 : c[2]+=4;
          break;
          case 17 : c[17]++;
          break;
          case 18 :  {c[3]+=2; c[2]++;}
          break;
          case 19 : c[19]++;
          break;
          case 20 : {c[2]+=2; c[5]++;}
      }



   }
   cout<<c[2]<<" ";
   for(i=3;i<=19;++i)
   {
       if(c[i]!=0)
        cout<<c[i]<<" ";
   }







    return 0;
}
