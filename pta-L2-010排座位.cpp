// 时间：2022.04.18 23点34分
//第一种方法：dfs
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn=110;
 
int n,m,k,mp[maxn][maxn],vis[maxn];
 
bool dfs(int a,int b){
	vis[a]=1;
	for(int i=1;i<=n;i++){
		if(!vis[i]&&mp[a][i]==1){
			if(i==b) return true;
			return dfs(i,b);
		}
	}
	return false;
}
 
int judge(int a,int b){
	if(mp[a][b]==1) return 1;
	else if(mp[a][b]==0){
		if(dfs(a,b)) return 1;
		else return 2;
 	}else if(mp[a][b]==-1){
		if(dfs(a,b)) return 3;
		else return 4;
 	}
}
 
int main(){
	scanf("%d%d%d",&n,&m,&k);
	int u,v,w;
	for(int i=0;i<m;i++){
		scanf("%d%d%d",&u,&v,&w);
		mp[u][v]=mp[v][u]=w;
	}
	while(k--){
		memset(vis,0,sizeof(vis));
		scanf("%d%d",&u,&v);
		int res=judge(u,v);
		if(res==1) printf("No problem\n");
		else if(res==2) printf("OK\n");
		else if(res==3) printf("OK but...\n");
		else printf("No way\n");
	}
	return 0;
}
//第二种：并查集
// #include<bits/stdc++.h>
// using namespace std;
// const int maxn = 105;
// int m, n, k;
// int r[maxn][maxn];  //关系矩阵   1 为朋友  -1 为敌人   
// int f[maxn];  //并查集 
 
// int find(int v)  //找爹函数
// {
// 	if(f[v] == v)
// 	return v;
// 	else{
// 		f[v] = find(f[v]);  //找爹  顺带递归压缩路径
// 		return f[v]; 
// 	}
// } 
 
// int main()
// {	
// 	cin >> n >> m >> k;   //n为宾客  m为信息数量  k为查询数量
 
// 	for(int i = 1;i <= n;i ++)  //初始化 
// 	f[i] = i;
	
// 	for(int i = 1;i <= m;i ++)
// 	{
// 		int t1,t2,t3;
// 		cin >> t1 >> t2 >> t3;
// 		r[t1][t2] = r[t2][t1] = t3;
// 		if(t3 == -1)
// 		continue ;
// 		//下面进行并查集的合并
// 		int fx = find(t1);
// 		int fy = find(t2);
// 		if(fx != fy)
// 		{
// 			f[fx] = fy;
// 		} 
// 	}
	
		
// 	int tmp = k;
	
// 	while(tmp --)
// 	{
// 		int x,y;
// 		cin >> x >> y;
// 		if(find(x) == find(y) && r[x][y] != -1)   //如果是朋友并且没有敌对关系 
// 		printf("No problem\n");
// 		else if(find(x) == find(y) && r[x][y] == -1)  //如果是朋友 但是有敌对关系 
// 		printf("OK but...\n"); 
// 		else if(find(x) != find(y) && r[x][y] != -1)  //如果不是朋友  但是没有敌对 
// 		printf("OK\n");
// 		else if(find(x) != find(y) && r[x][y] == -1)  //如果不是朋友  并且是敌对 
// 		printf("No way\n"); 
// 	}
// 	return 0;	
// } 
