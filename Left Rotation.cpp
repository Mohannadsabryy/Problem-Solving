#include <bits/stdc++.h>
using namespace std;

int main(){
    int d,n;
    cin>>n>>d;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(d--){
        int temp;
        for(int i=0;i<n-1;i++){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
