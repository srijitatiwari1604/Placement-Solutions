#include<bits/stdc++.h>
using namespace std;
//graph(dijkstra via x and y)
//Srijita Tiwari(IIT BHU)
vector<pair<int,int> >adj[10001];
int n,m;
int dijkstra(int s,int e){
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >pq;
	pq.push({0,s});
	vector<int>dist(n+1,INT_MAX);
	dist[s]=0;
	int i;
	while(!pq.empty()){
		pair<int,int>p=pq.top();
		pq.pop();
		int b=p.second;
		for(i=0;i<adj[b].size();i++){
			if(dist[adj[b][i].first]>dist[b]+adj[b][i].second)
			{
				dist[adj[b][i].first]=dist[b]+adj[b][i].second;
				pq.push({dist[adj[b][i].first],adj[b][i].first});
			}
		}
	}
	return dist[e];
}
int main(){
	int x,y,a,b,c;
	cin>>n>>m;
	int i;
	for(i=0;i<m;i++)
	{
		cin>>a>>b>>c;
		adj[a].push_back({b,c});
		adj[b].push_back({a,c});
	}
	cin>>x>>y;
	int ans=dijkstra(1,x)+dijkstra(x,y)+dijkstra(y,n);
	cout<<ans;
	
	
}
