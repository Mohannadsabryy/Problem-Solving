#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-k;i++){
        sum+=arr[i];
    }
    sum+=k*x;
    cout<<sum<<endl;
}
