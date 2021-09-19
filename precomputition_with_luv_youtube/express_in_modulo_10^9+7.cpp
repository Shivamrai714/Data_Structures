 
#include<bits/stdc++.h>
using namespace std;
const  long long int M=1e9+7;          //(max range ll is 10^18)
int main()
{
int num;
cin>>num;
unsigned long long  fact=1;
for(int i=2;i<=num;++i)
{ 
	fact= (fact*i) % M;           // by using prop of * to tak efull mod means take mod in individual steps 

} 
cout<<"The fact of "<<num<<" is "<<fact;





//formulas of modulu
	/// 1 (a+b)%m = (a%m + b%m ) % m 
	/// 2 (a*b)%m = (a%m * b%m ) % m 
	/// 3 (a-b)%m = (a%m - b%m + m) % m 
	/// 4 (a/b)%m = (a%m *(b^-1) %m ) % m 



	return 0;
}