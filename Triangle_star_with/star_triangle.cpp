#include<bits/stdc++.h>
using namespace std;
void tringle(int r,int c){
    if(r==0){
        return;
    }
    if(c<r){
      tringle(r,c+1);
      cout<<"*";
    }
    else{
        tringle(r-1,c=0);
        cout<<"\n";
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    tringle(4,0);
    return 0;
}
