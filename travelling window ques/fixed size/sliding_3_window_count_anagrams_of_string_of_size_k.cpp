                                 // sliding_window_2
// count occurences of anagrams of given str2  in given string s   

/*Q.Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.

*/
                                    // working self code
#include<bits/stdc++.h>
using namespace std;
int main()
{

string s,str;
cin>>s;
cin>>str;

vector<int>hsh1(26);
vector<int>hsh2(26);

for(int i=0;i<str.size();i++) hsh2[str[i]-'a']++;           // to store count of given char in str (small);  then can compare with each sliding window


	// for(auto i:hsh2) cout<<" "<<i;

int cnt=0;
int i=0,j=0;
int k=str.size();

while(j<s.size())
{
    hsh1[s[j]-'a']++; 
  
  if(j-i+1<k)
    j++;                          // 1.it is used only single time to gain window size  
  
  else if(j-i+1==k)
  {
  	if(hsh1==hsh2) cnt++;              // comp two vectors after update
 
  // slide window
	hsh1[s[i]-'a']--;    
  	i++;j++;                      // 2. next updating values are handled from here no need of(1) cond
 
  }

}
//cout<<endl;
cout<<cnt;
//cout<<endl<<endl;
//for(auto i:hsh1) cout<<" "<<i;



return 0;
}



//----------------------------------------------------------------------------------------------------------
// self writtteen code using maps
/*
#include<bits/stdc++.h>
using namespace std; 

int solve_anagrams(string s,string str)
{

unordered_map<char,int>m;
int k=str.size();               // lenght of window to check anagrams
int ans=0;
for(auto i:str) m[i]++;            // storing cnt of char in maps

for(auto i:m)
{
	cout<<i.first<<" "<<i.second<<endl;  
}
cout<<endl;



int cnt=m.size();
int i=0,j=0;
while(j<s.size())
{        
  if(m[s[j]]==1) cnt--;
     m[s[j]]--;
           
      if(j-i+1<k) j++;

else if(j-i+1==k)
{    
	if(cnt==0) ans++;
// slide window and remove calculations of a[i]
if(m[s[i]]==0) cnt++;
m[s[i]]++;
i++; j++;
}


}
return ans;

                       // rough practice of maps
/*
m.insert({'a',12});
m.insert({'b',2});
m.insert({'v',52});
m.insert({'c',1});


char key='v';

if(m.find(key)!=m.end()) cout<<"found   "<<key<<endl ;
else cout<<"key "<<key<<"not found   \n"; 

// cout<<m.size();


/*
// or for printing use 
 unordered_map<char,int>:: iterator it;
 for(it=m.begin();it!=m.end();it++) 
 	cout<<it->first<<"  "<<it->second<<endl;


for(auto i:m)
{
	cout<<i.first<<" "<<i.second<<endl;  
}///
}

int main()
{
 string s;cin>>s;
 string str; cin>>str;

 int ans;
 ans=solve_anagrams(s,str);


 cout<<ans;



return 0;

}

*/
//------------------------------------------------------------------------


/*//copied to understand from youtube  using from maps only

#include<bits/stdc++.h>
using namespace std;

// Generate a map of all character occurances of the 2nd string, i.e char and its count.
// The window size becomes the length of 2nd string, as the anangrams wil also be of this length, amd another variable count denotes the distinct characters left in a sliding window.
// In a window if the current character is present in map, then decrease its count, and if the count becomes 0, decrease the 'count' variable.
// If the window size is lesser than k just move forward the window
// When the window is hit ->
// If the count is 0, it means all the characters needed for its anagram is here in it, therefore increase your answer
// To remove the last part (arr[i] part) so that the window can be shifted ->
// If the s[i] is present in map then increase its count and if it changes from 0->1 then increase the 'count' variable

int solve(string s, string ana){

    unordered_map<char, int> m;
    for(auto it : ana) m[it]++;

    int k=ana.length();     // length of substring
    int count=m.size();    //distinc char in map
    
    int i=0, j=0;
    int ans=0;
    
    while(j<s.length()){
    
        if(m.find(s[j])!=m.end()){
            m[s[j]]--;
            if(m[s[j]]==0) count--;
        }
        
        if((j-i+1)<k) j++;
        
        else if((j-i+1)==k){

            if(count==0) ans++;

            if(m.find(s[i])!=m.end()){
                m[s[i]]++;
                if(m[s[i]]==1) count++;
            }

            i++;
            j++;
        }
    }
    return ans;
}

// TC : O(n)
// SC : O(distinctChars(ana))


int main(){

    // Given a string, and another string, find count of occurances of all anagrams of 2nd one in 1st one.

    // Input : "forxxorfxdofr", "for"
    // Output : 3
    // Explanation : Anagrams of the word for - for, orf, ofr appear in the text and hence the count is 3.

    string s = "forxxorfxdofr";
    string ana = "for";

    int ans = solve(s, ana);
    cout<<ans; 

    return 0;
}











*/











































































