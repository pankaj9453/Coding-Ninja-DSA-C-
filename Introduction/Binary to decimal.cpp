/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12*/
#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int num,dec=0,b=1,rem;
    cin>>num;
    while(num>0){
        rem = num % 10;
			dec = dec + rem*b;
			b *=2;
			num /= 10;
    }
    cout<<dec;
	
}
