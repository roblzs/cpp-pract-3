#include <iostream>
using namespace std;

void printResults (double x, double a, double b, double c) {
    cout << "Skaitļa " << x << " pakāpes:" << endl;
    cout << "2: " << a << endl;
    cout << "3: " << b << endl;
    cout << "4: " << c << endl;
}

void pow234 (double x, double &a, double &b, double &c) {
    a = x * x;
    b = x * x * x;
    c = x * x * x * x;

    printResults(x, a, b, c);
}

int main () {
    double nr1, nr2, nr3, nr4, nr5, a, b, c;

    cout << "Ievadiet piecus skaitļus:" << endl;
    cin >> nr1;
    cin >> nr2;
    cin >> nr3;
    cin >> nr4;
    cin >> nr5;

    pow234(nr1, a, b, c);
    pow234(nr2, a, b, c);
    pow234(nr3, a, b, c);
    pow234(nr4, a, b, c);
    pow234(nr5, a, b, c);
    return 0;
}