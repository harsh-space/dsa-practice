#include <iostream>

using namespace std;

int main() {
    long long h, w;
    if (cin >> h >> w) {
        if (10000 * w >= 25 * h * h) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
