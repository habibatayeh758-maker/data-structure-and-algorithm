// habiba1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lab 1 - Factorial: Recursive and Iterative
#include <iostream>
using namespace std;

int factorialRec(int n) {
    if (n == 0) return 1;       // base case
    return n * factorialRec(n - 1);  // recursive case
}

int factorialIter(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++)
        result = result * i;
    return result;
}

int main() {
    for (int n = 0; n <= 15; n++) {
        cout << n << " " << factorialRec(n);
        // cout << " loop " << factorialIter(n);
        cout << endl;
    }
    return 0;
}