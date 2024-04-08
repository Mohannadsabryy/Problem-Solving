#include <iostream>
using namespace std;

int main(){
    int arr[5];
    long sum=0;
    long maximum=0;
    long minimum=0;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    for(int i=0;i<5;i++){
            sum=0;
        for(int j=0;j<5;j++){
            if(j==i){
                continue;
            }
            sum+=arr[j];
        }
        if(sum>maximum){
            maximum=sum;
        }

        if( (sum<minimum) ||(i==0) ){
            minimum=sum;
        }
    }
    cout<<minimum<<" "<<maximum<<endl;


}
