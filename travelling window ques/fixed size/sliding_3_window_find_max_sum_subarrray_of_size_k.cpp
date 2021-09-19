#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n ;cin>>n;
 int a[n];

 for(int i=0;i<n;i++) cin>>a[i];
int k;cin>>k;             // window size
int sum=0;
int maxi=INT_MIN;
int i=0,j=0;
while(j<n)
{   
	      //1. caluculations
    
     sum+=a[j];
   if(j-i+1<k) j++;

   else if(j-i+1==k)
   {     
   	     maxi=max(maxi,sum);
         //2. ans form cal

       sum-=a[i];
      //3.slide window and remove cal of a[i]
    	i++; j++;
   

   }

}
cout<<maxi;

	return 0;
}