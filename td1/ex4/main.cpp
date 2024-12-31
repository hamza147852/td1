#include <iostream>
#include <cmath>  // Pour utiliser sqrt()

using namespace std;

double f(double x, bool &OK) {
    double a = (x - 1) * (2 - x);

    if (a >= 0) {
        OK = true;
        return sqrt(a);
    } else {
        OK = false;
        return 0.0;
    }
}

int main() {
    double x;
    bool OK;

    cout << "Entrez une valeur de x : ";
    cin >> x;

    double result = f(x, OK);

    if (OK) {
        cout << "La fonction est definie pour x = " << x << " et la valeur est : " << result << endl;
    } else {
        cout << "La fonction n'est pas definie pour x = " << x << endl;
    }

    return 0;
}
