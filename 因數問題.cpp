#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;

int main() {
    int x;
    while(cin >> x){
        for (int i = 1; i <= x; i++){
            if(x % i == 0){
                cout << i;
                if(i != x && x != 1)
                    cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
