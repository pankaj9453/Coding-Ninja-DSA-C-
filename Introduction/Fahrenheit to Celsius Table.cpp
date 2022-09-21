#include<iostream>
using namespace std;


int main(){
    int S,E,W;
     int C;
    cin>>S>>E>>W;
        int n=(E-S)/W;
    	int F=S;
 
            for(int i=1;i<=n+1;i++)
            {
               
                	 C=(5.0/9)*(F-32);
            		cout<<F<<" "<<C<<endl;
           			 F=S+i*W;
            } 
    
    // int s,e,w,c;
//     cin>>s>>e>>w;
//     while(s<=e){
//        c=(5.0/9)*(s-32);
//         cout<<s<<" "<<c<<endl;
//         s=s+w;
//     }
     
//    
    
       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  return 0;
}


