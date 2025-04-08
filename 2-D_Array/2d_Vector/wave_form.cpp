//---------- Wave form ---------//
/*
#include<iostream>
using namespace std;
void wave(int arr[][4],int row,int col)
{
    for(int j=0;j<col;j++){
        // even
        if(j%2==0)
        {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }

        else{
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
    
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    wave(arr,3,4);
}
*/

//----------- Spiral Form-------------//
/*
#include<iostream>
using namespace std;
 int main(){
  int matrix[3][4];
  cout<<"Enter the matrix elements:";
  for(int i=0;i<3;i++)
  for(int j=0;j<4;j++)
  cin>>matrix[i][j];
   // Initializing boundaries
   int top = 0, bottom = 2;
   int left = 0, right = 3;
   cout<<"\n Spiral order:";
    while (top<=bottom && left<=right)
    {
        // left to right
        for(int j=left;j<=right;j++)
        cout<<matrix[top][j]<<" ";
        top++;
        // top to bottom
        for(int i=top;i<=bottom;i++)
        cout<<matrix[i][right]<<" ";
        right--;
        // Right to left
        if(left<=right){
        for(int j=right;j>=left;j--)
        cout<<matrix[bottom][j]<<" ";
        bottom--;
        }
        // bottom to top
        if(left<=right){
        for(int i=bottom;i>=top;i--)
        cout<<matrix[i][left]<<" ";
        left++;
    }
}
    return 0;
 }
*/

//-------------------Transpose of matrix--------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
    int arr[3][3];

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         arr[j][i]=matrix[i][j];

    //     }           
    // }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // printing 
    cout<<"Transpose matrix is:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // cout<<arr[i][j]<<" ";
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
    */


//------------------------ Rotate matrix by 90 clockwise ------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int ans[3][3];
    cout<<"Enter a elements 3*3:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
        // print the matrix 
    cout<<"enter matrix is:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // rotate tha matrix 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             ans[j][2-i]=arr[i][j];
        }
    }
    // print roteted matrix 
    cout<<"\n Routated matrix\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

*/
//without using any extra space 
/*
#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    cout<<"Enter the elements 4*4:"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
        cin>>arr[i][j];
    }
        // transpose first 
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
        // reverse
    for(int i=0;i<4;i++){
    int start=0,end=3;
    while(start<end){
        swap(arr[i][start],arr[i][end]);
        start++,end--;
    }
    }
    //output
    cout << "\nMatrix after 90-degree rotation:\n";
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0; 
}
*/

//--------------------------rotate matrix by 180----------------------------//
/*
#include<iostream>
using namespace std;
int arr[100][100];
int n;
// transpose
void transpose(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
//revere 
void reverse(){
    for(int i=0;i<n;i++){
        int start=0,end=n-1;
        while (start<end)
        {
          swap(arr[i][start],arr[i][end]);
          start++;
          end--;
        }
    }
}

int main(){
    cout<<"Enter the  size of square matrix:";
    cin>>n;
    cout<<"Enter the elements of matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
} 
  // 180 conver 
  transpose();
  reverse();
  transpose();
  reverse();

  // Print rotated matrix
  cout << "\nMatrix after 180-degree rotation:\n";
  for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
          cout << arr[i][j] << " ";
      }
      cout << endl;
  }

  return 0;
}
*/ 

//---------------------simple method  180 Rotate-----------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    int matrix[100][100];
    cout<<"enter the size of matrix:";
    cin>>n;

    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    } 
    // reverse columns
    for(int j=0;j<n;j++){
        int start=0,end=n-1;
        while(start<end){
        swap(matrix[start][j],matrix[end][j]);
       start++,end--;
        }
    }
    // reverse rows
    for(int i=0;i<n;i++){
     int   start=0,end=n-1;
        while (start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
    // result
    cout << "\nMatrix after 180-degree rotation:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/