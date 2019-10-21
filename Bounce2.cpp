#include<bits/stdc++.h>
using namespace std;
//max path dfs
//Srijita Tiwari(IIT BHU)
vector<int>adj[1001];
bool vis[1001];
int ans;
void dfs(int x,int l){
	vis[x]=true;
	ans=max(ans,l);
	for(int i=0;i<adj[x].size();i++){
		if(!vis[adj[x][i]])
		dfs(adj[x][i],l+1);
	
	}
}
int main(){
	int i,n;
	cin>>n;
	vector<int>v,k;
	int x;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	for(i=0;i<1001;i++)
	vis[i]=false;
	for(i=0;i<n;i++)
	{
		if(v[i]==-1)
		k.push_back(i);
		else
		adj[v[i]].push_back(i);
	}
	ans=0;
	for(i=0;i<k.size();i++){
	     
		dfs(k[i],1);
	}
	
	cout<<ans;
	return 0;
}
