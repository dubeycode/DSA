//------------------Binary search-------------------//
/*
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    //start,end,mid;
    int start=0,end=n-1,mid;
    while (start<=end)
    {
        //Mid find
        mid=(start+end)/2;
        mid=mid+start+(end-start)/2;  //best approch
        // arr[mid]== key
        if (arr[mid]==key)
        return mid+1;
        // arr[mid]<key
         else if(arr[mid]<key)
        start=mid+1;
        //arr[mid]>key
        else
        end=mid-1;
    }
    return -1;
    
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cout<<"Enter the key:";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;
}

*/

// reverse binary search 
/*
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid;
    while (start<=end)
    {
        //mid
        mid=(start+end)/2;
        if(arr[mid]==key){
            return mid+1;
        }
        //arr[mid]<key
        else if(arr[mid]>key)
        start= mid+1;
        //arr[mid]<key
        else 
        end= mid-1;        
    }
    return -1;
}
int main(){
    int n;
    int arr[1000];
    cout<<"Enter the size of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;
}

*/

//--------------------- Find first and last position of element in sorted array ---------------------------------------------------//
/*
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target ,int &first ,int &last)
{
  int  start=0,end=n-1;
   first=-1;
   last=-1;
  int mid;
    while (start<=end)
    {
        //mid element
        mid=start+(end-start)/2;
        if (arr[mid]==target)
        {
            first=mid;
            end=mid-1;
        }
        else if (arr[mid]<target){
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    // rstart and end last occrence
start=0;
end = n-1;
while (start<=end)
{
   mid=start+(end-start)/2;
   if (arr[mid]==target){
    last=mid;
    start=mid+1; 
   }
   else if (arr[mid]<target){
    start=mid+1;
   }
   else{
    end=mid-1;
   }
}

    
}
//main loop 
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the Target:";
    cin>>target;
    int first,last;
    BinarySearch(arr,n,target,first,last);
    if (first==-1)
            cout<<"Element not found!"<<endl;
    else
        cout<<"First occurrence: "<< first << "\nLast occurrence: "<< last<< endl;
       // cout<<"Total number :"<<last-first+1;
    return 0;

}


*/

//find the approrite index for particular elements 
/*
#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target){
    int start=0,end=n-1,ans=n,mid;
    while(start<=end)
    {
    mid=start+(end-start)/2;
        if (arr[mid]==target){
            ans=mid;
            break;
        }
       
    else if(arr[mid]<target){
        start=mid+1;
    }
    else{
        ans=mid;
        end=mid-1;
    }
    
}
return ans;

}


// main loop 
int main(){
    int n; 
    int arr[100];
    cout<<"Enter the numbr of elementss:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target:";
    cin>>target;
    int ans=BinarySearch(arr,n,target);
    if (ans!=-1)
    cout<<"Target is found at index :"<<ans<<endl;
    else
    cout<<"Target not found "<<endl;
    return 0;
}

*/

//------------------------------squar root of x ----------------------------------------------//
/*
#include<iostream>
using namespace std; 
int Sqrt(int x){
    if (x==0 || x==1) return x;

   int  start=1,end=x,ans=0,mid;
    while(start<=end)
    {
        //mid
        mid=start+(end-start)/2;
        if(mid*mid==x)
        {
          return mid;
            break;
        }
        else if(mid*mid<x)
        {
            ans=mid;
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return ans;
}
int main(){
    int n; 
    cout<<"Enter the number of elements:";
    cin>>n;  
  int  ans=Sqrt(n);
    cout<<ans;
}

*/


//----------------------------Peak Index in Mountain--------------------------------//
/*
#include<iostream>
using namespace std;
int peakelement(int arr[],int n){
    int start=0,end=n-1,mid;
    while (start<=end)
    {
    
    mid=start+(end-start)/2;
    // mid=end+(end-start)/2;  
    //mid=start+end/2;
        // peak element
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    {#
        return mid;
    }
    //Right move
    else if (arr[mid]>arr[mid-1])
    {
       start=mid+1;
    }
    // else
    else
        end=mid-1;
 
    }
     return -1;
}

int main()
{
    int n,num;
    int arr[1000];
    cout<<"Enter the size of elements :";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=peakelement(arr,n);
    cout<<"peak index number is :"<<ans<<" and peak element is:"<<arr[ans];

}

*/

