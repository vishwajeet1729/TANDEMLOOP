#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    for (int i = 1; i <= a; i++) {
        cout << (2 * i - 1);
        if (i != a) cout << ", ";
    }

    return 0;
}
