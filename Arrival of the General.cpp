#include <bits/stdc++.h>
using namespace std;


int main(){
     int n;
     cin>>n;
     int a,b;
     int capacity=0,max_capacity=0;

     for(int i=0;i<n;i++){
        cin>>a>>b;
        capacity-=a;
        capacity+=b;
        if(capacity>max_capacity){
            max_capacity=capacity;
        }
     }
     cout<<max_capacity<<endl;
}
