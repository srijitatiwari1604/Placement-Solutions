#include<bits/stdc++.h>
using namespace std;
//scatter palindromes
//Srijita Tiwari(IIT BHU)
int main(){
	
    	int ans = 0,i,n,j,k;
    	string s;
		cin>>s;
    	n = s.length();
    	for(i=0;i<n;i++)
	    {
	    	int cnt[26]={0};
	    	for(j=i;j<n;j++)
	    	{
	    		cnt[s[j]-'a']++;
	    		int odd = 0;
	    		for(k=0;k<26;k++)
	    		{
	    			if(cnt[k]%2)odd++;
	    		}
	    		if((j-i+1)%2)
	    		{
	    			if(odd == 1)
	    			ans++;
	    		}
	    		else 
	    		{
	    			if(odd==0)
	    				ans++;
	    		}

	    	}
	    }
	    cout<<ans<<endl;
    



}
