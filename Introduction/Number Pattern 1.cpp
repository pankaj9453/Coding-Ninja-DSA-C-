/*Print the following pattern
Pattern for N = 4
1
23
345
4567
*/



#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<j+i-1;
            j++;
        }
        cout<<endl;
            i++;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  return 0;
}

