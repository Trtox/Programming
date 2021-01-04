#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
string rijec;
int x,y;
x=0;
y=0;
getline(cin,rijec);
 for(char& c : rijec) {

  switch(c) {
  case ' ': y=y+3;
    break;
  case 'a': y=y+1;
    break;
  case 'e': x=x-1;
    break;
   case 'o': x=x-1;
    break;
   case 'i': x=x-1;
    break;
  default: x=x+2;
    break;
  }
 }
cout <<x<< " "<<y;

system("pause");
return 0;
}
