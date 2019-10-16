#include<bits/stdc++.h>
using namespace std;
//coloring the blocks
//Srijita Tiwari(IIT BHU)
int main(){
	int n;
	cin>>n;
	int a[n][3],i,j;
	int dp[n][3];
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++){
		
		cin>>a[i][j];
		dp[i][j]=a[i][j];
     	}
	}


	for(i=1;i<n;i++){
		dp[i][0]+=min(dp[i-1][1],dp[i-1][2]);
		dp[i][1]+=min(dp[i-1][0],dp[i-1][2]);
		dp[i][2]+=min(dp[i-1][1],dp[i-1][0]);
	}
	cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]));
}
