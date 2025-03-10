
/*                    using binary search                   */
//----------------- Aggressive cow--------------------------//
#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
bool isPossible(int arr[],int n,int cows,int minDist){
    int count=1;
    int lastPlace=arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]-lastPlace>=minDist){
            count ++;
            lastPlace=arr[i];
        }
        if(count==cows)
        return true;
    }
    return false;
    }
int cow_dist(int arr[],int n,int cows){
    bubblesort(arr,n);
    int start=1,end=arr[n-1]-arr[0],ans=-1;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(isPossible(arr,n,cows,mid)){
            ans=mid;
            start=mid+1;
        } else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int n,cows;
     int arr[1000];
     cout<<"Enter total number of stall:";
     cin>>n;
     cout<<"Enter the stall position :";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"Enter the number of cows:";
     cin>>cows;
     int maxDist=cow_dist(arr,n,cows);
     cout<<"Maximum minium distance between cows :"<<maxDist<<endl;
}

