#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int Left_To_Right_Diagonal=0;
    int Right_To_Left_Diagonal=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j){
               Left_To_Right_Diagonal+=arr[i][j];
            }
        }
    }

    int j=n-1;

    for(int i=0;i<n;i++){
       Right_To_Left_Diagonal+=arr[i][j];
       j--;
    }

    cout<< abs(Left_To_Right_Diagonal-Right_To_Left_Diagonal)<<endl;

}
