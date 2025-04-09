//--------------- Binary serch in 2d matrix -----------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int matrix[100][100];
    int n;
    cout<<"Enter the size of matrix:";
    cin>>n;
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    int key;
    cout<<"Enter the keywhich want to find:";
    cin>>key;
    for(int i=0;i<n;i++){
        if(matrix[i][0]<=key && key<=matrix[i][n-1]){
            int start=0,end=n-1;
            while(start<=end){
                int mid=start+(end-start)/2;
                if(matrix[i][mid]==key){
                    cout<<"Element found";
                    break;
                }
                else if(matrix[i][mid]<key){
                    start=mid+1;
                }
                else
                end=mid-1;
            }
        }
      
    }
    cout<<"Element not found:";
}
*/

//------------------- same question optmize form----------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int matrix[100][100];
    int n;
    cout<<"Enter the size of matrix:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    int key;
    cout<<"Enter the key :";
    cin>>key;
    int start=0,end=n*n-1;
    while (start<=end)
    {
    int mid=start+(end-start)/2;
     int  row_index=mid/n;
     int col_index=mid%n;
     if(matrix[row_index][col_index]==key){
     cout << "Key found at (" << row_index << ", " << col_index << ")\n";
     return 0;
     }
     else if(matrix[row_index][col_index]<key){
     start=mid+1;
     }
     else{
     end=mid-1;
    }
}
   cout<<"Key not found\n";
    return 0;
}
*/

//------------- search in sorted row col wise matrix ----------------------------//
/*

#include<iostream>
using namespace std;
int main(){
    int matrix[100][100];
    int n;
    cout<<"Enter the size of  matrix:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int key;
    cout<<"Enter the key:"; 
    cin>>key;
    int i = 0, j = n - 1;
while (i < n && j >= 0) {
    if (matrix[i][j] == key) {
        cout << "Key found at (" << i << ", " << j << ")\n";
        return 0;
    } else if (matrix[i][j] > key) {
        j--; 
    } else {
        i++; 
    }
}
cout << "Key not found\n";

    }
    
*/
