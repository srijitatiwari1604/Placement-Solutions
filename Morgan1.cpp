#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>ans;
	int a[n],b[m],i,j;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	int f[100001]={0};
	int f1[100001]={0};
	for(i=0;i<n;i++)
	f[a[i]]++;
	for(i=0;i<m;i++)
	f1[b[i]]++;
    for(i=0;i<n;i++){
    	if(f1[a[i]]==0)
    	ans.push_back(a[i]);
   	}
	   for(i=0;i<m;i++){
    	if(f[b[i]]==0)
    	ans.push_back(b[i]);
   	}	
	
	for(i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
}
