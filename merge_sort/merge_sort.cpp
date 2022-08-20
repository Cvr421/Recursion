#include<bits/stdc++.h>
using namespace std;

 vector<int>mergerPlace(vector<int>arr,int s,int m, int e){
  vector<int>mix(s-e);
    int i=s;
    int j=m;
    int k=0;
    while(i<m&& j<e){
        if(arr[i]<arr[j]){
            mix[k]=arr[i];
            i++;

        }else{
            mix[k]=arr[j];
            j++;
        }
        k++;
    }

    while(i<m){
        mix[k]=arr[i];
        j++;
        k++;
    }
    while(j<e){
        mix[k]=arr[j];
        j++;
        k++;
    }
    for(int l=0; l<mix.size();l++){
        arr[s+l]=mix[l];
    }
 }
 void merge_sort(vector<int>arr,int s, int e){
   if(e-s==1){
    return;
   }
   int mid=(s+e)/2;
   merge_sort(arr,s,mid);
   merge_sort(arr,mid,e);
 mergerPlace(arr,s,mid,e);
 }
int main(int argc, char const *argv[])
{
    /* code */
    vector<int>arr={5,4,3,2,1};
   merge_sort(arr,0,arr.size());
    return 0;
}
