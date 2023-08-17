#include <iostream>
using namespace std;
double power(double base, int exponent) 
{
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    return result;
}
int factorial(int n) 
{
    int result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}
double sine(double x) 
{
    double result = 0.0;
    for (int n = 0; n < 10; ++n) 
    {
        result += power(-1, n) * power(x, 2 * n + 1) / factorial(2 * n + 1);
    }
    return result;
}
double cosine(double x)
{
    double result = 0.0;
    for (int n = 0; n < 10; ++n) 
    {
        result += power(-1, n) * power(x, 2 * n) / factorial(2 * n);
    }
    return result;
}
double exponential(double x) 
{
    double result = 1.0;
    for (int n = 1; n < 10; ++n) 
    {
        result += power(x, n) / factorial(n);
    }
    return result;
}

int main() 
{
    char operation;
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication " << endl;
    cout << "4. Division " << endl;
    cout << "5. Sine " << endl;
    cout << "6. Cosine " << endl;
    cout << "7. Exponential " << endl;
    cout << "Enter the operation: ";
    cin >> operation;
    double num1, num2;

    if (operation == '1') 
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 + num2 << endl;
    } 
    else if (operation == '2') 
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 - num2 << endl;
    } 
    else if (operation == '3') 
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Result: " << num1 * num2 << endl;
    } 
    else if (operation == '4') 
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else if (operation == '5') 
    {
        cout << "Enter angle in degrees: ";
        cin >> num1;
        cout << "Result: " << sine(num1*0.0174533) << endl;
    } 
    else if (operation == '6') 
    {
        cout << "Enter angle in degrees: ";
        cin >> num1;
        cout << "Result: " << cosine(num1*0.0174533) << endl;
    } 
    else if (operation == '7') 
    {
        cout << "Enter the exponent: ";
        cin >> num1;
        cout << "Result: " << exponential(num1) << endl;
    } 
    else 
    {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
