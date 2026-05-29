#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A = 6.84, B = 3.22, C = 4, D = 2.5;
    double Y;

    Y = B + pow((A + D) / C, 2);

    cout << "Y = " << Y << endl;

    return 0;
}