#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A = 5, B = 2.35;
    double Y;

    Y = (acos(A / B) + pow(B, 2)) * log10(B) - (B / A);

    cout << "Y = " << Y << endl;

    return 0;
}