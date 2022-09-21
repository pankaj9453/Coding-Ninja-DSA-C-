/*Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
    567898765
     */
     #include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
        }
        int j=1;
        int val=i;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        while(j<=2*i-1){
            cout<<val-2;
            val--;
            j++;
            
        }
        i++;
        cout<<endl;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
