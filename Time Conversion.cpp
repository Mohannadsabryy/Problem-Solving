#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;
    string back_end1,back_end2,time;
    getline(cin,s);
   back_end1=s.back();
   s.pop_back();
   back_end2=s.back();
   s.pop_back();
   back_end2+=back_end1;

   if(back_end2=="PM"){
        if(s.substr(0,2)=="01"){
            s.replace(0,2,"13");
        }
        else if(s.substr(0,2)=="02"){
            s.replace(0,2,"14");
        }
        else if(s.substr(0,2)=="03"){
            s.replace(0,2,"15");
        }
        else if(s.substr(0,2)=="04"){
            s.replace(0,2,"16");
        }
        else if(s.substr(0,2)=="05"){
            s.replace(0,2,"17");
        }
        else if(s.substr(0,2)=="06"){
            s.replace(0,2,"18");
        }
        else if(s.substr(0,2)=="07"){
            s.replace(0,2,"19");
        }
        else if(s.substr(0,2)=="08"){
            s.replace(0,2,"20");
        }
        else if(s.substr(0,2)=="09"){
            s.replace(0,2,"21");
        }
        else if(s.substr(0,2)=="10"){
            s.replace(0,2,"22");
        }
        else if(s.substr(0,2)=="11"){
            s.replace(0,2,"23");
        }
   }
   else if(back_end2=="AM"){
        if(s.substr(0,2)=="12"){
            s.replace(0,2,"00");
        }
   }

   cout<<s<<endl;

}
