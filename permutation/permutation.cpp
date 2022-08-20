#include<bits/stdc++.h>
using namespace std;
void permutation(string p, string up){
    if(up.empty()){
        cout<<p<<"\n";
        return;
    }
    char ch=up[0];
    for(int i=0;i<=p.size();i++){
        string f=p.substr(0,i);
        string s=p.substr(i,p.size());
        permutation(f+ch+s,up.substr(1));
        

    }

}
int main(int argc, char const *argv[])
{
    /* code */
   
    permutation("","abc");
     cout<<"\n";

    return 0;
}
