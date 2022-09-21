/*
   Print the following pattern
Pattern for N = 3
   *
  *** 
 *****
*/

#include<iostream>
using namespace std;


int main(){
    #include<iostream>
using namespace std;

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
        while(k <= (2*i-1)){
            cout <<"*";
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
  return 0;

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
