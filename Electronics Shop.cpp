#include <iostream>
using namespace std;

int main(){
    int b,n,m;
    cin>>b>>n>>m;
    int keyboards[n];
    int drives[m];
    int result=-1;

    for(int i=0;i<n;i++){
        cin>>keyboards[i];
    }

    for(int i=0;i<m;i++){
        cin>>drives[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if( (keyboards[i]+drives[j]) <= b){
                    if((keyboards[i]+drives[j])>result){
                        result=keyboards[i]+drives[j];
                    }
            }
        }
    }

    cout<<result<<endl;

}
