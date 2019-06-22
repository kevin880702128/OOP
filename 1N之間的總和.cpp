#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;

int main() {
    int x;
    while(cin >> x){
        int total = 0;
        for (int i = 1; i <= x; i++){
            total += i;
            cout << i << " ";
            if(x != 1 && i != x)
                cout << "+ ";
        }
        cout << "= " << total << "\n";
    }
    return 0;
}
