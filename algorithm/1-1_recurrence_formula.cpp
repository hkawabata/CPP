#include <iostream>
using namespace std;

int composition(int n, int r) {
    if (r == 0) {
        return 1;
    } else {
        return composition(n, r - 1) * (n - r + 1) / r;
    }
}

int main() {
    cout << composition(10, 3) << "\n";
    return 0;
}