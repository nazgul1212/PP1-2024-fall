#include <iostream>
#include <cmath>
#include<iomanip> 

using namespace std;
 int main() {
    int a,b,c;
    cin >> a >>b >>c;
    double p , s;
    p=(a+b+c)/2.0;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    
    cout << fixed <<setprecision(2); 
    cout <<(s);


  return 0; 
  }