#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
 int a,b,c;
 int sjecene=0;
cin>>a>>b>>c;
if(a==0||b==0||c==0) {
    cout <<"Greska!";
}
else {

if (c>a||c>b) {
    cout << "Greska!";
}
else if(a%c!=0&&b%c==0) {
    sjecene=(b/c);
    cout << sjecene;
}
else if(a%c==0&&b%c!=0) {
    sjecene=(a/c);
    cout << sjecene;
}
else if(a%c!=0&&b%c!=0){
sjecene=(a/c)+(b/c);
sjecene++;
cout << sjecene;
}
else if(a%c==0&&b%c==0) {
    cout <<"0";
}
    }

system("pause");
return 0;
}
