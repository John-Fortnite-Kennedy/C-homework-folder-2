#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.length();i++){
if ((s[i]%2)==0){s[i]='0';}}
cout<<s;
}
