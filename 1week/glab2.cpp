/*#include <iostream>

using namespace std;
int main(){
    int n,k;

    cin>>n>>k;
    int sides = n*2;// number of sides of steaks
    // if the remainder of dividing the amount of sides by the amount of spots on tje pan is less than the integer half of the spots on the pan
    //then we can cook the steaks quicker that expected
    if(n<=k){
        cout <<2<<endl;
    }

    cout<< (sides/k )+(sides%k)/(k/2)<< endl;
    return 0;
    }
    */
/*
3 2
sides=6
sides/k=6/2=3
sides%k=6%2=0
----------------

13 7
sides=26
sides/k=26/7=3 (integer division)
sides%k=26%7=5

k/2=7/2=3  (integer division)

(sides/k )+(sides%k)/(k/2)=3+5/3=3+1=4
5 isnt less than 3 so answer should be 3+1=4

*/


#include <iostream>

using namespace std;
int main(){
    int n,k;

    cin>>n>>k;
    int sides = n*2;
    if(n<=k){
        cout <<2<<endl;
    }
    else{
    cout<< (sides/k )+(sides%k)/(k/2)<< endl;}

    return 0;
}