#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    float ogr,ogm,oga,r[50],m[50],ap[50],vt[50],kraca;

    cin>>n;
    cin>>ogr>>ogm>>oga;
    for(i=0;i<n;i++)
    {
        cin>>r[i]>>m[i]>>ap[i];
    }
    for(i=0;i<n;i++)
    {
        vt[i]=r[i]/ogr + m[i]/ogm + ap[i]/oga;
    }
    for(i=0;i<n;i++)
    {
        kraca=vt[i];
        if(vt[i]<kraca)
            kraca=vt[i];
    }

    cout<<"Najbrza je ruta ";
    for(i=0;i<n;i++)
    {
        if(kraca==vt[i])
        {
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    cout<<"Vremena trajanja putovanja su ";
    for(i=0;i<n;i++)
    {
        cout<<fixed<<setprecision(2)<<vt[i]<<" ";
    }
    cout<<"sati";

    system("pause");
    return 0;
}
