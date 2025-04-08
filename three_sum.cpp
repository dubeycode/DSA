//--------------------Three sum Brute Force--------------------//
/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target value:";
    cin>>x;
    bool found = false;

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==x){
            cout << "Triplet found: " << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
            found = true;
        }
    }
}
}
if (!found){
    cout<<"No triplet found with the given sum "<<endl;
}
return 0;
}
// time complexity o(n^3)
*/

//---------------------- optimize the code binary search--------------------------//
/*
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target value:";
    cin>>x;

    // short the array
    sort(arr,arr+n);

    bool found = false;

    for(int i=0;i<n-2;i++){
       for(int j=i+1;j<n-1;j++){
        int find=x-arr[i]-arr[j];
      int start=j+1;
      int end=n-1;
      // binary search
      while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]== find){
            cout<<"Triplet found:"<<arr[i]<<", "<<arr[j]<<", "<<", "<<arr[mid]<<endl;
            found=true;
            break;
        }
        else if(arr[mid]<find){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
      }
       }
    }
    if(!found){
        cout<<"No triplet found with given sum:"<<endl;
    }
    return 0;
}
// n ,n ,logn ==n^2log(n)
*/

// using two pointer//
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target value:";
    cin>>x;

    // sort the array
    sort(arr,arr+n);
    bool found=false;
    for(int i=0;i<n-2;i++){
       int ans=x-arr[i];
     int   start=i+1;
     int   end=n-1;
     while(start<end){
        if(arr[start]+arr[end]==ans){
        cout << "Triplet found: " << arr[i] << ", " << arr[start] << ", " << arr[end] << endl;
        found=true;
        break;
     }
        else if(arr[start]+ arr[end]>ans)
        {
            end--;
        }
        else{
            start++;
        }
     }
     if(found) break;
    }
    if(!found){
        cout<<"NO triple found with given sum."<<endl;
    }
    return 0;
}

// question for solve 4sum 