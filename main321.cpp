#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

int main() {
    int x = 7, y = 3;
    double p = 1.25, q = 4.75;

    cout << "add(int,int) = " << add(x, y) << "\n";
    cout << "add(double,double) = " << add(p, q) << "\n";
    return 0;
}
