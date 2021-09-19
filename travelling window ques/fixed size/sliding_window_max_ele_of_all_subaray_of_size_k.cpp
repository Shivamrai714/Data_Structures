                                              //  4. Sliding window : interview bit Ques 
/*
 find the max elem of all sub-array(continous) of size k and return then in vector

Input 1:
    A = [1, 3, -1, -3, 5, 3, 6, 7]
    B = 3  (k)
Output 1:                 [1,3,-1]= 3 etc 
    C = [3, 3, 5, 5, 6, 7]*/


#include<bits/stdc++.h>
using namespace std; 

int main()
{

  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
int k ; cin>>k;
// find the max ele of each subarraay pof size (k)

// without function try
int i=0,j=0;
deque<int>l;
vector<int> v;


while(j<n)
{
   //calcutaions
   while(l.size()>0 and l.back()<a[j])
   {
   	l.pop_back();
   }
     l.push_back(a[j]);

if(j-i+1<k)
	j++;

else if(j-i+1==k)
{
	// ans from calculation
    // max ele we are putting in front() 
v.push_back(l.front());

    // slide the window 
if(l.front()==a[i]) l.pop_front();

i++;
}

}
// print
/*for(auto i:v){cout<<i<<"  ";}
*/
cout<<endl;
vector<int>:: iterator it;
for(it=v.begin();it!=v.end();it++) cout<<" "<<*it;

	return 0;
}