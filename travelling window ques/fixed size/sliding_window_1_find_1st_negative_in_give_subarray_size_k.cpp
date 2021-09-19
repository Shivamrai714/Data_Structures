// 1.sliding window to find the first -ve no in subarray(always continous) of size k;  

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n; 
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
		int k;cin>>k;

vector<int> v;
int i=0,j=0;
list<int>l;         // to store 1 -ve no

while(j<n)
{     
	if(a[j]<0) l.push_back(a[j]);
	if(j-i+1<k) j++;

	else if(j-i+1==k) 
	{     v.push_back(l.front());          // front ele in list contain 1 ve for each subarray of size k
          
if(a[i]==l.front()) l.pop_front();
          i++;j++;                                 // // mistake-> if not updateinng j then overwritng is done at a[j]=a[2]

	}
}

for(auto i:v) cout<<i<<" ";


	return 0;

}