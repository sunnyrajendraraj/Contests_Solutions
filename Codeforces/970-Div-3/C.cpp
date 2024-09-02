#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    double num=44721;
    while(t--){
        double l,r;
        cin>>l>>r;
        // double x = (2*(r-l));
        // double n = sqrt(x);
        long long x = (2*(r-l));
        long long n = sqrt(x);
        // cout<<"n="<<n<<endl;

        long long temp = (n*(n+1));
        // if(l==r){
        //     cout<<"1"<<endl;
        // }else{
        //     if(n>num){
        //          cout<<num<<endl;
        //     }else{
        //         cout<<ceil(n)<<endl;
        //     } 
        // }

        if(l==r){
            cout<<"1"<<endl;
        }else{
            if(x<temp){
                cout<<n<<endl;
            }else{
                cout<<(n+1)<<endl;
            }
        }
    }
}