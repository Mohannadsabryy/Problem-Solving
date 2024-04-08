#include <iostream>
using namespace std;
#include <math.h>
#include <algorithm>

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int min_val;


        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);

        min_val=arr[1]-arr[0];

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(arr[i]-arr[j])<min_val){
                    min_val=abs(arr[i]-arr[j]);
                }
                else{
                    break;
                }
            }
        }

        cout<<min_val<<endl;
        }
}
