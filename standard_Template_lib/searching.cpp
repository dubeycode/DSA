// search in binary search

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(46);
    arr.push_back(54);
    arr.push_back(96);
    arr.push_back(99);
    // search
    cout<<binary_search(arr.begin(),arr.end(),99)<<endl;

    
} 