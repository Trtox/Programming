#include <iostream>
#include <cstdlib>
#define MAX 50

using namespace std;


    void init(int niz[])
    {
        for(int i=0; i<MAX; i++)
            niz[i]=-1;
    }

    void ispisi(int niz[])
    {
        int i=0;
        while(niz[i]!=-1)
        i++;
        for(int j=i-1;j>=0;j--)
            cout<<niz[j]<<endl;

    }


 int main()
 {
    int br[MAX],n,temp,i;
    init(br);
    br[0]=1;
    cout<<"1.polje: "<<br[0]<<endl;
    for(n=1;n<=64;n++)
    {
        temp=0;
        i=0;
        while(br[i]!=-1)
        {
            br[i]=br[i]*2+temp;
            temp=0;
            if(br[i]>9)
            {
                if(br[i+1]==-1)
                    br[i+1]=0;
                    temp=br[i]/10;
                    br[i]%=10;
            }
            i++;
        }
        if(n<64)
        {
            cout<<n+1<<".polje: "; ispisi(br);

        }
        else
        {
            br[0]=-1;
            cout<<endl<<"UKUPNO:\t\t"; ispisi(br);
        }
    }
    cout<<endl;


















    return 0;
}
