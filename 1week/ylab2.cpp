#include <iostream>

using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (year < 0) {
        cout << "no" << endl;
        return 0;
    }

    if (month < 1 || month > 12) {
        cout << "no" << endl;
        return 0;
    }

    if (day < 1) {
        cout << "no" << endl;
        return 0;
    }

    if (month == 2) {
        if (isLeapYear) {
            if (day > 29) {
                cout << "no" << endl;
                return 0;
            }
        } else {
            if (day > 28) {
                cout << "no" << endl;
                return 0;
            }
        }
    } else if (month == 4 ||  month == 6  || month == 9 || month == 11) {
        if (day > 30) {
            cout << "no" << endl;
            return 0;
        }
    } else {
        if (day > 31) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    return 0;
}