//---------- print row index with max sum---------------//
/*
#include<iostream>
using namespace std;
void printrowmax(int arr[3][4],int row,int col){
    int index=-1,sum=INT32_MIN;
    for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++)
        total+=arr[i][j];
        if (total>sum){
            sum=total;
            index=i;
        }
    }
    cout << "Row with max sum: " << index << endl;
}
int main(){
    int arr[3][4]={
    {3,4,7,18},
    {2,8,3,9},
    {5,12,14,36}
    };
    printrowmax(arr,3,4);
}

*/

// print sum of diagonal element
/*
#include<iostream>
using namespace std;
void printsumdigonal(int arr[4][4],int row,int col){
    int first=0;
    int second=0;
    // first diognal
    for(int i=0;i<row;i++){
        first +=arr[i][i];
    }
    // second digonal sum 
    for(int i=0,j=col-1; j>=0;i++,j--){
        second +=arr[i][j];
    }
     cout<<first<<" "<<second<<" ";
}
int main(){
    int arr[4][4]={7,8,9,6,3,2,1,4,4,7,8,9,6,3,2,1};
    printsumdigonal(arr,4,4);
}


*/

//------------------ Reverse each row of matrix -------------------//
#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row=4,col=4;
    //reversee
    for(int i=0;i<row;i++){
        int start=0,end=col-1;
        while (start<end)
        {
            swap(arr[i][start],arr[i][end]);
            start ++,end--;
        }    
    }
    cout<<"reverse rows:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}