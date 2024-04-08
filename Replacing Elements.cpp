#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int flag=1;
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[n-1]<=d){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]>=d){
                    if((a[0]+a[1])<=d){
                        a[i]=a[0]+a[1];
                    }
                    else{
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
}
