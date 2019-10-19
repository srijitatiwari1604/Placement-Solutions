#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p=0;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	stack<int>st;
	for(i=0;i<n;i++){
		if(!st.empty() && a[i]<=a[st.top()])
		{
				while(!st.empty() && a[i]<=a[st.top()]){
					p+=a[st.top()]-a[i];
				//	cout<<a[st.top()]-a[i]<<" ";
					st.pop();
				}
		}
		st.push(i);
	}
	vector<int>v;
	while(!st.empty()){
	    
		v.push_back(st.top());
		p+=a[st.top()];
		st.pop();
	}
	sort(v.begin(),v.end());
	cout<<p<<"\n";
	for(i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	return 0;
	
}
