#include <iostream>
using namespace std;

void fib(int n){
    int a, b, c;
    a = 0;
    b = 1;

    while(n > 0){
        n -= 1;
        cout << a << ", ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main(){
    int n;
    cout << "Ievadiet, cik Fibonači virknes skaitļus jūs vēlaties redzēt: ";
    cin >> n;
    fib(n);
    return 0;
}