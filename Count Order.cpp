#include <bits/stdc++.h>
using namespace std;


int main(){
     int n;
     cin>>n;
     int P[n];
     int arr[n];
     int Q[n];
     int P_found=1;
     int Q_found=1;
     int P_num=0,Q_num=0,Perm_num=0;
     int perm_flag=1;

     for(int i=0;i<n;i++){
        cin>>P[i];
        arr[i]=P[i];
     }

     for(int i=0;i<n;i++){
        cin>>Q[i];
     }

     sort(arr,arr+n);

     while(perm_flag){
        P_found=1;
        Q_found=1;
        for(int i=0;i<n;i++){
            if(arr[i]!=P[i]){
                P_found=0;
            }

            if(arr[i]!=Q[i]){
                Q_found=0;
            }
        }

        if(P_found==1){
           P_num =Perm_num;
        }
        if(Q_found==1){
            Q_num=Perm_num;
        }
        if(P_found && Q_found){
            break;
        }

        perm_flag=next_permutation(arr,arr+n);
        Perm_num++;
     }

     cout<<abs(P_num - Q_num)<<endl;

}
