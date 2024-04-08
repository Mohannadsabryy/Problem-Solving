#include <iostream>
using namespace std;

long long Fast_Pow(long long p){
    long long ret=1;
    long long base=5;

    while(p>0){
        if(p%2)ret=ret*base;
        p/=2;
        base*=base;
    }
    return ret;
}
/* power function in o(log2n)
int power(int base,int pow){
    int ret=1;

    while(pow>0){
        if(pow%2)ret=ret*base;
        base*=base;
        pow/=2;
    }
    return ret;
}
*/


int main(){
    long long n;
    cin>>n;
    long long result_power=Fast_Pow(2);
    while(result_power>25){
        result_power /=5;
    }
    cout<<result_power<<endl;
}
