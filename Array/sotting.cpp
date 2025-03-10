//------------------------------selection sort-----------------------------------------------//
/*
//low to high
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array: ";
    cin>>n; //size of array
    cout<<"Enter your element:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<=n-1;i++){
        int index=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 

*/

/*
//-----------------high to low------------------//
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array: ";
    cin>>n; //size of array
    cout<<"Enter your element:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<=n-1;i++){
        int index=i;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
} 

*/


//------------------------------------Bubble sort--------------------------//
/*
#include<iostream>
using namespace std;
int main(){
      int arr[1000];
      int n;
      cout<<"Enter the number:";
      cin>>n;
      cout<<"Enter the element in array:";
      // Enter the main value in the loop  
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      // start the main loop 
      for(int i=n-2;i>=0;i--)
      {
        bool swapped=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
      }
    // printing the loop   
      for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
}

//----------------------HIgh to low --------------------------------//
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    // taking input
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // main loop
    for(int i=n-1;i>=0;i--){
        bool swapped=false;
        for(int j=0;j<i;j++){
            if (arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped)
        break;
       }
     // printing the elements 
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

*/

//---------------insertion sort --------------//
#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n,i;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements :";
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(int i=1;i<n;i++)
    {
    for(int j=i;j>0;j--)
    {
        if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1]);
        else
        break;
    }
}
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

// broute for method 