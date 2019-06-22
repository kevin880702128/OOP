#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char i[100];
    while(cin.getline(i, 99)){
        int x = atoi(i);
        if (x % 2 == 1)
            cout << "odd\n";
        else
            cout << "even\n";
    }
    return 0;
}
