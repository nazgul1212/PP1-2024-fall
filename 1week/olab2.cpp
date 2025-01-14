#include <iostream>

using namespace std;
int main (){
    int a,b,c,costa,costb,costc,d;
    cin>>a>>b>>c>>costa>>costb>>costc>>d;
    int k=(a*costa)+ (b*costb) + (c*costc);
    if (k<=d){
        cout<<"Yes";}
    else {
    cout<<"No";}
return 0;
}
