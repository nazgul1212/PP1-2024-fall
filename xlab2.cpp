#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double num1, num2;
    cin >> num1;
    cin >> num2;
    if (num2 == 0) {
        cout << "No" << endl;
    } 
    else {
        double result = ceil(num1 / num2);
        cout<< result << endl;
    }

    return 0;
}