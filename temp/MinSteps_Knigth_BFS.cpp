#include<iostream>
#include<vector>
#include<climits>
#include<queue>

using namespace std;

struct Node{
    int x, y,val;
    Node(int _x,int _y,int _val){
        x=_x;
        y=_y;
       val=_val;
    }

};

bool isValid(struct Node &node,int n,vector<vector<int>>&vis){
    if(node.x<1 || node.y<1)return false;
    if(node.x>n || node.y>n)return false;
    if(vis[node.x][node.y])return false;
    return true;
}

int minCost(int x,int y,int tx,int ty,vector<vector<int>>&vis,int n,int &ans,vector<int> &dx,vector<int> &dy){

    queue<Node> q;
    Node nn(x,y,0);
    vis[x][y]=1;
    q.push(nn);

    while(!q.empty()){
        Node node=q.front();
        q.pop();
          
          vis[node.x][node.y]=1;
        if(node.x==tx &&node.y==ty)
           return node.val;

        for(int i=0;i<7;i++){
            Node nd(node.x+dx[i],node.y+dy[i],node.val++);
            if(isValid(nd,n,vis)){ 
              vis[nd.x][nd.y]=1;
               q.push(nd);
            }
        }   
         
    }

    return  ans;  
}

int main(){
    int n=30;
   
    vector<vector<int>> vis(n+1,vector<int>(n+1,0));

   int xi=1,yi=1,xf=30,yf=30;
   vector<int> dx={2,-2,-1,-2,1,1,-1};
    vector<int> dy={-1,-1,2,1,2,-2,2};

    int ans=INT_MAX;
 cout<<minCost(xi,yi,xf,yf,vis,n,ans,dx,dy)<<endl;

   

}