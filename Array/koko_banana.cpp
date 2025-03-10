#include<iostream>
#include<algorithm>
using namespace std;
int koko(int arr[],int n,int h){
    int start=1,end=0,ans=-1;

   for(int i=0;i<n;i++){
    start +=arr[i];
    end=max(end,arr[i]);
   }
    start/=h;

    while (start<=end)
    {
        //mid amount consume in 1 hour
      int  mid=start+(end-start)/2;
        int total_time=0;
        for(int i=0;i<n;i++){
            total_time+=arr[i]/mid;
            if(arr[i]%mid)
            total_time++;
        }
       if(total_time>h){
        start=mid+1;
       }
       else{
        ans=mid;
        end=mid-1;
       }
    }
    return ans;
}
int main(){
    int n,h;
    int arr[1000];
    cout<<"Enter  the number of banana:";
    cin>>n;
    cout<<"Enter the quntity of bana na :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the time:";
    cin>>h;
    int output=koko(arr,n,h);
    cout<<output;
}