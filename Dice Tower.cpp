#include <iostream>
using namespace std;

int main(){
   int n,flag=0;
   cin>>n;

   int top;
   cin>>top;

   int num1,num2;

   for(int i=0;i<n;i++){
    cin>>num1>>num2;
    if( (num1==7-top) || (num2==7-top) || (top==num1) || (top==num2) ){
            flag=1;
    }
    top=7-top;
   }


   if( (flag==1)){
    cout<<"NO";
   }

   else{
     cout<<"YES";
   }

}
