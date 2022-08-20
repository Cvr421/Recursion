#include<bits/stdc++.h>

using namespace std;
int maze_no_ways_count(int r ,int c){
    if(r==1|| c==1){
        return 1;
    }
    int left=maze_no_ways_count(r-1,c);
    int right=maze_no_ways_count(r,c-1);
    return left+right;
}
void path(string p,int r,int c){
    if(r==1 && c==1){
     cout<<p<<"\n";
    }
    if(r>1){
        path(p+'D',r-1,c);
    }
    if(c>1){
        path(p+'R',r,c-1);
    }

}
void path_diagonal(string p,int r,int c){
    if(r==1 && c==1){
     cout<<p<<"\n";
    }
    if(r>1 && c>1){
        path_diagonal(p+'D',r-1,c); 
    }
    if(r>1){
       path_diagonal(p+'v',r-1,c);
    }
    if(c>1){
    path_diagonal(p+'H',r,c-1);
    }

}


vector<string>arr_me_path(string p,int r,int c){
    
    if(r==1 && c==1){
      vector<string>arr;
      arr.push_back(p);
    
    }
   vector<string>arr;
    if(r>1){
         
        arr.emplace_back(arr_me_path(p+'D',r-1,c));
    }
    if(c>1){
       arr.emplace_back(arr_me_path(p+'R',r,c-1));
    }
   return arr;
}

int main(int argc, char const *argv[])
{
    /* code */
    // cout<<maze_no_ways_count(3,3);
    path_diagonal("",3,3);
//     vector<string>arrr;
    
//   arrr.emplace_back( arr_me_path("",3,3));
//    for (auto ir = arrr.rbegin(); ir != arrr.rend(); ++ir)
//         cout << *ir << " ";
    return 0;
} 
