#define _USE_MATH_DEFINES //линейный цикл
#include <iostream> 
using namespace std;
#include <cmath> 

int main()
{
    double a = 3.52, h = 1.27, h0 = 0.635, u = 0.82, pi = M_PI, g = 9.8, F0 = pow(a, 2);
    int b = 150, d = 36;
    double f = (pi * pow(d, 2)) / 4, F = pow((a - 2 * b), 2);

    double K = sqrt(h0 - b) - sqrt(h - b - (h - h0) * (F0 / F));
    double t = ((2 * K) / u * f * sqrt(2 * g)) * ((F0 * F) / (F0 - F));
    cout << t;

    return 0;
}