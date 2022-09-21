/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.


Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
//     int dec,binary=0,rem,num=0;
//         cin>>dec;
//     while(dec>0){
//         rem=dec%2;
//         binary=binary*10+rem;
//         dec=dec/2;
    
//     }
// //     while(binary>0){
// //             num=num*10+binary%10;
// //         binary=binary/10;
// //     }

// //     cout<<num;
//     cout<<binary;
    
    
//  int binaryNum[32];
 
//     // counter for binary array
//     int i = 0,n;
//     cin>>n;
  
//          while (n >0) {
 
//                     binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
             
//         // storing remainder in binary array
     
//     }
 
//     // printing binary array in reverse order
//     for (int j = i - 1; j >= 0; j--)
//         cout << binaryNum[j];
   long long int n,rem,b=1;
    long long int binary=0;
    cin>>n;
   
    while(n!=0){
        rem=n%2;
        binary=binary+b*rem;
        b=b*10;
        n=n/2;
    }
    cout<<binary;
}
