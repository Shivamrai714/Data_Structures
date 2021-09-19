// STRING STREAM CLASS IS USED TO BREAK STRING INTO SMALL WORDS

#include<bits/stdc++.h>
using namespace std;



 void print_frequencies(const string &str)
{
unordered_map<string,int>m;

stringstream ss(str);
string word;                         // TO STORE INDIVIDUAL WORDS
vector<string>v;                      
while(ss >> word )
{ 
 v.push_back(word);

	m[word]++;                                    // TO STORE THE COUNT OF INDIVIDUAL WORDS
}
cout<<"\n the given string is :";
for(auto i:v) cout<<i<<" --> ";
cout<<"\n\n the print_frequencies : \n\n";
for(auto i:m) {cout<<i.first<<"  "<<i.second; cout<<endl; }


}

int main()
{


string s="hi this fine  hi are u fine";

print_frequencies(s);

return 0;

}