#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a >= b + c || b >= a + c || c >= a + b)
            cout << "unfit\n";
        else
            cout << "fit\n";
    }
    return 0;
}
