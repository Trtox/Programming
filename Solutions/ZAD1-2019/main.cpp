#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main()
{
    float a,b;
    cin >>a>>b;
    if(a>b) {
        cout << a*a  <<",000"<<" "<< b*b <<",000"<<endl;
    }
    else if(a==b) {
        cout << a <<",000"<<" "<< b <<",000"<<endl;
    }
    else if(a<b) {

      cout << setprecision(3) << 1/a <<" "<< setprecision(3) << 1/b <<endl;
    }

    system("pause");
    return 0;
}
