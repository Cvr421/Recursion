
#include<bits/stdc++.h>
using namespace std;
string skipChar(string str){
    if(str.empty()){
        
      return " ";
    }
    char ch=str[0];
    if(ch=='a'){
       return skipChar(str.substr(1) );
    }else{
       return ch+skipChar(str.substr(1)  );
    }
}
// string skipString(string str){
//     if(str.empty()){
//         return " ";
//     }
//     string sub="apple";
//     // if(str.starts_with("apple")){
//        return skipString(str.substr(5));
//     }
//     // else{
//     //     return str[0]+skipString(str.substr(1));
//     // }
// }
int main(int argc, char const *argv[])
{
    /* code */
    cout<<skipChar("baccdah");
    return 0;
}



