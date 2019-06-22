#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;

int main() {
    int x;
    while(cin >> x){
        int total = 0;
        for (int i = 1; i <= x; i++){
            if(i % 3 == 0 && i % 2 == 0 && i % 12 != 0)
                total += i;
        }
        cout << total << "\n";
    }
    return 0;
}
