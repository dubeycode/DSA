//------------------- sub array as user want 2,3,4--n-------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int subarray_size;
    cout<<"Enter the size of the subarray ";
    cin>>subarray_size;
    if (subarray_size>n || subarray_size<=0){
        cout<<"Invalid subarray size!"<<endl;
        return 0;
    }
    cout<<"subarray of size:"<< subarray_size<<"\n";
    for(int i=0;i<=n-subarray_size;i++){
        for(int j=i;j<i+subarray_size;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/


//------------------- Divide array in 2 subarray with equal sum ----------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        int sum1=0,sum2=0;

        for(int j=0;j<=i;j++){
            sum1+=arr[j];
        }

        for(int j=i+1;j<n;j++){
            sum2+=arr[j];
        }

        if(sum1==sum2){
            cout<<"partitoon found at index "<<i<<endl;
            return 1;
        }
    }
    cout<<"no patation found "<<endl;
    return 0;
}

*/

// optimize approch //
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum +=arr[i];
    }
        int prefix =0;
        for(int i=0;i<n-1;i++){
            prefix+=arr[i];
          int  ans=total_sum-prefix;
            if(ans==prefix){
            cout<<"found:"<<i<<endl;
            return 1;
        }
    }
    cout<<"NO partation found:"<<endl;

    }

*/


//--------------------- largest sum contiguous subarray ------------------------------//
// Kadane's algrothm
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of elements:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int  maxi=INT16_MIN;
   int prefix=0;
    for(int i=0;i<n;i++){
        prefix +=arr[i];
        maxi=max(maxi,prefix);  
        if(prefix<0)
        prefix=0;
    }
    cout<<"Maximum subarray sum :"<<maxi<<endl;
    return 0;

}
*/

//------------ Max diffrence between 2 elements -----------------------//
//lec=29
