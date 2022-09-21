/*
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) =  1, 
           F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.
Input Format :
The first line of each test case contains a real number ‘N’.
Output Format :
For each test case, return its equivalent Fibonacci number.
Constraints:
1 <= N <= 10000     
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second
Sample Input 1:
6
Sample Output 1:
8*/
#include<iostream>
using namespace std;


int main(){
    //Write your code here.    
    int n;
    cin>>n;
    int x1=1,x2=0,x=0;
    for(int i=1;i<=n;++i){
	x=x1+x2;
        x2=x1;
        x1=x;
        
    }
    cout<<x2;
}
