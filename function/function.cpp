#include<iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
         ans=ans*i;
    }
    return ans;
}

bool prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
        
    }
    return 1;
}
int main(){
    int a,b;
    cout<<"Enter your number";
    cin>>a;
    cout<<"Enter your number";
    cin>>b;

    cout<<fact(a)<<"\n";
    cout<<fact(b)<<"\n";
    cout<<prime(b)<<"\n";
    cout<<prime(a)<<"\n";
    cout<<fact(a-b)<<"\n";
    cout<<prime(a-b)<<"\n";


} 