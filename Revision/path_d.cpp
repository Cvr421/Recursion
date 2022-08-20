#include<bits/stdc++.h>
using namespace std;

void path_diagonal(string p,int r,int c){
    if(r==1 && c==1){
     cout<<p<<"\n";
    }
    if(r>1 && c>1){
         path_diagonal(p+'D',r-1,c-1); 
    }
    if(r>1){
          path_diagonal(p+'v',r-1,c);
    }
    if(c>1){
           path_diagonal(p+'H',r,c-1);
    }

}
void Maze_With_restriction(string p,vector<vector<bool>>Maze,int r,int c){
    if(r==Maze.size()-1 && c==Maze[0].size()-1){
     cout<<p<<"\n";
    }
    if(!Maze[r][c]){//this is the condition for obsticle for in maze same as(Maze==false return)
        return;
    }
    if(r<Maze.size()-1){
       Maze_With_restriction(p+'D',Maze,r+1,c);
    }
    if(c<Maze[0].size()-1){
        Maze_With_restriction(p+'R',Maze,r,c+1);
    }

}
int main(int argc, char const *argv[])
{
    /* code */
    //  path_diagonal("",3,3);
     vector<vector<bool>>maze={
       {true,true,true},
       {true,false,true},
       {true,true,true},
      
     };
     Maze_With_restriction("",maze,0,0);

    return 0;
}