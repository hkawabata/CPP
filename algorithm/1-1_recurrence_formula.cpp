#include <iostream>
#include <vector>
using namespace std;


void example1();
void exercise1();
int composition(int n, int r);
int f(int x);


int main() {
    cout << "例題1" << endl;
    example1();    
    cout << "練習問題1" << endl;
    exercise1();
}

/**
 * nCr の計算
 */
void example1() {
    int n_max = 7;
    for (int n = 1; n <= n_max; n++) {
        for (int r = 0; r <= n; r++) {
            cout << n << "C" << r << " = " << composition(n, r);
            if (r < n) cout << ", ";
        }
        cout << endl;
    }
}

int composition(int n, int r) {
    if (r == 0) {
        return 1;
    } else {
        return composition(n, r - 1) * (n - r + 1) / r;
    }
}

vector<int> coefficients = {3, -4, 0, 2};

/**
 * Horner 法による多項式計算
 */
void exercise1() {
    cout << "f(x) = ";
    for (int i = 0; i < coefficients.size(); i++) {
        cout << coefficients[i] << "x^" << coefficients.size() - i - 1;
        if (i == coefficients.size() - 1) cout << endl; else cout << " + ";
    }
    vector<int> xs = {-2, -1, 0, 1, 2, 3};
    for (auto x: xs) {
        cout << "f(" << x << ") = " << f(x) << endl;
    }
}

int f(int x) {
    int result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result = result * x + coefficients[i];
    }
    return result;
}