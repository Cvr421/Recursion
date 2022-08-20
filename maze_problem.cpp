#include<bits/stdc++.h>
using namespace std;
// finding the number of ways to go from A to B in matrix
int count (int r, int c){
    if(r==1||c==1){
        return 1;

    }
    int left=count (r-1,c);
    int right=count (r,c-1);
    return left+right;
}
int main(int argc, char const *argv[])
{
    /* code */
    cout<<count(3,3)<<"\n";
    return 0;
}
