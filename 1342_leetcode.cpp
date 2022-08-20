#include<bits/stdc++.h>
using namespace std;
int helper(int num , int steps){
    if(num==0){
        return steps;
    }
    if(num%2==0){
        return helper(num/2,steps+1);
    }
    return helper(num-1,steps+1);
}
int numberofsteps(int num){
    return helper(num,0);
}
int main(int argc, char const *argv[])
{
    /* code */
    cout<<numberofsteps(41);
    return 0;
}
