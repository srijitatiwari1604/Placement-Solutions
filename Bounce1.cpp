#include<bits/stdc++.h>
using namespace std;
//min sum markings
//Srijita Tiwari(IIT BHU)
int main(){
	int n,m,a1,b1;
	cin>>n>>m;
	vector<int>a;
	int x,i,j;
	for(i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
	vector<vector<int> > v;
	map<int,vector<int> >mp;
	for(i=0;i<m;i++){
		vector<int>w;
		cin>>a1>>b1;
		w.push_back(a1);
		w.push_back(b1);
		mp[a1].push_back(b1);
		v.push_back(w);
	}
	sort(a.begin(),a.end());
     int ans=INT_MAX,value=-1,k;
     	map<int,vector<int> >::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
	vector<int>b=it->second;
		i=0,j=0;
			int d=0;

	while(i<n){
		if(a[i]-b[j+1]>=0 && (a[i]-b[j]>a[i]-b[j+1]))
		j++;
		else
		{
			d+=a[i]-b[j];
			i++;
		}
	}
	if(ans>d)
	{
		ans=d;
		value=it->first;
	}
}
cout<<value;
	
}
