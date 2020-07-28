#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    double num3;
    double result;

    cout << "Enter a real number" << endl;
    cin >> num1;
    cin.get();

    cout << "Enter another real number" << endl;
    cin >> num2;
    cin.get();

    cout << "Enter another real number" << endl;
    cin >> num3;

    result = (num1 + num2 + num3) / 3;

    cout << "Average is " << result << endl;

    return 0;
}
