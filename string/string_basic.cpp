// string strore the memory in heap //
/*
#include<iostream>
using namespace std;
int main(){
    char arr[]={'a','p','p','l','e'};
   cout<<arr<<endl;  
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    char arr[]={'a','p','p','l','e'};
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }  
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    char arr[10];
    cin>>arr;
    arr[2]='\0';
    cout<<arr;
   
}
*/

//--------------string------------------//
/*
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"input a string:";
    cin>>s;
    cout<<s;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"input a string:";
   getline(cin,s); // to print with space
    cout<<s;
    cout<<s.size();
}
*/

//----- conactinat-----------//
/*
#include<iostream>
using namespace std;
int main(){
    string s1="rohit" ,s2="satyam";
    string s3=s1+s2;
    s3.push_back('D');
    s3=s1+"pa";
    cout<<s3;
}
*/

// escap char
/*
#include<iostream>
using namespace std;
// rohit is a "good" boy
int main(){
    string s="Satyam is a \"good\" boy";
    cout<<s;
}

*/

/*
#include<iostream>
using namespace std;
// "\0"
int main(){
    string s="\\0";
    string s1="\0";
    cout<<s;
    cout<<s1;
}
*/

// reverse 
#include<iostream>
using namespace std;
int main(){
    string s="Rohit";
    int start=0,end=s.size()-1;
    while (start<end)
    {
        swap(s[start],s[end]);
        start++,end--;
    }   
    cout<<s<<endl;
    // size
    int size=0;
    while (s[size]!='\0')
    {
       size++;
    }
    cout<<size<<endl;
    // palendrom 
   string s2="naman";
    start=0,end=s2.size()-1;
    while (start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"not a pallindrom";
            return 0;
        }
        start++,end--;
    }
    cout<<"pallindrom";
}