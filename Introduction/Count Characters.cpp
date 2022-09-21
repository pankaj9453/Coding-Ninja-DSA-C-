/*
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)
Sample Input :
abc def4 5$
Sample Output :
6 2 2

*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
		char c;
    c=cin.get();
    int count=0,space=0,num=0;
    while(c!='$'){
    //c=cin.get();
        if(isalpha(c)){
            count++;
        }
        else if (isdigit(c)){
            num++;
        }
    	else if(isspace(c)){
                  space++;
    	}
		c=cin.get();
    }
    cout<<count<<" "<<num<<" "<<space;
    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  
}