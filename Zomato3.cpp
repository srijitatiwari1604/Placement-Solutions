#include <bits/stdc++.h>
using namespace std;
//h-index of researcher
//Srijita Tiwari(IIT BHU)
int main() {
	int n;
	cin>>n;
	int a[n],i,ans;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(a[i]>=(n-i)){
		ans=n-i;
		break;
		}
	}
	cout<<ans;
	// your code goes here
	return 0;
}
