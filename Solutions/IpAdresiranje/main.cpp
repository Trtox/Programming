#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string ip,o1,o2,o3,o4,n1,n2,n3,n4;
    int b1,b2,b3,b4,n;
    string razdjelnik = ".";
    getline(cin,ip);

    o1= ip.substr(0,ip.find(razdjelnik));
    n1=ip.erase(0,o1.size()+1);
    b1=stoi(o1);

    o2=n1.substr(0,n1.find(razdjelnik));
    n2=ip.erase(0,o1.size()+o2.size()-2);
    b2=stoi(o2);

    o3=n2.substr(0,n2.find(razdjelnik));
    b3=stoi(o3);

    o4=n2.substr(n2.find(razdjelnik)+1,n2.size());
    b4=stoi(o4);

    cout<<o1+razdjelnik+o2+razdjelnik+o3+razdjelnik+o4;
    if(b1<128)
    {
        cout<<"Tip A "<<"adresa mreze : "<<o1<<" adresa uredjaja "<<n1;
        return 0;
    }

    else if(b1>127 && b1<192)
    {
         cout<<"Tip B "<<"adresa mreze : "<<o1+razdjelnik+o2<<" adresa uredjaja "<<n2;
         return 0;
    }

    else if(b1>191 && b1<224)
    {
      cout<<"Tip C "<<"adresa mreze : "<<o1+razdjelnik+o2+razdjelnik+o3<<" adresa uredjaja "<<o4;
    }
    else
    {
        cout<<"Greska! Nemoguca IP adresa!";
    }
    system("PAUSE");
    return 0;
}
