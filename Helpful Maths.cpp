#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s,temp;
    cin>>s;
    int String_Size=s.length();
    int arr[String_Size];
    int m=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='3'){
            arr[m]=(s[i] - '0');
            m++;
        }
    }
    sort(arr, arr + m);


    m=0;

    for(int i=0;i<String_Size;i++){
        if(i==0){
           switch(arr[m]){
            case 1:s[i]='1';
                   break;
            case 2:s[i]='2';
                   break;
            case 3:s[i]='3';
                   break;
           }
            m++;
        }
        else if(i%2==0){
            switch(arr[m]){
                case 1:s[i]='1';
                       break;
                case 2:s[i]='2';
                       break;
                case 3:s[i]='3';
                       break;
           }
            m++;
        }
        else{
            s[i]='+';
        }

    }

    cout<<s;



}
