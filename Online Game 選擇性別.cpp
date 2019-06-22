#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char i[100];
    while(cin.getline(i, 99)){
        switch(i[0]){
            case 'E' :
                cout << "ByeBye\n" ;
                break;
            case 'M' :
                cout << "Male\n" ;
                break;
            case 'F' :
                cout << "Female\n" ;
                break;
        }
    }
    return 0;
}
