/*
#include <iostream>
#include <cmath>

using namespace std;
int main(){

    int x;

    cin >> x;
    int a = 0;

    for(int i = 0; x > 0; i++){
        if(x%2==0){
            a+=pow(2, i);
        }
        x/=2;

        
    }
    cout << a;
    return 0;
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;

    int result = 0;
    int exponent = 0;

    while(n > 0) {
        // result += !(n % 2) * pow(2, exponent++);
        cout << !(n % 2);
        // 1101 = 13
        // 1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0 = 8 + 4 + 0 + 1 = 13 
        n /= 2; // same as n = n / 2
    }
    cout << result << endl;

    return 0;
}