#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N];

void mergethem(int l,int r,int mid)
{

int l_sz=mid-l+1;
int r_sz=r-mid;

int left[l_sz+1];
int right[r_sz+1];

for (int i = 0; i < l_sz; ++i)
{
    left[i]=a[i+l];
}

for (int i = 0; i < r_sz; ++i)
{
    right[i]=a[i+mid+1];
}

 
left[l_sz] = right[r_sz] = INT_MAX;
int i=0,j=0;

for(int k=l;k<=r;++k)
{
	if(left[i]<=right[j]) a[k]=left[i++];
	else 
		a[k]=right[j++];
}

}


/////

void mergesort(int l,int r)
{
	if(l==r) return;

	int mid=(l+r)/2;

	mergesort(l,mid);
	mergesort(mid+1,r);

mergethem(l,r,mid);
}



int main()
{

int n;
cin>>n;
for(int i=0;i<n;i++) cin>>a[i];

	mergesort(0,n-1);

cout<<"\n the sort array US : "; 

for(int i=0;i<n;i++) 
cout<<"   "<<a[i];




}