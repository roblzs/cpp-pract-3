#include <iostream>
#include <cmath>
using namespace std;

double top (double x, double n) {
    double k = 0;
    double total = 0;
    while (k <= n){
        total += pow(x, 2 * k + 1) / (2 * k + 1);
        k++;
    }
    return total;
}

double bottom (double x, double n) {
    double k = 0;
    double total = 0;
    while (k <= n){
        total += pow(x, 2 * k) / (2 * k - 1);
        k++;
    }
    return total;
}
double t (double x, double n) {
    double result = top(x, n) / bottom(x, n);
    return result;
}
int main () {
    double y;
    cout << "Ievadi skaitli y: ";
    cin >> y;
    double result = 1.7 * t(0.25, 10) + (2 * t(1 + y, 15)) / (5 - t(y * y - 1, 8));
    cout << "Rezultāts: " << result;
    return 0;
}