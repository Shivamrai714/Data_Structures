//  varible_size_slide the window question ,  given coditions (eg sum =k)  then output maximium size window 







#include<bits/stdc++.h>
using namespace std ;

 int main()
{
  int n; cin>>n;
   int a[n];                              // 4 1 1 1 2 3 5 
  for(int i=0;i<n;i++) cin>>a[i];
 int k;  cin>>k;     								// k=5 sum required 

int i=0,j=0;
int sum=0; int ans=INT_MIN;
while(j<sizeof(a)/sizeof(a[0]))
{    
	// calculations 
 sum=sum+a[j];
   if(sum<k) {                // untill sum is reached window is expanded.
         j++;
     }
  if(sum==k){
ans=max(ans,j-i+1);                              // j-i+1 -> window size which is given sum k
  	j++;
  }
  if(sum>k)
  {
  	while(sum>k){ sum=sum-a[i]; i++;}
  	j++;
  }

}
cout<<ans;




 	return 0;
 }