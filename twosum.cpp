//---------------------------Two sum--------------------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int n;
    cout<<"Enter your number:";
    cin>>n;
    vector<int>arr(n); 
    cout<<"Enter the element of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
     cout<<"Enter the target sum:";
     cin>>target;

    for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]== target){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);  
            break;
        } 
     }   
    }
    if(!ans.empty()){
        cout<<"pair found:"<<arr[0]<<" "<<ans[1]<<endl;
    }else{
        cout<<"No pair found"<<endl;
    }
    return 0;
    }

    */

//----------------using binary search-----------------------#
/*
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int start,int end, int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if (arr[mid]==key)
            return mid;
            else if(arr[mid]<key)
            start=mid+1;
            else
            end=mid-1; 
    }
        return -1;
    }

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element in shoted orde";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum:";
        cin>>target;
        // find the pair
        for(int i=0;i<n-1;i++){
            int x=target-arr[i];
            // perform binary search
            int index = binarysearch(arr, i + 1, n - 1, x);
            if(index !=-1){
                cout<<"pair found: "<<arr[i]<<" and "<<arr[index]<<endl;
                return 0;
            }       
    }

cout<<"No pair found"<<endl;
}

*/



//------------------------------------ pair givren diffrence  ----------------------------------//

/*
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;

    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of element :";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element shorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target value :";
    cin>>target;
    bool found=false;
    for(int i=0;i<n-1;i++){
        int required = arr[i] + target;
        if (binarysearch(arr,i+1,n-1,required)!=-1){
        cout<<"pair found:"<<arr[i]<<", "<<required<<endl;
        found= true;
    }
    }
if (!found){
    cout<<"NO such pair found.\n";
}
return 0;
}

*/
//----------- burt force method   solve the given diffrence --------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n ,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    cout<<"Enter the target value:";
   cin>>target;
   
   bool found=false;
   //burte force approch
   //The first person shakes hands with everyone after them.  
   //The second person shakes hands with everyone after them (but not the first person again).
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(abs(arr[i]-arr[j])==target){
            cout<<"pair found :("<<arr[i]<<", "<<arr[j]<<")\n";
            found=true;
        }
    }
   }
   if(!found){
    cout<<"No such pair found .\n";
   }
   return 0;
}
*/


//----------two pointer using---------------//
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target value:";
    cin>>target;
    int start=0,end=1;
    while (end<n)
    {
        int diff=arr[end]-arr[start];
       if(diff==target){
       cout<<"Pair found:("<<arr[start]<<", "<<arr[end]<<")\n";
    return 1;
}
    else if(diff<target)
    {
    end++;
    }
    else
    {
    start++;
    }
    }
    cout<<"No such pair found .\n"; 
    return 0;
}


