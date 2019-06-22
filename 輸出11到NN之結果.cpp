#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;

int main() {
    int x;
    while(cin >> x){
        for (int i = 1; i <= x; i++){
            cout << i << "*" << i << "=" << i*i << "\n";
        }
    }
    return 0;
}
