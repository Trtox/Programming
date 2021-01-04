#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int brojac=0;
    string s1;
    string s2;
    string s3;
    cin>>s1;
    cin>>s2;
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        if(s1[i]!=s2[i]) {
            brojac++;
        stringstream ss;
        ss << brojac;
        string str = ss.str();
            s3=s1.replace(i,1,str);
         }
        else {
            s3=s1;
        }
    }
for(int i=0;i<n;i++) {
    cout<<s3[i]<<endl;
}

    system("pause");
    return 0;
}
