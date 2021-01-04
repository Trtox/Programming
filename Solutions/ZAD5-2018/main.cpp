//
//  main.cpp
//  trt
//
//  Created by Trtox on 21/02/2019.
//  Copyright © 2019 Trtox. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main()
{  int J=0;
string B;



    string A;
    int N;
    int M;
    cout << "Unesi A,N,M" << endl;
    cin >> A;
    cin >> N;
    cin >> M;
    switch(N) {
        case 1:
            B =A;

            break;
        case 2:
           B= A+A;

            break;
        case 3:
            B= A+A+A;

            break;
        default:
            cout << "Molimo unesite vrijednosti za N od 1 do 3!" << endl;
            break;


    }

    stringstream broj( B ); // B je string koji dobijas
int C = 0;
broj >> C;
    J=C%M;
cout << J;

system("pause");

    return 0;
}
