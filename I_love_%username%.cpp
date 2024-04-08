#include <bits/stdc++.h>

using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    int min_val,max_val;
    int counter=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            min_val=arr[i];
            max_val=arr[i];
        }

        if(i>0){
            if(arr[i]>max_val){
                max_val=arr[i];
                counter++;
            }
            else if(arr[i]<min_val){
                min_val=arr[i];
                counter++;
            }
        }
    }

    cout<<counter<<endl;
}
