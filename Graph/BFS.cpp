class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int v = adj.size();
        queue<int>q;
        q.push(0);
        vector<bool>visited(v,0);
        visited[0]=1;
        
        vector<int>ans;
        int temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(int j =0;j<adj[temp].size(); j++){
                if(!visited[adj[temp][j]]){
                    visited[adj[temp][j]] = 1;
                    q.push(adj[temp][j]);
                }
            }            
        }
        return ans;
    }
};