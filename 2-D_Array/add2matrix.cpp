//------------- add two matrix-----------------//
/*
#include<iostream>
using namespace std;
int main(){
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int ans[3][4];
    
    // add 2 matrix
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++){
        ans[row][col]=arr1[row][col]+ arr2[row][col];
    }

    // print after addtion 
    for(int row=0;row<3;row++)
    for(int col=0;col<4;col++)
    cout<<ans[row][col]<<" ";
}
*/
//------------subtract two  matrix-----------------//
#include<iostream>
using namespace std;
int main(){
    int arr1[2][2]={3,6,9,8};
    int arr2[2][2]={1,4,7,8};
    int ans[2][2];

    for(int row=0;row<2;row++)
    for(int col=0;col<2;col++){
        ans[row][col]=arr1[row][col]+arr2[row][col];
    }

    for(int row=0;row<2;row++)
    for(int col=0;col<2;col++)
    cout<<ans[row][col]<<" ";
}