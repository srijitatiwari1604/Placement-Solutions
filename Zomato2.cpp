#include <bits/stdc++.h>
using namespace std;
//decode string
//Srijita Tiwari(IIT BHU)
int main() {
	string s;
	cin>>s;
	stack<char>st;
	stack<int>st2;
	string ans="";
	int i,n=s.length();
	for(i=0;i<n;i++)
	{
		if(s[i]>='0' && s[i]<='9'){
			string s1="";
			while(s[i]>='0' && s[i]<='9')
			{
				s1+=s[i];
				i++;
			}
			i--;
			st2.push(stoi(s1));
		}
		else if(s[i]!=']'){
			st.push(s[i]);
		}
		else{
			string s1="",s2="";
			while(s[i]!='['){
				s1+=s[i];
				st.pop();
			}
			st.pop();
			int x=st2.top();
			for(int i=0;i<x;i++)
			s2+=s1;
			for(int j=s2.length();j>=0;j--)
            st.push(s2[j]);
		}
	}
	while(!st.empty()){
		ans+=st.top();
		st.pop();
	}
	cout<<ans;
}
