#include <iostream>

using namespace std;

//1. СТЕПЕНЬ. Разработайте функцию, которая возводит x в степень n.

double exponentiation(double number, int degree);

int main()
{
    int n = 0;
    double x = 0;

    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter degree n: ";
    cin >> n;
    cout << endl;

    if (x == 0 and n < 0)
    {
        cout << "Error! x = 0 and n < 0." << endl;

        return -1;
    }
    else {};

    cout << x << " to the power of " << n << ": " << exponentiation(x, n) << '.' << endl;

    return 0;
}

double exponentiation(double number, int degree)
{
    double result = 1.0;

    if (degree > 0) {
        while (degree > 0)
        {
            result *= number;

            degree--;
        }
    }
    else if (degree < 0)
    {
        while (degree < 0)
        {
            result /= number;

            degree++;
        }
    }
    else {}

    return result;
}