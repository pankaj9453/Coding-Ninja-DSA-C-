// #include<iostream>
// #include<math.h>
// using namespace std;

// int main() {
// 	// Write your code here
//     int n,sqrt;
//     cin>>n;
// sqrt=sqrt(n);
//     cout<<sqrt;
	
// }

// #include<iostream>
// #include<math.h>
 
// using namespace std;
 
// int main()
// {
// int sq,n;
// // cout<<"Enter any number:";
// cin>>n;
// sq=sqrt(n);
// cout<<sq;
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n,sq=0;
    cin>>n;
while(sq*sq<=n){
    sq=sq+1;
}
cout<<(sq-1);
}

// Input = N
// output=0
// While output*output is less than equal to 0:
//  output=output+1
// print(output-1)