#include <bits/stdc++.h>
using namespace std;
int main(){

    string n;
    getline(cin,n);

    string s;
    getline(cin,s);
    int flag;

    if(stoi(n)<26){
        cout<<"NO";
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        for(int i=97;i<=122;i++){
            if( (s.find(i)>=0) && (s.find(i)<stoi(n)) ){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }








}
