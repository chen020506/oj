int n,m,i;
int u[6],v[6],w[6];
int first[5],next[5];
cin>>n>>m;
for(i=1;i<=n;i++)
    first[i]=-1;
for(i=1;i<=m;i++)
{
    cin>>u[i]>>v[i]>>w[i];
    next[i]=first[u[i]];
    first[u[i]]=i;
}
//邻接表的遍历
k=first[1];
while(k!=-1)
{
    cout<<u[k]<<v[k]<<w[k]<<endl;
    k=next[k];
}