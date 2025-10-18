#include <iostream>
#include <cmath>
using namespace std;

double h(const double x, const double y);

int main()
{
    double s, t;
    cout << "Enter s: "; cin >> s;
    cout << "Enter t: "; cin >> t;

    double result;

    result = h(1, s + t) + h(s, s - t) - h(t, sqrt(s * s + t * t));

    cout << "Result = " << result << endl;

    return 0;
}

double h(const double x, const double y)
{
    return (x * x + y * y) / (1 + x * x + x * x * y * y);
}
