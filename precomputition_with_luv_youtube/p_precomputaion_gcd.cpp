// to cal gcd form 1 to l-1 and from r+1 to n .

#include<bits/stdc++.h>
using namespace std;

// using precomputation to calculate... using two array to store forward gcd and backward gcd upto the point given.

// when this line is written in the online coding questions
// ********************    
//    Sum of N over all test cases will be less than or equal to 10^6  --> means u can ignore the complexity of the test cases.
// ******************* 


int main()
{

   int t; cin>>t;

while(t--)
{

int n,q; cin>>n>>q; 
int a[n+10];
for(int i=1;i<=n;i++) cin>>a[i];    // try to take 1 based array in pre computition

// precomputing the gcd in two aray forward and backward


int forward[n+10]; int backward[n+10];
forward[0]=backward[n+1]=0;                      // assigned to 0 because gcd with 0 is no itself

for(int i=1;i<=n;i++) { forward[i]=__gcd(forward[i-1],a[i]);}
	for(int i=n;i>=1;i--) { backward[i]=__gcd(backward[i+1],a[i]);}




while(q--)
{
	int l,r; cin>>l>>r;

cout<<"\n the gcd reuires is : "<<__gcd(forward[l-1],backward[r+1])<<endl;

}





}


	return 0;
}




















































/*
int main()
{

   int t; cin>>t;
   while(t--)
   {
  int n,q;
  cin>>n>>q;
  int a[n+10];
  for(int i=1;i<=n;i++) cin>>a[i];        // takes 1 based input array in precomputation

  while(q--)
  {
  	int l ,r;
  	cin>>l>>r;

  // 	__gcd(a,b);    // log n 
  int gc=0;
for(int i=1;i<=l-1;i++) 
               gc=__gcd(gc,a[i]);
 for(int i=r+1;i<=n;i++) 
            	gc=__gcd(gc,a[i]);

cout<<gc<<endl;

                              //O(T * ( N + Q* (N * logn))= O(T*N + T*N*Q) =O(n^3)

  }



   }



	return 0;


}*/