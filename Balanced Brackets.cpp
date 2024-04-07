#include <bits/stdc++.h>
using namespace std;


string Check_Balanced(string s){
    stack<char> strStack;
    for(int i=0;i<s.size();i++){
        if( s[i]=='{' || s[i]=='(' || s[i]=='[' ){
            strStack.push(s[i]);
        }
        else{
            if(strStack.empty()){
                return "NO";
            }
            else{
                switch(strStack.top()){
                    case '(':{
                           if(s[i]!=')'){
                                return "NO";
                            }
                           break;

                    }
                    case '{':{
                          if(s[i]!='}'){
                                return "NO";
                            }
                            break;
                    }
                    case '[':{
                        if(s[i]!=']'){
                                return "NO";
                        }
                            break;
                    }

                }
                strStack.pop();
           }

        }


    }
    if(strStack.empty()!=1){
        return "NO";
    }

    return "YES";



}


int main(){
    string n;
    getline(cin,n);
    int val=stoi(n);
    while(val--){
        string result,value;
        getline(cin,value);
        result=Check_Balanced(value);
        cout<<result<<endl;
    }
}
