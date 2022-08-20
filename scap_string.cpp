#include<bits/stdc++.h>
using namespace std;
void skipChar(string ans,string str){
    if(str.empty()){
        cout<<ans<<"\n";
      return;
    }
    char ch=str[0];
    if(ch=='a'){
        skipChar(ans,str.substr(1));
    }else{
        skipChar(ans+ch,str.substr(1));
    }
}

int main(int argc, char const *argv[])
{    string ans=" ";
string str="baccdah";
    skipChar(ans="",str="baccdah");
    return 0;
}
