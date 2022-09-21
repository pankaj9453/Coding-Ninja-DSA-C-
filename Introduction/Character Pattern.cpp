/*
Code : Character Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI
*/
#include<iostream>
using namespace std;


int main(){
int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            char ch='A'+k-1;
            cout<<ch;
            j++;
            k++;
            
        }
        cout<<endl;
        i++;
    }
    
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}