#include<iostream>
#include<iomanip>
#include <math.h>
using namespace std;

int main() {
    int x;
    while(cin >> x){
        int total = 0;
        for (int i = 1; i <= x; i++){
            if(i % 35 == 0){
                cout << i;
                if(i + 35 <= x)
                    cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
