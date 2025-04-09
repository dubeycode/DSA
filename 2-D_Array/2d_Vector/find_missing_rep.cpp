//----------------------- repeting and missing number  o(n^2)------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter  n number:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   //  repeting 
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            cout<<"repate:"<<arr[i]<<endl;
            break;
        }
    }
   }
   // missing number 
   for(int i=1;i<=n;i++){
    int count =0;
    for(int j=0;j<n;j++){
        if(arr[j]==i){
            count++;
        }
    }
    if(count==0){
        cout<<"missing value"<<i<<endl;
    }
   }
   return 0;
}

*/
//----------- nlog(n) better approch --------------------------//
/*
#include<iostream>
#include<algorithm>
using namespace std;
void sort(int arr[],int n){
   sort(arr,arr+1);
   
   cout<<"Duplicates value:";
   for(int i=0;i<n;i++){
    if(arr[i]==arr[i-1]){
        if(i==1||arr[i]!=arr[i-2]){
            cout<<arr[i]<<" ";
        }
    }
   }
   cout<<" \n";
   // missing 
   cout<<"Missing:";
   int expected=1,i=0;
   while (expected<=n && i<n)
   {
    if(arr[i]<expected){
        i++;
    }else if(arr[i]>expected){
        cout<<expected<<" ";
        expected++;
    }
    else{
        expected++;
        i++;
    }
   }
   // missing at the end
   while (expected<=n)
   {

    cout<<expected<<" ";
    expected++;
   }
   cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
   int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,n);
}
*/

//********************/ best optmize way*************************//
/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    // simple array 
    vector<int>arr(n);
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // count occurance
    vector<int>count(n,0);
    for(int i=0;i<n;i++){
        count[arr[i]-1]++;
    }
        //missing number 
        cout<<"Messing numebr:";
        for(int i=0;i<n;i++){
            if(count[i]==0){
                cout<<i+1<<endl;
            }
        }
        // repete number
        cout<<"Repeting number:";
        for(int i=0;i<n;i++){
            if(count[i]==2){
                cout<<i+1<<endl;
                break;
            }
        }
        return 0;

    }
   
*/

//--------------- without using any extra any space -----------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]--;
    }

    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;  // divid then go to array and add the element

    }
    // missing number 
    cout<<"Mising element is:"<<" ";
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
            cout<<i+1<<endl;
            break;
        }
    }
    //repeting number 
    cout<<"Reperting value is :"<<" ";
    for(int i=0;i<n;i++){
        if(arr[i]/n==2){
            cout<<i+1<<" ";
        }
    }
}

*/


//--------------- find the occurance---------------------//
/*

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    //simple array 
    vector<int>arr(n);
    cout<<"enter your elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      
    // find max 
    int maxElement = *max_element(arr.begin(),arr.end());

    // count array
    vector<int>count(maxElement +1,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    /* thik to under stand why (Don't open )
    i	arr[i]	count[arr[i]]++	Updated count
0	2	count[2]++	[0, 0, 1, 0]
1	3	count[3]++	[0, 0, 1, 1]
2	1	count[1]++	[0, 1, 1, 1]
3	2	count[2]++	[0, 1, 2, 1]
4	3	count[3]++	[0, 1, 2, 2]
 dont open this comment  */
/*
    cout<<"occurance:"<<endl;
    for(int i=0;i<=maxElement;i++){
        if(count[i]>0){
            cout<<i<<" ocurs "<< count[i]<< " times\n";
        }
    }
}
*/

//------------------ majority element -----------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size:";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
     // brute force method
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
        if(arr[j]==arr[i]){
            count++;
        }
    }
        if(count>n/2){
            cout<<"Majarity element is:"<<arr[i]<<endl;
            return 0;
        }
    }
    cout<<"No majority element found:"<<endl;
}

*/

//---------- optomize majority Boyer-Moore Majority Voting Algorithm-------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int candidate;
    int count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            candidate=arr[i];
        }
        else{
            if(candidate==arr[i])
            count++;
            else
            count--;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==candidate)
        count ++;
    }
    if(count>n/2){
        cout<<"Majorit:"<<candidate;
    }
    else
    cout<<"no any Majority";
}
*/
