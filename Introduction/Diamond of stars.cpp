/*
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  */
  / #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=1;
//         while(space<=n-2*i){
//             cout<<" ";
//             space++;
//         }
//         int star=1;
//         while(star<=n/2){
//             cout<<"*";
//             star++;
//         }
//     	star=i-1;
//     	while(star<n){
//     	cout<<"*";
//     	star--;
//     	}
//         i++;
//         cout<<endl;
//     }

//        /*  Read input as specified in the question.
// 	* Print output as specified in the question.
// 	*/
  
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i, j, rowNum, space;
//     cin>>rowNum;
//     space = rowNum-1;
//     for(i=1; i<=rowNum; i++)
//     {
//         for(j=1; j<=space; j++)
//             cout<<" ";
//         space--;
//         for(j=1; j<=(2*i-1); j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     space = 1;
//     for(i=1; i<=(rowNum-1); i++)
//     {
//         for(j=1; j<=space; j++)
//             cout<<" ";
//         space++;
//         for(j=1; j<=(2*(rowNum-i)-1); j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }
*/
 #include<iostream>
using namespace std;
int main() {
    int n, i, k;
    cin>>n;
    // Printing the upper part of Diamond Pattern
    // i is the number of stars we print in
    // each iteration of loop
    for (int i = 1; i <= n; i = i + 2)
    {
        // printing (n-i)/2 spaces
        for (k = 1; k <= (n - i) / 2; ++k)
        {
            cout<<" ";
        }
        // printing i '*"
        for (k = 1; k <= i; ++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    // Printing Lower part of Diamond Pattern
    // n/2+n/2-1 converts integer n to nearest odd number lower than n
    // this is done because the number of stars in each row is odd
    // i is the number of stars we print in
    // each iteration of loop
    for (i = n / 2 + n / 2 - 1; i >= 1; i = i - 2)
    {
        // printing (n-i)/2 spaces
        for (k = 1; k <= (n - i) / 2; ++k)
        {
            cout<<" ";
        }
        // printing i '*"
        for (k = 1; k <= i; ++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}