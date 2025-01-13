#include <iostream>
using namespace std;

int main(){
    int d;
    cin >> d; 
     int n = d*30;
     if (n>180){n=360-n;
    }
     int h= d*30%180;
     cout << h;

 return 0;
}