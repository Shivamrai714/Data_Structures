// prefix sum array for the 2 D array


#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int ar[N][N];
long long pf[N][N];







int main()
{                      // need to include these basic lines  & build system as "competitivep" of code in your compilation of the code.

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

int n; cin>>n;

for(int i=1;i<=n;i++) {
	for(int j=1;j<=n;j++)
	{ cin>>ar[i][j];
		pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
	}
}

int q;
cin>>q;
while(q--)
{
   int a,b,c,d; cin>>a>>b>>c>>d;
 // direct statement replacing the sum from prefix globally declared array .
   // repesenting the sum from top left corner to bottom right corner.
   
cout<<"\n "<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
 


}










	return 0 ;
}