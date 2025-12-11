#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};

    map<int, int> countMap;

    for (int i = 1; i <= 9; i++) {
        countMap[i] = 0;
    }

    for (int num : arr) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                countMap[i]++;
            }
        }
    }

    cout << "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << countMap[i];
        if (i != 9) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
