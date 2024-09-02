#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ae=0,be=0;
        if(a%2==0){
            ae=1;
        }
        if(b%2==0){
            be=1;
        }
        if((ae==0)&&(be==1)){
            cout<<"NO"<<endl;
        }
        if((ae==1)&&(be==1)){
            cout<<"YES"<<endl;
        }
        if((ae==1)&&(be==0)){
            if(a==0){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        if((ae==0)&&(be==0)){
            cout<<"NO"<<endl;
        }


    }
}