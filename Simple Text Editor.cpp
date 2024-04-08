#include <bits/stdc++.h>

using namespace std;

string str="";
stack<string> strStack;

void append(string s){
    strStack.push(str);
    str.insert(str.size(),s);
}
void delete_str(int length){
    strStack.push(str);
    str.erase(str.size()-length,length);
}
void undo_str(void){
    str=strStack.top();
    strStack.pop();
}
void print_char(int index){
    cout<<str[index-1]<<endl;
}

int main(){
    string Q;
    getline(cin,Q);
    int val=stoi(Q);

    while(val--){
        string t="";
        getline(cin,t);

        int op_val=stoi(t.substr(0,1));
        int print_delete_val;
        string append_val;

        switch(op_val){
            case 1:{
                append_val=t.substr(2,t.size()-2);
                append(append_val);
                break;
            }
            case 2:{
                print_delete_val=stoi(t.substr(2,t.size()-2));
                delete_str(print_delete_val);
                break;
            }
            case 3:{
                print_delete_val=stoi(t.substr(2,t.size()-2));
                print_char(print_delete_val);
                break;
            }
            case 4:{
                undo_str();
                break;
            }

        }
    }

}


