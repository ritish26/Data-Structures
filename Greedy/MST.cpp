int min_fun(int dist[],int visited[],int V)
{
    int result=INT_MAX,index;
    for(int i=0;i<V;i++)
    {
        if(!visited[i] && result>dist[i])
        {
            result=dist[i];
            index=i;
        }
    }
    return index;
}
int spanningTree(int V, int E, vector<vector<int>> &graph) {
    // code here
    int dist[V];
    int visited[V];
    for(int i=0;i<V;i++)
    {
        dist[i]=INT_MAX;
        visited[i]=0;
    }
    dist[0]=0;
    for(int i=0;i<V-1;i++)
    {
       int u=min_fun(dist,visited,V);
       visited[u]=1;
       for(int v=0;v<V;v++)
       {
           if(!visited[v] && graph[u][v] && dist[u]!=INT_MAX
           && graph[u][v]<dist[v])
           dist[v]=graph[u][v];
       }
    }
    int ans=0;
    for(int i=0;i<V;i++)
    {
        if(dist[i]!=INT_MAX)
             ans+=dist[i];
    }
    return ans;
}