#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxi;
    int counter=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            maxi=arr[i];
        }
        if(arr[i]==maxi){
            counter++;
        }
        else if(arr[i]>maxi){
            counter=1;
            maxi=arr[i];
        }

    }


    cout<<counter<<endl;

}
