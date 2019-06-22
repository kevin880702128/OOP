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
        int total;
        total = x[0] + x[1];
        cout << total ;
        cout << "\n" ;
    }
    return 0;
}
