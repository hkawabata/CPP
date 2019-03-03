#include <iostream>
#include <string>
#include <vector>
using namespace std;


void example2();


int main() {
    cout << "例題2" << endl;
    example2();
    return 0;
}

/**
 * 度数分布を作成
 */
void example2() {
    vector<int> values = {
        54, 100, 11, 32, 54, 28, 80, 8, 72, 33,
        62, 43, 78, 55, 31, 92, 66, 58, 49, 77};
    int hist[6] = {0};
    for (auto v: values) {
        hist[v / 20]++;
    }
    for (auto x: hist) {
        cout << string(x, '*') << endl;
    }
}
