#include <iostream>
using namespace std;

int start_index_zeros;
int left_end_zero;

int Count_End_Zero(string str){
    int counter=0;
    int flag=0;
    for(int i=0;i<str.length();i++){
            counter=0;
        if( str[i]=='0' && (i+1)!=str.length() ){
                counter++;
           for(int j=i+1;j<str.length();j++){
                if(str[j]=='0'){
                    counter++;
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }
           }
        }
        else if(str[i]=='0' && (i+1)==str.length()){
            counter++;
            start_index_zeros=i;
        }

        if(flag==1){
            start_index_zeros=i;
            break;
        }
    }
    return counter;
}
int IS_ALL_ZERO(string str1){
    int flag=1;
    for(int i=0;i<str1.length();i++){
        if(str1[i]!='0'){
            flag=0;
            break;
        }
    }
    return flag;
}



int Count_Start_Zero(string str2){
    int counter=0;
    for(int i=0;i<str2.length();i++){
        if(str2[i]=='0'){
            left_end_zero=i;
            counter++;
        }
        else{
            break;
        }
    }
    return counter;
}



int main(){
    string s;
    cin>>s;
    int check=IS_ALL_ZERO(s);

    if(check==1){
         cout<<"Yes";
    }
    else{
       int check_end_zero=Count_End_Zero(s);
       int check_start_zero=Count_Start_Zero(s);
       int left=0;
       int right=s.length()-1;
       int result_flag;

        if(check_start_zero>0){
            left=left_end_zero+1;
        }

       if(check_end_zero>0){
        right=start_index_zeros-1;
       }


       while(left!=right && right>left){
            if(s[left]==s[right]){
                result_flag=1;
                left++;
                right--;
            }
            else{
                result_flag=0;
                break;
            }
       }

       if(result_flag==1 || s.length()==1){
        cout<<"Yes";
       }
       else{
        cout<<"No";
       }
    }
}
