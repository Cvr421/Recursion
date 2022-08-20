#include<bits/stdc++.h>
using namespace std;
bool find(vector<int>arr,int target,int index){
    if(index==arr.size()-1){
       return false;
    }
    
     return arr[index]==target || find(arr,target,index+1);
}
int findIndex(vector<int>arr,int target,int index){
    if(index==arr.size()-1){
        return -1;
    }   
    if(arr[index]==target){
        return index;
    }else return findIndex(arr,target,index+1);
    
}
int findIndexfromlast(vector<int>arr,int target,int index){
    if(index == -1){
        return -1;
    }   
    if(arr[index]==target){
        return index;
    }
    else return findIndexfromlast(arr,target,index-1);
    
}
vector<int>arr3;
int findAllIndex(vector<int>arr,int target,int index){
    if(index==arr.size()-1){
        return -1;
    }   
    if(arr[index]==target){
      arr3.push_back(index);
    }else return findIndex(arr,target,index+1);
    
}
// returning the vector in the recursion funtion
vector<int>findAllIndex1(vector<int>arr,int target,int index,vector<int>arn){
    if(index==arr.size()-1){
        return arn;
    }
    if(arr[index]==target){
        arn.push_back(index);
    }
    return findAllIndex1(arr,target,index+1,arn);
}
int main(int argc, char const *argv[])
{
 vector<int>arrr({2,3,1,4,4,5});
 vector<int>arn;
    cout<<find(arrr,4,0)<<"\n";
    cout<<findIndex(arrr,4,0)<<"\n";
    // cout<<findAllIndex(arrr,4,0)<<"\n";
    // cout<<findIndexfromlast(arrr,4,0)<<"\n";
    cout<<"**********";
    findAllIndex1(arrr,4,0,arn);

    for(auto it:arn){
        cout<<it<<"\n";
        arn.pop_back();

    }
    
    return 0;
}
