#include <iostream>
#include <cmath>
using namespace std;

double getPositiveNumber(){
    double num = 0;

    while (num <= 0){
        cin >> num;

        if (num <= 0){
            cout << "Skaitlim ir jābūt pozitīvam, mēģiniet vēlreiz: ";
        }
    }
    return num;
}
void mean(double x, double y, double &amean, double &gmean){
    amean = (x + y) / 2;
    gmean = sqrt(x * y);
}
void printResults(double a, double b, double &amean, double &gmean){
    mean(a, b, amean, gmean);
    cout << endl << "Skaitļu " << a << " un " << b << " vidējais aritmētiskais: " << amean << endl << "vidējais ģeometriskais: " << gmean << endl;
}
int main(){
    double nr1, nr2, nr3, nr4, amean, gmean;
    cout << "Ievadiet četrus pozitīvus skaitļus:";

    cout << endl << "Pirmais: ";
    nr1 = getPositiveNumber();

    cout << "Otrais: ";
    nr2 = getPositiveNumber();

    cout << "Trešais: ";
    nr3 = getPositiveNumber();

    cout << "Ceturtais: ";
    nr4 = getPositiveNumber();

    printResults(nr1, nr2, amean, gmean);
    printResults(nr1, nr3, amean, gmean);
    printResults(nr1, nr4, amean, gmean);

    return 0;
}