#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a;
    while(cin >> a)
    {
        int b = a / 10;
        cout << "NT10=" << b << "\n";
        a %= 10;
        b = a / 5;
        cout << "NT5=" << b << "\n";;
        a %= 5;
        b = a / 1;
        cout << "NT1=" << b << "\n";
    }
    return 0;
}

