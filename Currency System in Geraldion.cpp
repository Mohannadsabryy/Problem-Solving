#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int flag=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            flag=1;
        }
    }
    if(flag==1){
        cout<< -1;
    }
    else{
        cout<< 1;
    }

}
