#include<bits/stdc++.h>
using namespace std;
//first positive missing number
//Srijita Tiwari(IIT BHU)
int main(){
	int x,i;
	vector<int>v,v1;
	int mp[100001];
	while(cin>>x){
	v.push_back(x);
	}
     
	int n=v.size();
	for(i=0;i<n;i++){
		if(v[i]>0)
		v1.push_back(v[i]);
	}
	for(i=0;i<100001;i++)
	mp[i]=0;
	for(i=0;i<v1.size();i++){
		mp[v1[i]]=1;
	}
	for(i=1;i<100001;i++){
		if(mp[i]==0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
