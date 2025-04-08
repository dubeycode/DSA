//---------------- Rotate matrix k times-----------------//
#include<iostream>
using namespace std;

void Rotate(int matrix[][100],int n){
    // transpose the matrix 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // reverse each row 
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while (start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }     
    }
}
int main(){
    int matrix[100][100];
    int n,k;
    cout<<"Enter the size of  square matrix: ";
    cin>>n;
    cout<<"Enter the elements of matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
   
    cout<<"Enter the rotate times:";
    cin>>k;
    k=k%4; 
    while (k--)
    {
        /* code */
        Rotate(matrix,n);
    }

    cout << "Matrix after rotation:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}