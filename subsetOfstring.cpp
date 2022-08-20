#include<bits/stdc++.h>
using namespace std;
void subseq(string ans, string str){
    if(str.empty()){
        cout<<ans<<"\n";
      return;
    }
    char ch=str[0];
    subseq(ans+ch,str.substr(1));
    subseq(ans,str.substr(1));

}
vector<string>subseq2(string ans, string str){
    if(str.empty()){
        cout<<ans<<"\n";
        vector<string>list;
        list.push_back(ans);
 
      return list;
    }
    char ch=str[0];
   vector<string>left(subseq2(ans+ch,str.substr(1)));
   vector<string>right(subseq2(ans,str.substr(1)));
   left.emplace_back(right.begin(),right.end());
   return left;
}
int main(int argc, char const *argv[])
{
    /* code */
    string ans;
    string str="abc";
    cout<< subseq2(ans="",str);
    return 0;
}
