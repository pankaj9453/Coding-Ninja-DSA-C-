/*Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


Input Format :
Integer N
Output Format :
true or false
Constraints :
0 <= n <= 10^4
Sample Input 1 :
5
Sample Output 1 :
true*/

bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
    // int f(0),f(1);
    // f(0)=0;
    // F(1)=1;
    // if(((5*n*n)+4) ll ((5*n*n)-4)){
    //     return true;
    // }
  //   if(n=2*n-3){
  //       return true;
  //   }
  // return false;
     		int a = 0;
            int b = 1;
           		 if (n==a || n==b) 
               		return true;
    
            		int c = a+b;
            while(c<=n)
            {
                if(c == n) 
                    return true;
                a = b;
                b = c;
                c = a + b;
            }
            return false;
        }





#include<iostream>
using namespace std;
#include "Solution.h"

int main(){

  int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }

}
