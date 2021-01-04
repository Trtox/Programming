#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int brojac=0;
   char x;
   long long n;
   cin>>n;
   string stringn;
   string s[n];
   int i;


   for(i=0;i<n;i++)
    cin>>s[i];



    for(i=0; i<n; i++)
    {
        stringn=s[i];
        for(size_t j=0;j<stringn.size();j++)
        {
            x=stringn[j];
            if(stringn[j]==stringn[j+1])
            {
            brojac++;
            }

            else
            {
            brojac++;
            cout<<brojac<<x;
            brojac=0;
            }
        }
        cout<<endl;

    }





    return 0;
}
