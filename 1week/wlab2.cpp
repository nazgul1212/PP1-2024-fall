
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cin >> number;

    string binary = "0000000";
    for (int i = 6; number > 0; i--) {
        if (number % 2 == 1) {
            binary[i] = '1';
        } else {
            binary[i] = '0';
        }
        number /= 2;
    }

    int rightmostOneIndex = 0;
    for (int i = binary.size() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            rightmostOneIndex = binary.size() - 1 - i;
            break;
        }
    }

    cout << rightmostOneIndex << endl;
}