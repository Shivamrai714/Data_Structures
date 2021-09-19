//P: sum of array elements form l top r using  prefix sum technique.
// better to take indices from 1 in prefix sum.

// complexity= O(N)+O(Q)= O(N)
#include<bits/stdc++.h>
using namespace std;


const int N= 1e5+10;
int a[N];
int pf[N];


int main()
{                      // need to include these basic lines  & build system as "competitivep" of code in your compilation of the code.
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif


// start

    int n;cin>>n;
    for( int i=1;i<=n;i++)
    {cin>>a[i];
pf[i]=pf[i-1]+a[i];               // as pf[0] is already 0 as declared in global array
    }
   
 //prefix sum array is:


 int q;cin>>q;
 
    while(q--)
    {
    	int l,r;
    	cin>>l>>r;

cout<<"\n Sum from the L to R are:"<<pf[r]-pf[l-1];

    }














	return 0 ;
}