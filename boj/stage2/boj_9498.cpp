#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a;
    cin >> a;
    if (a >= 90 && a <= 100) {
        cout << "A" << endl;
    } else if (a >= 80 && a < 90) {
        cout << "B" << endl;
    } else if (a >= 70 && a < 80) {
        cout << "C" << endl;
    } else if (a >= 60 && a < 70) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }
    return 0;
}