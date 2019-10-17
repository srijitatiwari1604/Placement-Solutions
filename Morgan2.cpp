#include<bits/stdc++.h>
using namespace std;
//dependency(topological sort)
//Srijita Tiwari(IIT BHU)
int main(){
	int m,x,y,courses,i,j;
	cin>>m;
	vector<int>adj[10001],ans;
	for(i=0;i<m;i++){
		cin>>x>>y;
		adj[y].push_back(x);
	}
	cin>>courses;
	int n=courses;
	vector<int>indeg(n,0);
	for(i=0;i<n;i++){       //calculate indegree of all vertices
		for(j=0;j<adj[i].size();j++)
		indeg[adj[i][j]]++;
	}
	queue<int>q;
	int cycle=0;
	for(i=0;i<n;i++){      //only push those in queue which have indegree as 0
		if(indeg[i]==0)
		q.push(i);
	}
	while(!q.empty()){
		int u=q.front();
		ans.push_back(u); // push those in our answer which have indeg as 0
		q.pop();
		for(i=0;i<adj[u].size();i++){
			indeg[adj[u][i]]--;
			if(indeg[adj[u][i]]==0)
			q.push(adj[u][i]);
		}
		cycle++;
	}
	if(cycle != n)
	cout<<"NOT POSSIBLE";
	else
	{
		for(i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	}
}
