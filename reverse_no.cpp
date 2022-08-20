#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int helper (int n,int digits){
    if(n%10==n){
        return n;
    }
    int rem=n%10;
    return rem*pow(10,digits-1)+helper(n/10,digits-1);
}
int sum=0;
// void reverse_no1(int n){
//     if(n==0){
//         return;
//     }
//     int rem=n%10;
//     sum=sum*10+rem;
//     reverse_no1(n/10);
// }
// int reverse_no(int n){
// //    int digits= math(pow(n))+1;
//    return helper(n,digits);
// }
int main(int argc, char const *argv[])
{
    /* code */
    //sometimes you might need some additional variable  in the argument 
    // int that case,make another function or helper funtion
    // reverse_no(1234);
    cout<<sum<<"\n";
    return 0;
}
