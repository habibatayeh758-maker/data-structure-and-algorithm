#include <iostream>
using namespace std;

// دالة لحساب رقم فيبوناتشي باستخدام الاستدعاء الذاتي
long long fib(int n) {
    // حالات التوقف (Base Cases)
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // الاستدعاء الذاتي (Recursive Step)
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    }
    else {
        cout << "fib(" << n << ") = " << fib(n) << endl;
    }

    return 0;
}