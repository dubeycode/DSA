//---------- 2d vactor and its opration ---------------//
/*

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // creat 2d vector 
    vector<vector<int> >matrix(3,vector<int>(4,1));

    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
    cout<<"Rows="<<matrix.size();
    cout<<"\n";
    cout<<"cloums="<<matrix[0].size();

}
    */

//----------- 2d vector taking input by user----------------//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows:";
    cin>>n;
    
    cout<<"Enter coloums:";
    cin>>m;

    vector<vector<int> >matrix(n,vector<int>(m,1));

    // to print the value
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];

    cout<<"Enter elements are:"<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
    }
}
