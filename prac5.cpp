//finding binomial coefficient
#include <iostream>
using namespace std;

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++) {
        result *= i;
    }
    return result;
}

int ncr(int n, int r) {
    if (n < r) {
        cout << "not possible\n";
        return -1;
    } else {
        int bino = factorial(n) / (factorial(r) * factorial(n - r));
        return bino;
    }
}

int main() {
    int n, r;
    cout << "enter the value of n: ";
    cin >> n;
    cout << "enter the value of r: ";
    cin >> r;

    int result = ncr(n, r);
    if (result != -1)
        cout << "required binomial coefficient is " << result;

    return 0;
}
