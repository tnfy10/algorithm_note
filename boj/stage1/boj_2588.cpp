#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int b1, b2, b3;
    b1 = b % 10;
    b2 = b / 10 % 10;
    b3 = b / 100;
    int m1 = a * b1;
    int m2 = a * b2;
    int m3 = a * b3;
    cout << m1 << endl;
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m1 + m2 * 10 + m3 * 100 << endl;
    return 0;
}