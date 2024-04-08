#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int counter,n;
    cin>>n;
    cin>>s;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            if(s[i]=='R' || s[i]=='G' || s[i]=='B'){
                counter++;
            }
        }
    }
    cout<<counter;

}
