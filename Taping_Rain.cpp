//------ brut force method for taping rain water------//
/*
#include<iostream>
using namespace std;
int trapRain(int arr[],int n){
    if (n==0)return 0;
    int totalwater=0;

    // itreate whole loop 
    for(int i=0;i<n;i++){
        int maxleft=0,maxright=0;

        // find maxleft
        for(int j=0;j<=i;j++){
            if(arr[j]>maxleft){
                maxleft=arr[j];
            }
        }
        // find max right h
        for(int j=i;j<n;j++){
            if(arr[j]>maxright){
                maxright=arr[j];
            }
        }
        totalwater +=min(maxleft,maxright)-arr[i];
    }
    return totalwater;
}
int main(){
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<"TOtal traped water:"<<trapRain(arr,n)<<endl;
}
*/

// optimize the program//
/*

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter the heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    if (n == 0) {
        cout << "Water trapped: 0" << endl;
        return 0;
    }

    vector<int> left_max(n), max_right(n);

    // Compute left max
    left_max[0] = height[0];  
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], height[i]);
    }

    // Compute right max
    max_right[n - 1] = height[n - 1]; 
    for (int i = n - 2; i >= 0; i--) {
        max_right[i] = max(max_right[i + 1], height[i]);
    }

    // Calculate trapped water
    int water = 0;
    for (int i = 0; i < n; i++) {
        int min_height = min(left_max[i], max_right[i]);
        if (min_height > height[i]) {
            water += min_height - height[i];
        }
    }

    cout << "Water trapped: " << water << endl;
    return 0;
}

*/

// o(n) more optmize the code
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;

    vector<int>height(n);
    cout<<"Enter the height:";
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    int max_left=0,max_right=0,water=0;
    int max_height=height[0],index=0;
     // Find the tallest bar's index
    for(int i=1;i<n;i++){
        if(height[i]>max_height){
            max_height=height[i];
            index=i;
        }
    }
    //left max traped water 
    for(int i=0;i<index;i++){
        if(max_left>height[i])
        water+=max_left-height[i];
        else
        max_left=height[i];
    }
    //right max traped water 
    for(int i=n-1;i>index;i--){
        if(max_right>height[i])
        water+=max_right-height[i];
        else
        max_right=height[i];
    }
   cout<<"traped water:"<<water;
}

*/

// solve this question two pointer 
