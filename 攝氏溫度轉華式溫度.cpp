#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a;
    while(cin >> a)
    {
        double b = (9 * a) / 5 + 32;
        cout << fixed << setprecision(1) << b << "\n";
    }
    return 0;
}

