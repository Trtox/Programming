#include <iostream>
#include <string>
using namespace std;

int main()
{
    string rijec,rijec1,c,razdjelnik;
    razdjelnik=" ";
    int n,brojac,i;
    brojac=0;
    getline(cin,rijec);
    cin>>c;
    rijec1=rijec.substr(0,rijec.find(razdjelnik));
    n=rijec1.size();
    for(i=0;i<n;i++) {
        if(rijec1[i]==c[0]) {
            brojac++;
        }
    }
    if(brojac>0) {
        cout<<"Slovo "<<c<<" se pojavljuje "<<brojac<<" puta. ";

    }
    else {
        cout<<"Slova "<<c<<" nema u prvoj rijeci. ";

    }


    system("pause");
    return 0;
}
