/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=i;
        while(j<n){
            cout<<n-i;
            j++;
        }
        i++;
        cout<<endl;
    }
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
