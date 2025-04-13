//------------Defaning an ip address------------//
/*
#include<iostream>
using namespace std;
int main(){
    int index=0;
   string ans;
   string address="1.1.1.1";
    while (index<address.size())
    {
       if(address[index]=='.')
       ans=ans+"[.]";
       else
       ans=ans+address[index];
       index++;
    }
    cout<<ans;
}
*/


//-------------------cheek if string is roted by 2 palces-------------------------------//
/*
#include<iostream>
using namespace std;

void rotat_clock_wise(string &s){
   
    char c= s[s.size()-1];
    int index=s.size()-2;
    while (index>0)
    {
        s[index+1]=s[index];
       index--;
    }
    s[0]=c;
}

void rotate_anticlock_wise(string &s){
   
    char c=s[0];
    int index=1;
    while (index<s.size()-1)
    {
      s[index-1]=s[index];
      index++;
    }
    s[s.size() - 1] = c;
}

int main(){
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    string clock_wise=str1;
    string  anticlock_wise=str1;
    rotat_clock_wise(clock_wise);
    rotat_clock_wise(clock_wise);
    if (clock_wise==str2){
        cout << "Match found after 2 clockwise rotations." << endl;
        return 0;
    }
    
    rotate_anticlock_wise(anticlock_wise);
    rotate_anticlock_wise(anticlock_wise);
    if (anticlock_wise == str2) {
        cout << "Match found after 2 anti-clockwise rotations." << endl;
        return 0;
    }
    cout << "No match found after 2 rotations in either direction." << endl;
    return 0;
     
}
*/

//----------------------------- cheek pangram --------------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string sentence;
    cout<<"Enter the string:";
    getline(cin,sentence);
    vector<bool>alpha(26,0);
    for(int i=0;i<sentence.size();i++)
    {
      int index = sentence[i]-'a';
      alpha[index]=1;
      // alpha[sentence[i]-'a]=1;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]==0){
            cout<<"not ";
            return 0;
        }   
    }
    cout<<"yes";
    return 0;
}
*/

//------------------------------ short a string ------------------------//
/*
#include<iostream>
using namespace std;
int main(){
    char arr[1000];
    int n;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter your char:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/

//----------------------------------short the string-------------------------------//
/*
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>alpha(26,0);
//    int  index=s[i]=s[i]-a;
//     alpha[index]++;
for(int i=0;i<s.size();i++){
        alpha[s[i]-'a']++;
    }
        string ans;
    for(int i=0;i<26;i++){
        char c='a'+i;
        while (alpha[i])
        {
            ans+=c;
            alpha[i]--;
        }
        
    }
    cout<<ans<<" ";
}
*/

//-------------------------- longest palindrome---------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string ";
    cin>>s;
    vector<int>lower(26,0),upper(26,0);
    // count frequancy of each character
    for(int i=0;i<s.size();i++){
        if(s[i]>='a')
       lower[s[i]-'a']++;
        else
       upper[s[i]-'A']++;
    }

    int count=0;
    bool odd=0;
    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            count+=lower[i];
        }
        else{
            count+=lower[i]-1;
            odd=1;
        }
      
        if(upper[i]%2==0)
        count+=upper[i];
        else{
            count+=upper[i]-1;
            odd=1; 
        }
    }
    if(odd)
    count+=1;

cout<<count;
}

*/

//------------------ shorting the sentence-------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string:";
    getline(cin,s);
    vector<string>ans(10);
    string temp;
    int count=0,index=0;

    while(index<s.size()){
        if(s[index]==' '){
            int pos=temp[temp.size()-1]-'0';
            temp.pop_back();
            ans[pos]=temp;
            temp.clear();
            count++;
        }
        else{
            temp+=s[index];
        }
        index++;
    }
        if(!temp.empty()){
        int pos = temp[temp.size() - 1] - '0';    
        temp.pop_back();
        ans[pos]=temp;
        count++;
    }
    string result;
    for(int i=0;i<=count;i++){
        result +=ans[i]+' ';
    }
    result.pop_back();
    cout <<"correct format is:"<<result << endl;

}
*/


//-------------------------- sort vowel in a string --------------------------//
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter you string:";
    getline(cin, s);

    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
        {
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }

    string vowel;
    // store upper case
    for(int i=0;i<26;i++){
        char c= 'A'+i;
        while(upper[i]) 
        {
          vowel+=c;
          upper[i]--;  
        }
    }
    // store lower case
    for(int i=0;i<26;i++){
        char c= 'a'+i;
        while(lower[i]) 
        {
            vowel+=c;
          lower[i]--;  
        }
    }

    // replace the #
    int first=0,second=0;
    while (second<vowel.size())
    {
       if(s[first]=='#'){
        s[first]=vowel[second];
        second++;
       }
       first++;
    }

   
    cout<<"Final result:"<<s<<endl;
}

*/

//--------------------Add string----------------------------------//
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string num1;
    getline(cin,num1);
    string num2;
    getline(cin,num2);

    int index1=num1.size()-1,index2=num2.size()-1 ;
    string ans;
    int carry=0,sum;

    while (index2>=0)
    {
       sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
       carry=sum/10;
       char c='0'+sum%10;
       ans+=c;
       index2--,index1--;
    }

    while (index1>=0)
    {
       sum=(num1[index1]-'0')+carry;
       carry=sum/10;
       char c='0'+sum%10;
       ans+=c;
       index1--;
    }
    if(carry){
        ans+=(carry+'0');
    }
    reverse(ans.begin(), ans.end());
    cout<<"sum:"<<ans;
}

