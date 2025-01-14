#include <iostream>

using namespace std;
int main(){
int n,m;
cin>>n>>m;
int attendance=(100*m/n);
    if (attendance>=80){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


    return 0;
}