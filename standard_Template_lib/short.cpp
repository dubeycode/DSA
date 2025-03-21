#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>ans;
    ans.push_back(65);
    ans.push_back(34);
    ans.push_back(12);
    ans.push_back(96);
    ans.push_back(48);
    
    // short in increasing order
    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    // decreasing orser
    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    sort(ans.rbegin(),ans.rend());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

}