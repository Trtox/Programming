#include <bits/stdc++.h>

using namespace std;

bool kolinearne(int x1,int y1,int x2, int y2, int x3, int y3)
{
    int a;
    a=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);

    if(a==0)
        return true;
    else
        return false;

}

float udaljenost(float t1, float t2,float t3,float t4)
{
    float a=sqrt(pow(t3-t1,2)+pow(t4-t2,2));
    return a;
}


int main()
{
    char x;
     int x1,y1,x2,y2,x3,y3;
     float t1,t2,t3,t4;
    while(1)
    {
        cout<<"Unesite koordinate tri tacke(x1,y1,x2,y2,x3,y3):"<<endl;
         cin>>x1>>y1>>x2>>y2>>x3>>y3;

         if(kolinearne(x1,y1,x2,y2,x3,y3)==1)
            cout<<"Tacke su kolinearne"<<endl;
         else
            cout<<"Tacke nisu kolinearne"<<endl;

        cout<<"Unesite koordinate dvije tacke(x1,y1,x2,y2)"<<endl;
        cin>>t1>>t2>>t3>>t4;

        cout<<"Udaljenost izmedju tacaka je: "<<udaljenost(t1,t2,t3,t4)<<endl;
        cout<<"Zelite li ponoviti (d,n): ";
        cin>>x;

        if(x=='d')
            continue;
        else
            break;
    }



    return 0;
}
