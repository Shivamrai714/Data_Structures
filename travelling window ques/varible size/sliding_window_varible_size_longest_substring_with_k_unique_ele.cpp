// varible size array -find maxim size size subarrray with k unique characters


#include<bits/stdc++.h>
using namespace std;
int  main()
{

  string s;
  cin>>s; 
  int n=s.length();
  int k; 
  cin>>k;                   // count of unique ele

  int i=0,j=0;
  int ans=INT_MIN;
  int cnt;
unordered_map<char,int>m;

  while(j<n)
  {
     m[s[j]]++; 
      // cnt=m.size();    // not using cnt we need to regularly check size while removing a[i] in last loop            // size gives the unique elemt stored
   // calculations
       
        if(m.size()<k) j++;
       else if(m.size()==k) {ans=max(ans,j-i+1);               // put len of window of k unique char
                        j++;
                          }
       else if(m.size()>k) 
       {
         	   while(m.size()>k)
        	   {
        	   	    m[s[i]]--;             // decre freq of removing char
                if(m[s[i]]==0) m.erase(s[i]);            // remove that char from map
                  i++;
        	   }
         j++;
       }
  }

cout<<ans;
	return 0;
}