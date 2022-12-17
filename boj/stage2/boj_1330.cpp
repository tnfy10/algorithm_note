#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << ">" << endl;
    } else if (a < b) {
        cout << "<" << endl;
    } else {
        cout << "==" << endl;
    }
    return 0;
}