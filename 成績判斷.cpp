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
        if (x >= 90 && x <= 100)
            cout << "A\n";
        else if (x >= 80 && x < 90)
            cout << "B\n";
        else if (x >= 70 && x < 80)
            cout << "C\n";
        else if (x >= 60 && x <70)
            cout << "D\n";
        else if (x <60)
            cout << "E\n";
        else
            cout << "error\n";
    }
    return 0;
}
