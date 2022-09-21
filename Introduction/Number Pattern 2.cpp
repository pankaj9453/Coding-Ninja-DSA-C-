/*
Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 5
    1
   23
  345
 4567
56789


The dots represent spaces.
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=1;
   
    while(i <= n){
        int s = 1;
        while(s <= n-i) {
            cout<<" ";
            s++;
        }
        int j=i, k = 1;
        while(k <= i){
            cout << j;
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
  return 0;
}