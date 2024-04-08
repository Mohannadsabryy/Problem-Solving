#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    int counter=0;
    int min_val,max_val,min_idx,max_idx;
    int temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            min_val=arr[i];
            max_val=arr[i];
            min_idx=0;
            max_idx=0;
        }
        if(i>0){
            if(arr[i]<=min_val){
                min_val=arr[i];
                min_idx=i;
            }
        }
    }

    for(int i=min_idx;i<n-1;i++){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        counter++;
    }

    for(int i=0;i<n;i++){
            if(arr[i]>max_val){
                max_val=arr[i];
                max_idx=i;
            }
    }
  counter+=max_idx;
  cout<<counter<<endl;

}
