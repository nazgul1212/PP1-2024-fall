#include <iostream>

using namespace std;
int main(){
   int a;
   cin>>a;
    int f=(a/1000);
    int b=(a/100)%10;
    int c=(a/10%10);
    int d=(a%10);
    if (f==d and b==c){
        cout<<"YES";}

    else 
       { cout<<"NO";}
    

  

return 0;
}