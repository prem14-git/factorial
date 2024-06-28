# include <bits/stdc++.h>
using namespace std;
string primeN (int n)
{
	string s1="a Prime number";
	string s2="Not a Prime number";
	int counter=0;
	for (int i=2;i<=n;i++){
		if (n%i==0){
			counter++;
		}
		else {
			
		}
	}
	if (counter==1){
		return s1;
	}
	else {
		return s2;
	}
}
int main ()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<n<<" is "<<primeN(n);
	return 0;
}
