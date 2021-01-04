#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define ll long long
#define elif else if

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int a,br[22]={0};

    getline(cin,s);
    cin>>a;

    for(char c : s)
    {
        switch(c)
        {
            case 'A': br[0]++;
            break;
            case 'B': br[1]++;
            break;
            case 'C': br[2]++;
            break;
            case 'D': br[3]++;
            break;
            case 'E': br[4]++;
            break;
            case 'F': br[5]++;
            break;
            case 'G': br[6]++;
            break;
            case 'H': br[7]++;
            break;
            case 'I': br[8]++;
            break;
            case 'J': br[9]++;
            break;
            case 'K': br[10]++;
            break;
            case 'L': br[11]++;
            break;
            case 'M': br[12]++;
            break;
            case 'N': br[13]++;
            break;
            case 'O': br[14]++;
            break;
            case 'P': br[15]++;
            break;
            case 'R': br[16]++;
            break;
            case 'S': br[17]++;
            break;
            case 'T': br[18]++;
            break;
            case 'U': br[19]++;
            break;
            case 'V': br[20]++;
            break;
            case 'Z': br[21]++;
            break;



        }
    }
    rep(0,br[0])
    {
        cout<<"*";
    }
    cout<<"A"<<\t;

   return 0;

}
