//----------------- pass by value --------------//

#include<iostream>
using namespace std;
void fun(int a){
    int var=a++;
    cout<<"pass by value "<<a;
}

int main(){
    int n=4;
    cout<<"org data "<<n<<endl;
    fun(n);
}


//-------------------pass by refrance ------------#

#include<iostream>
using namespace std;
void fun(int &n){
    int var=n++;
    cout<<var<<endl;

}
int main(){
    int n=5;
    cout<<n<<endl;
}

// both concept understand by swap using function
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
int main(){
    int a,b;
    a=10;
    b=20;
    cout<<"before swap";
    cout<<a<<" "<<b<<" "<<endl;
    swap(a,b);
    cout<<"After swap";
    cout<<a<<" "<<b<<" "<<endl;
}


/// function over loading 
