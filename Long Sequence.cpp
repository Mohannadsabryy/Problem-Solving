#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;

long long x,val=0,k=0,a[n];


for(int i=0;i<n;i++){
    cin>>a[i];
    val+=a[i];
}
cin>>x;

long long temp=0;
k+=((x/val)*n);
temp+=((x/val)*val);

for(int i=0;i<n;i++){
    if(temp>x) break;
    k++;
    temp+=a[i];
}

cout<<k;

}
