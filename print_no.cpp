#include<bits/stdc++.h>
using namespace std;
int print(int n){
    if(n==0){
        // cout<<n<<"\n";s
        return 0;
    }
   cout<<n<<"\n";     
    print(n-1);
}
// int printrev(int n){
//     if(n==0){
//         cout<<n<<"\n";
//         return 0;
//     }
//     cout<<n<<"\n";
//     printrev(n-1);
// }
// int fact(int n){
//     if (n==1){
//         return 1;
//     }
//     cout<<n*fact(n-1)<<"\n";
//     // fact(n*fact(n-1));
//   return  n*fact(n-1);
// }
int sum(int n){
    if (n==5){
        return 5;
    }
    // fact(n*fact(n-1));
  return  n+sum(n+1);
}

int digitsum(int n){

    if(n==0){
        return 0;
    }

   return (n%10)+digitsum(n/10);

}

// int digitmultiply(int n){

//     if(n%10==n){
//         return n;
//     }

//    return (n%10)*digitmultiply(n/10);

// }
int main(int argc, char const *argv[])
{

    /* code */
    // print(5);
   //cout<< fact(5);






// printrev(5);
  
//    cout<<fact(5)<<"\n";  
   cout<<sum(1)<<"\n";
  cout<<1%10<<"\n";
   cout<<digitsum(23)<<"\n";
//    cout<<digitmultiply(1234)<<"\n";

    return 0;
}
