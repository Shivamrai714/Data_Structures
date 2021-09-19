#include<bits/stdc++.h>
using namespace std;


// Optimised solution.
// removing the loop of O(n) for checking count and using prefix sum technique to get it in O(1) 
// making individual columns and storing count of each character and then taking prefix . and then output.

const int N=1e5+10;
int hash[N][26];                      // where N is space for given characters in string s.
                                      // 26 columns for seperate a to z character to store 

// what we will do we will parse through each character of string and increment the count at respect position (refer notes)

int main()
{
 
 int t; cin>>t;
 while(t--)
 {
 	int n,q; cin>>n>>q;
string s; cin>>s;



for(int i=0;i<n;i++)        								// parsing array characters
{                                 
	                                    				 // hash is made 1 based by add [i+1]
hash[i+1][s[i]-'a'];               						// hashing  eg "deccea"  so 'd' id 1 character it will update the 4 column will to 1 (hash is 1 based)
                                   				// next 'e' is 2 character ,it will update 5 column of second row to 1.
                                  					//.
                                  					//.
                                  				//.  in this way we are having count for each of the charachter of string .
}                                   

                                           //  now we are having 26 columns that are storing cnt of alphabet .
											// now take the prefix sum to get count of total each characters.
for(int i=0;i<26;i++)
{
  for(int j=1;j<=n;j++) 
  {   // prefix sum
  	hash[j][i]+=hash[j-1][i];

  }

}


// 
while(q--)
{
int l,r;
cin>>l>>r;
int oddcnt=0;

for(int i=0;i<26;i++) 
{
	int charcnt=hash[r][i]- hash[l-1][i];                  // where is 'i' is representing 
if( charcnt % 2 !=0) oddcnt++; 
}

if(oddcnt>1) cout<<"NO\n";
else cout<<"YES\n";
}

}
return 0;

 }























































/*
int main()
{

// use of hashing 
int t;cin>>t; 
while(t--)
{
 int n,q;
 cin>>n>>q;
string s;
cin>>s;

while(q--)
{
	int l,r; cin>>l>>r;
int hash[26];

for(int i=0;i<26;i++) hash[i]={0};

l--;r--;           // making them 0 based input as we have taken the 0 based array.

// use of hashing 
for(int i=l;i<=r;i++) {
	hash[s[i]-'a']++;
}

int oddcnt=0;
for(int i=0;i<26;i++) { if(hash[i]%2!=0)   oddcnt++; }

if(oddcnt >1) cout<<"NO PAllindrome\n";
else cout<<"Yes Pallindrome\n";

}

// O(t * (n + q(26 + n + 26)))      ~   O(t*q*n)= O(10 * 10^5 * 10^5)  X TLE

}
/*

                             TEST CASES 2
5 5
abcec
1 2
2 5
3 5
1 5
1 4 
5 5
aabbc
1 2
2 5
3 5
1 5
1 4
*/


	return 0;
}*/