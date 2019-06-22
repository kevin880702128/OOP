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
        switch(x){
            case 1 :
                cout << "Person\n" ;
                break;
            case 2 :
                cout << "Fairy\n" ;
                break;
            case 3 :
                cout << "Dwarf\n" ;
                break;
        }
    }
    return 0;
}
