#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#define N 10001
int main()
{
    char a[N];
    while(cin.getline(a, N-1)){
        char *token;
        int i = 0;
        int x[N];
        token = strtok(a," \0");
        while(token != NULL){
            x[i] = atof(token);
            i++;
            token = strtok(NULL," \0");
        }
        //int total;
        cout << x[0] << "+" << x[1] << "=" << x[0] + x[1] << "\n";
        cout << x[0] << "*" << x[1] << "=" << x[0] * x[1] << "\n";
        cout << x[0] << "-" << x[1] << "=" << x[0] - x[1] << "\n";
        cout << x[0] << "/" << x[1] << "=" ;
        if(x[0] < 0)
            cout << x[0] / x[1] - 1 << "..." << x[0] % x[1] + x[1] << "\n";
        else
            cout << x[0] / x[1] << "..." << x[0] % x[1] << "\n";
    }
    return 0;
}
