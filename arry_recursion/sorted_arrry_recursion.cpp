#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int>arr, int index){

    if(index==arr.size()-1){
        return true;
    }
    return arr[index]<arr[index+1]&& sorted(arr,index+1);
}
 int main(int argc, char const *argv[])
 {
    
  vector<int>arrr({1,2,4,3,5,6});
    cout<<sorted(arrr,0);
    /* code */
    return 0;
 }
 