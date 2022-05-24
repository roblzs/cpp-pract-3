#include <iostream>
using namespace std;

float h(float a, float b){
    float h = (a / (1 + (b * b))) + (b / (1 + (a * a))) - ((a - b) * (a - b) * (a - b));

    return h;
}

int main(){
    float s, t;

    cout << "Ievadiet pirmo skaitli: ";
    cin >> s;
    cout << "Ievadiet otro skaitli: ";
    cin >> t;

    float result = h(s, t) + h(s-t, s*t) + h(1, 1);

    cout << "Rezultāts: " << result;

    return 0;
}