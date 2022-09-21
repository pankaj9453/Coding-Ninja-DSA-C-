/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
*/
#include <iostream>
using namespace std;

int main(){

//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 break;
                        
//             }
//             cout<<i;
//         }

//     }
    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
//    int n;
//     cin>>n;
    
//     for(int i=2;i<=n;i++){
//         bool divide =false;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 divide=true;
//                 break;
                
                        
//             }
//         }
       
    
          
//         if(divide==false)
//             cout<<i<<endl;
         
//         }
     int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        bool divide =false;
        for(int j=2;j<i;j++){
            if(i%j==0){
                divide=true;
                break;
                
                        
            }
        }
       
    
          if(divide==true){
           
        }
        else{
            cout<<i<<endl;
        }  
        }
}

