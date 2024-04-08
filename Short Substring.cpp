#include <bits/stdc++.h>
using namespace std;
int main(){
    string t;
    getline(cin,t);
    int val=stoi(t);

    string b;

    while(val--){
        getline(cin,b);
        int len=b.size()-2;
        for(int i=1;i<len;i+=2){
            b.replace(i,1,".");
        }
        for(int i=0;i<len;i++){
            if(b[i]=='.'){
                b.replace(i,1,"");
            }
        }
        cout<<b<<endl;
    }

}
