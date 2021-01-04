#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int broj,a,b,c,d,e,f,suma;
  cin>>broj;
  a=broj/100000;
  b=(broj-a*100000)/10000;
  c=(broj -a*100000-b*10000)/1000;
  d=(broj-a*100000-b*10000-c*1000)/100;
  e=(broj-a*100000-b*10000-c*1000-d*100)/10;
  f=(broj-a*100000-b*10000-c*1000-d*100-e*10);

  suma=a+b+c+d+e+f;
  if(suma>32) {
    cout << "Petrov dan nece biti uspjesan!" << endl;
  }
else {
    cout << "Petrov dan ce biti uspjesan!" << endl;
}


    system("pause");
    return 0;
}
