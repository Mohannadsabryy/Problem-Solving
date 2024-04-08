#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    float negative_counter=0;
    float positive_counter=0;
    float zero_counter=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            negative_counter++;
        }
        else if(arr[i]>0){
            positive_counter++;
        }
        else{
            zero_counter++;
        }
    }
    printf("%.6f\n",positive_counter/n);
    printf("%.6f\n",negative_counter/n);
    printf("%.6f\n",zero_counter/n);
}
