#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double inch;
    while(cin >> inch)
    {
        double kilo = inch * 1.6;
        cout << fixed << setprecision(1) << kilo << "\n";
    }
    return 0;
}
