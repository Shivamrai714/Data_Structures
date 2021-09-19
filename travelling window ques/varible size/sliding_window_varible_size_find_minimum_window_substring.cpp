
// FIND THE MINIMUM (window) LENGTH SUBSTRING CONTAINING THE all char of given str.

#include<bits/stdc++.h>
using namespace std;
int main()
{  int ans=INT_MAX;
string s,str; 
cin>>s;cin>>str;

int i=0,j=0;
unordered_map<char,int>m;
for(int  i=0;i<str.size();i++) 
     {
     	m[str[i]]++;
     }
// for(auto i:m) cout<<i.first<<" "<<i.second<<"\n";
int count=m.size();

 while(j<s.size())
 {    
 	if(m.find(s[j])!=m.end())
   {  
 	    m[s[j]]--;
          if(m[s[j]]==0) count--;

            if( count>0) j++;                  // ie seracing where both ele count is 0 or -ve
    }
  else j++;
//changed if
while(count==0)
  { 
	          ans=min(ans,j-i+1);      // error simply one more time runing at last
           
           if(m.find(s[i])!=m.end())
           {

                if(m[s[i]]<0)
                          {
                           	while(m[s[i]]<0) { m[s[i]]++; i++; }
                           } 
                else if(m[s[i]]==0) 
                            {               /*check agin  ans=min(ans,j-i+1);*/
                              m[s[i]]++; i++; j++; count++;
                             }
                 //j++;       
             }
               else {i++;  }
       
             // reset count $$ done in else if

  } 






 }


/*
 if(s.size<str.size) cout<<0;           condtions for programing question
 if(s.size()==str.size()==1) cout<<1; 
*/
cout<<ans-2;             // 2 VALUE -to get ans lets check 



	return 0;
}