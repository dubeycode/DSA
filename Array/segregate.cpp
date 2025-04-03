#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n; 
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter your element:";
        cin>>arr[i];
    }
    int start=0,end=n-1;
    while (start<end)
    {
        /* code */
        if(arr[start]==0)
        start ++;
        else{
            if (arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++,end--;
            }
            else{
                end--;
            }
        }
    } 
     cout<<"shorted array:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }     
    cout<<endl;
}

/* brute force method is cound the total 0 and 1 then fill the value becaue we know how many 
number exixt in the array */
