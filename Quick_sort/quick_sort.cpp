#include<bits/stdc++.h>
using namespace std;
void sorttt(vector<int>nums,int low , int hi){
    // Quick_sort // best is (nlogn) arr will divid in n/2
    //            // worst is (n^2) arr will divid in n-1
    if(low>=hi){
        return;
    }
    int s= low;
    int e=hi;
    int m=s+(e-s)/2;
    int pivot=nums[m];
    while(s<=e){
        while(nums[s]<pivot){
            s++;
        }
        while(nums[e]>pivot){
            e--;
        }
         if(s<=e){ 
        int temp=nums[s];
        nums[s]=nums[e];
        nums[e]=temp;
        s++;
        e--;
    }
    }
   sorttt(nums,low,e);
   sorttt(nums,s,hi);
}
int main(int argc, char const *argv[])
{
    /* code */
    vector<int>arr={5,4,3,2,1};
    sorttt(arr,1,arr.size()-1);
    
    for (auto ir = arr.rbegin(); ir != arr.rend(); ++ir)
        cout << *ir << " ";
    return 0;
}
