#include<bits/stdc++.h>
using namespace std;
void Bubblesort(int arr[],int r,int c ){
    if(r==0){
        return;
    }
    if(c<r){
        if(arr[c]>arr[c+1]){
            int  temp=arr[c];
            arr[c]=arr[c+1];
            arr[c+1]=temp;
        }
        Bubblesort(arr,r,c+1);
    }else{
        Bubblesort(arr,r-1,0);
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int n=7;
    int arr[n]={1,2,5,6,8,3,4};
    Bubblesort(arr,n,0);
    for(auto it:arr){
        cout<<arr[it];
    }
    return 0;
}
