#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
            x[i] = atoi(token);
            i++;
            token = strtok(NULL," \0");
        }
        for(int k = i-1; k >= 0; k--){
            cout << x[k] ;
            if(k != 0)
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
