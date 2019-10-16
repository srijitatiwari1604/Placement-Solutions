#include<bits/stdc++.h>
using namespace std;
//arbitrary shopping
//Srijita Tiwari(IIT BHU)
int main(){
int n,k;
cin>>n;
int i,j,s=0,ans=0;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
cin>>k;
i=0,j=0;
while(i<n){
	s+=a[j];
	if(s>k){       //when sum exceeds the limit then set sum to 0 and shift the left pointer(i) to j
		s=0;
		j++;
		i=j;
	}
	else if(s==k){  // when sum equals the limit then calculate max length using i and j and set s=0;
		s=0; 
		ans=max(ans,j-i+1);
		i=j+1;
		j=i;
	}
	else     //keep moving right pointer(j) forward
	j++;
}
cout<<ans;
}
