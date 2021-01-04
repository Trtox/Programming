#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define i64 long long
#define elif else if

using namespace std;


int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  float uab,kr,rez=0,r,pg=0,unos;
  int bp,i;
  cin>>uab>>kr>>pg>>bp;
  r = uab;
  vector<float> udp,cg;
  rep(0,bp)
    {
        cin>>unos;
        udp.push_back(unos);
    }
  rep(0,bp)
    {
        cin>>unos;
        cg.push_back(unos);
    }
 nastavak : while(r)
  {
      for(i=0;i<udp.size();i++)
      {
        if(rez==0)
        {

              if(udp[i]>=(kr/pg*50) && udp[i+1]<=kr)
              {
                  pg = udp[i]/100*5;
                  rez+= pg*2+5;
                  rez+=cg[i]*(kr-pg);
                  r-=udp[i];
                  cout<<r;
                  return 0;
                  goto nastavak;

              }
              else if(udp[i+1] > kr )
              {
                  pg = udp[i-1]/100*5;
                  rez += pg*2+5;
                  rez += cg[i-1]*(kr-pg);
                  r -= udp[i-1];
                  udp.erase(udp.begin(),udp.begin()+i);
                  cg.erase(cg.begin(),cg.begin()+i);
                  goto nastavak;
              }
        }
/*
        else
        {
            if( (uab-udp[i])>=(kr/pg*50) && udp[i+1]<=kr)
            {



            }
            else
            {

            }


        }
      }
      */

  }
}
  cout<<fixed<<setprecision(1)<<rez;

 return 0;
}
