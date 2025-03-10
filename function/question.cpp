//------------------------------Small letter to captial letter-------------------------------//
/*
#include<iostream>
using namespace std;
char convert(char ch){
   char ans=ch-'a'+'A';
   return ans;
}

int main(){
    char ch;
    cout<<"Enter your character :";
    cin>>ch;
    cout<<convert(ch);
}

*/

//------------------------------armstrong numebr---------------------------------// 
/*
#include<iostream>
#include<math.h>
using namespace std;
int count_dig(int n){
    int count=0;
    while (n>0)
    {
        count++;
        n/=10;
    }
    return count;
}
string arm(int num,int digits){
    int n=num,ans=0,rem;
    while (n)
    {
        rem=n%10;
        n/=10;
        ans+=static_cast<int>(round(pow(rem,digits)));
    }
    
    return (ans==(num))?"armstrong":"not_armstrong";
}
int main(){
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int digits=count_dig(num);
    // cout<<digits;
    cout<<arm(num,digits);
}
*/

//------------------------------Find Trailing Zero in fact  ---------------------------------//
/*
#include<iostream>
using namespace std;
int trailing(int number){
    int store=number/5;
   int store_1=store/5;
    int sum=store+store_1;
    cout<<sum;
}
int main(){
    int num;
    cout<<"Enter your numebr ";
    cin>>num;
    trailing(num);
}

*/
