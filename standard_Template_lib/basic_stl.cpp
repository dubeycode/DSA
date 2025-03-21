/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v;
   v.push_back(5);
   v.push_back(7);
   v.push_back(9);
   cout<<"size of v:"<<v.size()<<endl;
   cout<<"capacity of v:"<<v.capacity()<<endl;
   //update value
   v[1]=5;
}

*/
/////////////////////////////////////////////////////
/*
#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v(5,99);    
   cout<<"size of v:"<<v.size()<<endl;
   cout<<"capacity of v:"<<v.capacity()<<endl;
   v.push_back(9);
   v.push_back(15);
   v.push_back(25);
   v.push_back(15);
   v.push_back(45);
   v.push_back(1);
   v.push_back(2);
   v.push_back(5);
   v.push_back(255);
   v.push_back(157);
   v.push_back(252);
   cout<<"size of v:"<<v.size()<<endl;
   cout<<"capacity of v:"<<v.capacity()<<endl;
   // inslazing the value
   vector<int>v3={1,2,3,4,5};
 
} 
*/
//////////////////////////
/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    cout<<"size:"<<v.size()<<endl;
    cout<<"size:"<<v.capacity()<<endl;
    v.pop_back();
    cout<<"size:"<<v.size()<<endl;
    cout<<"size:"<<v.capacity()<<endl;
    v.erase(v.begin()+1);
    cout<<"size:"<<v.size()<<endl;
    cout<<"size:"<<v.capacity()<<endl;
      // inset the value
      v.insert(v.begin()+1,50);
    // printing the value 
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" "<<endl;
    // remover all the elements
  v.clear();
  cout<<"size:"<<v.size()<<endl;
  
}

*/

/////////////////////
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(6);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int>a;
    // copy value 1 vector to another 
    a=arr;
    cout<<"copy value size "<<a.size()<<endl;
    for(auto i:arr)
    cout<<i<<" ";
}