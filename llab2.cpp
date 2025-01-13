/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%2==0 && n)   
    { cout<< "YES";}
    else {
    cout<<"NO";
    }


    return 0;
}
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, res2;
    float res;
    cin>>a;
    
    
    res = log2(a);
    res2 = float(int(res));
    
    if (res2-res==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}