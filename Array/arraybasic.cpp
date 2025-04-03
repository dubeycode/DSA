//1 method//
/*
#include<iostream>
using namespace std;
int main(){
    int a[] ={2,4,6,8,10};
    cout<<a[4];
}
*/
//second method//
/*
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cout<<"Enter your elements: ";
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<" "<<arr[i];
    }
   
}

*/
// method 3
/*
#include<iostream>
using namespace std;
int main(){
    int arr[3];
    arr[0]=20;
    arr[1]=30;
    arr[2]=40;

    cout<<arr[2];
}

// note-: add_of_index=arr+index*sizeofdatatype
 
*/


// find the size of array
/*
#include<iostream>
using namespace std;
int main(){
    int arr[]={9,5,4,6,3,7,1,8,2,89};
    cout<<sizeof(arr)/sizeof(arr[0])<<" ";
}
*/

// find the min number from array
/*
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={56,76,87,68,69};
    int ans=INT_MAX;
    // main value
    for(int i=0;i<5;i++)
    {
        if (arr[i]<ans) 
        ans=arr[i];
    }
    cout<<ans;
    return 0;
}


*/

 
// find the max in array 
/*
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={96,45,58,86,39,43,54,91,190};
   int size=sizeof(arr)/sizeof(arr[0]);
    int ans=INT_MIN;
    // main value
    for(int i=0;i<size;i++){
        if (arr[i]>ans)
        ans=arr[i];
    }
    cout<<ans;
}

*/


//-------------------------------sun of n number----------------------------//
/*
#include<iostream>
using namespace std;
int main(){
   int sum=0,n;
   cout<<"Enter size of numebr: ";
   cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"Enter numbers"<<i+1<<":  ";
      cin>>arr[i];
      sum=sum+arr[i];
    }
   cout<<"sum of digits are: "<<sum;
}

*/


//----------------------------------search the element------------------------// 
/*
#include<iostream>
using namespace std;
int main(){
    int x,index=-1,num; // -1 not found in array 
    int arr[5]={55,66,77,88,99};
    cout<<"Enter the search element:";
    cin>>num;
    x=num;

    for(int i=0;i<5;i++){
        if(arr[i]==x)
        {
            index=i;

             break;
       
        }
    }
    cout<<" Found in index:"<<index;
}
*/

//----------------------------Reverse Array-------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int arr[6]={7,8,9,10,11,78};
  int  start=0 , end=5;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    };

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}

*/

//--------------------------------Second Max ------------------------------//
/*
#include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int second;
    int arr[5]={44,66,77,94,679};
    int ans=INT_MIN;
    for(int i=0;i<5;i++){
        if (arr[i]>ans){
            
        ans=arr[i];
        }
        // second largest 
         second=INT_MIN;
        for (int i=0;i<5;i++){
            if(arr[i]> second && arr[i]<ans)
            second=arr[i];
        }
    }
    if (second==INT_MIN){
        cout<<"No second largest exist ";
    }
    else{
        cout<<"second largest elemsent "<<second;
    }
    return 0;
}

*/

//----------------------------- find the missing number ----------------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,ans;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    //sum of all element in an array
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
       sum +=arr[i];
       // sum of n number
        ans =n*(n+1)/2; 
    //    sum=n*(n+1)/2;
    }
    cout<<"Missing Element is :"<<ans-sum; 
}

*/


//--------------------------fibnocacci serise ------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter the number of fibnocacci : ";
    cin>>n;
    int arr[50];
    // first 
    //second
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n-1;i++)
        arr[i]=arr[i-1]+arr[i-2];
    cout<<n<<" element of fibo is :"<<arr[n-1];
}

*/


//-----------------------Rotate  array by one ----------------------------//
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={55,88,44,66,33,11};
//     int last= arr[n-1];

//     for(int i=n-2;i>=0;i--)
//     arr[i+1]=arr[i];

//     arr[0]=last;


// }


//---------------------------- using function -----------------------------------//

#include<iostream>
using namespace std;

void fun(int a[],int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}


int main(){
    int arr[]={45,78,65,18,39};
    fun(arr,5);

}
