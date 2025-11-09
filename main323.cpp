#include <iostream>
using namespace std;

double area(double a) { return a * a; }     // square
double area(double a, double b) { return a * b; } // rectangle

int main() {
    double side = 6.0;
    double len = 8.0, wid = 3.5;

    cout << "area(square, a) = " << area(side) << "\n";
    cout << "area(rectangle, a,b) = " << area(len, wid) << "\n";
    return 0;
}
