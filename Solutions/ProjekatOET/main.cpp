#include <bits/stdc++.h>
#define ll long long
#define elif else if
#define endl "\n"
#define eb(x) emplace_back(x)
#define maxelem(v) *max_element(v.begin(),v.end())
#define minelem(v) *min_element(v.begin(),v.end())
#define FOR(a,b) for(int i=int(a);i<int(b);++i)

using namespace std;

const int mod = 1e9+7;
const float pi = acos(-1);
void izlaz(ll br)
{
  cout<<br;
  exit(0);

}
void ispis(float Im,float I)
{
    if((int)Im == 0 && (int)I == 0)
    {
        cout<<"Obe vrijednosti su nule!"<<endl;
    }

    return;
}

int main()
{
 // ios_base :: sync_with_stdio(false);
  //cin.tie(NULL);

  string analiticki_izraz,kompleksni_izraz,angleS;
  char prefix;
  string iz;
  cout<<"-------------------------OET  2---------------------------"<<endl;
  cout<<"Program pretvara analiticke u kompleksne izraze i obrnuto"<<endl<<"Zapocinjemo..."<<endl;
  cout<<"Da li pretvaramo analiticki u kompleksni ili obrnuto (ak , ka)? "<<endl;
  cin>>iz;
  if(iz=="ak" || iz=="AK")
  {
      cin>>analiticki_izraz;
      string ai=analiticki_izraz;
      // primjer izraza : i=6sin(314t+120);
      string Ims=ai.substr(ai.find('=')+1,ai.find("sin")-2);
      int Im = stoi(Ims);
      if(ai.find('+')<ai.size())
      {
          angleS = ai.substr(ai.find('+')+1,ai.find(')')-1);
          prefix = '+';
      }
      else
      {
          angleS = ai.substr(ai.find('-')+1,ai.find(')')-1);
          prefix = '-';
      }
      angleS=angleS.substr(0,angleS.size()-1);
      int ugao = stoi(angleS);
      if(prefix == '-')
        ugao = -ugao;
      float cosa = (float)cos(ugao*pi/180);
      float sina = (float)sin(ugao*pi/180);
      cout<<"Kompleksna vrijednost amplitude je "<<endl;
      if(prefix=='+')
      {
          cout<<"Im_ = "<<fixed<<setprecision(2)<<(float)Im*cosa<<" + "<<(float)Im*sina<<"j"<<endl;
          float I = (Im*1.41)/2;
          cout<<"Kompleksna efektivna vrijednost je "<<endl;
          cout<<"I_ = "<<fixed<<setprecision(2)<<I*cosa<<" + "<<I*sina<<"j"<<endl;
      }
      else
      {
          cout<<"Im_ = "<<fixed<<setprecision(2)<<(float)Im*cosa<<" "<<(float)Im*sina<<"j"<<endl;
          float I = (Im*1.41)/2;
          cout<<"Kompleksna efektivna vrijednost je "<<endl;
          cout<<"I_ = "<<fixed<<setprecision(2)<<I*cosa<<" "<<I*sina<<"j"<<endl;
      }

  }
  else
  {
    cout<<"Da li je kompleksni izraz efektivne ili maksimalne vrijednosti? (e,m)"<<endl;
    char tip;
    cin>>tip;
   // cin>>kompleksni_izraz;
   // string ki=kompleksni_izraz;
    cout<<"Unesi prvo realni pa imaginarni dio"<<endl;
    float Jm,Re;
    cin>>Re>>Jm;
    if(tip == 'e')
    {
        Re*=sqrt(2);
        Jm*=sqrt(2);
    }
    float ugao;
    ugao=atan((Jm*Jm)/(Re*Re));
    ugao = round((ugao*57.2957795));

    float Im;
    if(tip == 'e')
        Im = sqrt(Re*Re+Jm*Jm) * 1.41;
    else
        Im = sqrt(Re*Re+Jm*Jm);
    cout<<fixed<<setprecision(2)<<"i="<<Im<<"*sin(wt+"<<ugao<<")"<<endl;
   // doraditi efektivnu ima greska u formuli vrv

  }

  printf("Hvala na koriscenju,kraj programa!\nVerzija 0.1 by Trtox\n");
  system("pause");

 return 0;
}
