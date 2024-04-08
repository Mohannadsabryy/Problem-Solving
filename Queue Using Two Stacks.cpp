#include <bits/stdc++.h>

using namespace std;

stack<int> Stack_1;
stack<int> Stack_2;

void enqueue(int val){
    Stack_1.push(val);
}
void dequeue(void){
    if(Stack_2.empty()==1){
        while(Stack_1.empty()!=1){
            Stack_2.push(Stack_1.top());
            Stack_1.pop();
        }
        Stack_2.pop();

    }
    else{
        Stack_2.pop();
    }
}
void print_front(void){
    if((Stack_2.empty()==1)){
         while(Stack_1.empty()!=1){
            int val=Stack_1.top();
            Stack_2.push(val);
            Stack_1.pop();
        }
    }
    cout<<Stack_2.top()<<endl;
}
int main(){
   string Q;
   getline(cin,Q);
   int val=stoi(Q);

   while(val--){
        string t="";
        getline(cin,t);

        int op_val=stoi(t.substr(0,1));
        int enqueue_value;

        switch(op_val){
            case 1:{
                enqueue_value=stoi(t.substr(2,t.size()-2));
                enqueue(enqueue_value);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                print_front();
                break;
            }
        }
    }
}
