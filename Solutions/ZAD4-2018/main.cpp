#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  int a,b,c,d,br,nogepasa,nogemacaka;
  cin>>c>>d>>br;
  nogepasa=4;
  nogemacaka=4;
  a= c*nogemacaka;
  b= d*nogepasa;
  if(br==a+b) {
    cout << "DA" << endl;
  }
  else {
    cout << "NE" << endl;
  }



  system("pause");
  return 0;
}
