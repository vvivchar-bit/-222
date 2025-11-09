#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

// --- Overloading by TYPE ---
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

// --- Overloading by NUMBER OF PARAMETERS ---
double area(double a) { return a * a; }
double area(double a, double b) { return a * b; }

int main() {
    cout << fixed << setprecision(2);

    // Demo 1 – overloading by TYPE
    int ix = 5, iy = 12;
    double dx = 2.5, dy = 4.3;
    cout << "=== Overloading by TYPE ===\n";
    cout << "add(int,int): add(" << ix << ", " << iy << ") = " << add(ix, iy) << "\n";
    cout << "add(double,double): add(" << dx << ", " << dy << ") = " << add(dx, dy) << "\n";
    cout << "add((double)ix, dy) = " << add(static_cast<double>(ix), dy) << "\n\n";

    // Demo 2 – overloading by NUMBER OF PARAMETERS
    double a = 5.0, b = 8.0;
    cout << "=== Overloading by NUMBER OF PARAMETERS ===\n";
    cout << "area(a) [square], a = " << a << "  -> " << area(a) << "\n";
    cout << "area(a,b) [rectangle], a = " << a << ", b = " << b << "  -> " << area(a, b) << "\n";

    cout << "\nDone. Press Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
    return 0;
}
