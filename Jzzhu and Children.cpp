#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,num,last_indx;
    cin>>n>>m;
    pair<int,int>x[n];
    queue< pair<int,int> >q;
    for(int i=0;i<n;i++){
        cin>>num;
        x[i].first=num;
        x[i].second=i+1;
        q.push(x[i]);
    }

    while(q.empty()!=1){
        last_indx=q.front().second;
        if(m>=q.front().first){
            q.pop();
        }
        else{
            q.push({q.front().first-m,q.front().second});

            q.pop();
        }

    }
    cout<<last_indx<<endl;


}
