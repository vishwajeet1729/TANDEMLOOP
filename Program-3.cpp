#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int limit;

    if (a % 2 == 0)
        limit = a - 1;   
    else
        limit = a;       

    for (int i = 1; i <= limit; i += 2) {
        cout << i;
        if (i + 2 <= limit) cout << ", ";
    }

    return 0;
}
