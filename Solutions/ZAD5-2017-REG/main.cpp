#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

int main()
{
string s;
string razdelnik;
string broj1;
string broj2;
razdelnik="+";
getline(cin,s);
broj1 = s.substr( 0, s.find( razdelnik ) );
broj2 = s.erase( 0, s.find( razdelnik ) + razdelnik.length() );
stringstream br1(broj1);
int a=0;
br1>>a;
stringstream br2(broj2);
int b=0;
br2>>b;
cout<<a<< " "<<"+"<<" "<<b<<" = "<<a+b;

system("pause");
return 0;
}
