#include<bits/stdc++.h>
using namespace std;

int helper(int n, int c){
    if(n==0){
        return c;

    }
    int rem=n%10;
     if(rem==0){
        return helper(n/10,c+1);
    }


    else{
        helper(n/10,c);
    }
}
int count(int n){//finding the no. of zeros
    return helper(n,0); 
}
int main(int argc, char const *argv[])
{
    cout<<count(1202304);
    return 0;
}
