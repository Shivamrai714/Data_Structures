// sliding window ( with all cahracates unique and no repeating char)


#include<bits/stdc++.h>
using namespace std;
int main()
{
 
// all unique character will be when  map size= window size then all characters will be distinct  

string s; cin>>s;
int i=0,j=0;

unordered_map<char,int>m;
int ans=0;
while(j<s.size())
{
   // calculations
  m[s[j]]++;

   if(m.size()<j-i+1)                  // map size== window size()
     {  
     	m[s[i]]--;
        if(m[s[i]]==0) { m.erase(s[i]); i++;}  

     j++;
     }
  else if(m.size()==j-i+1) 
  	{
  	 ans=max(ans,j-i+1); j++; 
  	}
	//  ( m.size()>j-i+1   )  not possible at all;
}
cout<<ans;







                    // practice sesssion with string breaking

   /*
 string s="aabacbebebe is very good "; 
 // cin>>s;

 stringstream ss(s);
 string word;
 while(ss >> word)
 { 
 	cout<<"\n";
 	cout<<word<<" --> "; 
 	for(int i=0;i<word.size();i++) cout<<word[i]<<" ";
 }


*/
	return 0;
}