//--------------------------------------find Minimum in Roteted sorted------------------------------//
/*
include<iostream>
using namespace std;
int Roteted(int arr[],int n){
    int start=0,end=n-1,mid,ans;
    while(start<=end){
        mid=start+(end-start)/2;
        //left
        if (arr[mid]>arr[0])
        {
            start=mid+1;
        }
        //else
        else
        {
            ans=arr[mid];
            end=mid-1;
        }
    }
    return arr[start];
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elemens";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=Roteted(arr,n);+
    cout<<"Minium element :"<<ans;
}

*/

//-------------------------------------Search in rotated array ---------------------------------//
/*
#include<iostream>
using namespace std;
int Roteted(int arr[],int n,int target){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
    
        if (arr[mid]==target)
        {
           return mid;
        }
        
        else if  (arr[mid]>=arr[0])
        {
            if (arr[start]<=target && arr[mid]>=target){
                end=mid-1;
            }
           
            else
            start=mid+1;
        }

        else{
            if (arr[mid]<=target && arr[end]>=target)
            {
                start=mid+1;
            }   
            else
            end=mid-1;
        }  
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elemens";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target elements :";
    int target;
    cin>>target;

    int ans=Roteted(arr,n,target);
    cout<<"element in rotated array :"<<ans;
}
*/

//------------------------------------kth Missing positive integer ----------------------------------------------//
/*
#include<iostream>
using namespace std;
int missfind(int arr[],int n,int k){
    int start=0,end=n-1,ans=n,mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        // missing number
        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }      
    }
    return ans+k;
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[1000];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the value of k";
    cin>>k;
    int ans=missfind(arr,n,k);
    cout<<"missing number is :"<<ans;
    return 0;
}

*/

//---------------------------------------- Book Allocation ------------------------------------//
/*
#include<iostream>
#include<numeric>  // For accumulate()
#include<algorithm> // For max_element()
using namespace std;
void allocation(int arr[],int n,int m){
    if (m>n){
        cout<<"-1";
        return;
    }
    int start = *max_element(arr, arr + n);  // Maximum single book pages
    int end = accumulate(arr, arr + n, 0);  // Sum of all pages
    int ans = -1;

    while(start<=end){
      int   mid=(start+end)/2;
        int page=0,count=1;

        for(int i=0;i<n;i++){
        if(page+arr[mid] >mid){
            count++;
            page=arr[i];
        }else{
            page +=arr[i];
        }
    }
       
    if (count <= m) {  // If we can allocate within the limit
        ans = mid;
        end = mid - 1;
    } 
    else {
        start = mid + 1;
    }
}
cout << ans; 
}
   
int main(){
    int n,m;
    int arr[1000];
    cout<<"Enter the numebr of books:";
    cin>>n;
    cout<<"Enter the number of pages:";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout << "Enter the number of student: ";
    cin >> m;
    allocation(arr,n,m);
} 

*/



//----------------------------------------- painter partition----------------------------//
/*
#include<iostream>
using namespace std;
void painter(int arr[],int n,int m){
  int start=0,end=0,mid,ans=-1;
  for(int i=0;i<n;i++){
    start=max(start,arr[i]);
    end+=arr[i];
  }
  while (start<=end)
  {
    mid=start+(end-start)/2;
    int length=0,count=1;
    for(int i=0;i<n;i++){
        if(length+arr[i]>mid){
            count ++;
            length=arr[i];
        }else{
            length+=arr[i];
        }
    }
    if(count<=m){
        ans=mid;
        end=mid-1;
    }
    else{
        start=mid+1;
    }
  }
  cout<<ans;
}
int main(){
    int n,p;
    int arr[1000];
    cout<<"Enter the size of elemants :";
    cin>>n;
    cout<<"Enter the lenght of wall's";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of painter :";
    cin>>p;
     painter(arr,n,p);
}
*/

//--------------------------------ship packages----------------------------------------//
#include<iostream>
using namespace std;
void packages(int arr[],int n,int m){
   int start=0,end=0,mid,ans=-1;
    for(int i=0;i<n;i++){
        start=max(start,arr[i]);
        end +=arr[i];
    }
    while(start<=end){
         //mid
    mid=start+(end-start)/2;
    int pack=0,count=1;
    for(int i=0;i<n;i++){
        if(pack+arr[i]>mid){
            count ++;
            pack=arr[i];
        }
        else{
            pack+=arr[i];
        }
    }
    if(count<=m){
        ans=mid;
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    }
    cout<<ans; 
}
int main(){
    int n,m;
    int arr[1000];
    cout<<"Enter the number of packages: ";
    cin>>n;
    cout<<"Enter the weight of packages:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Days :";
    cin>>m;
    packages(arr,n,m); 
}
