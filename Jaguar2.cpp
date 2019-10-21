#include<bits/stdc++.h>
using namespace std;
//m coloring problem
//Srijita Tiwari(IIT BHU)
int graph[1001][1001];
int n,m;
bool safe(int color[],int v,int c){
	int i;
	for(i=1;i<=n;i++){
		if(graph[v][i] && color[i]==c)
		return false;
	}
	return true;
}
bool check(int color[],int v){
	if(v==n+1)
	return true;
	int i,c;

	for(c=1;c<=m;c++){
		if(safe(color,v,c)){
		color[v]=c;
		if(check(color,v+1))
		return true;
       	
       	color[v]=0;
      }
	}
	return false;
}
int main(){
	int e,x,y,i,j;
	
	for(i=0;i<1001;i++){
		for(j=0;j<1001;j++)
		graph[i][j]=0;
	}
	cin>>n>>m>>e;
	int color[n+1];
	while(e--){
		cin>>x>>y;
		graph[x][y]=1;
		graph[y][x]=1;
	}
	for(i=1;i<=n;i++)
	color[i]=0;
	if(check(color,1)==true)
	cout<<1;
	else
	cout<<0;
	return 0;
}
