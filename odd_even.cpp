# include <bits/stdc++.h>
using namespace std;
string odd_or_even (int n)
{
	string s1="Even number";
	string s2="Odd number";
	if (n%2==0){
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
	cout<<odd_or_even(n);
	return 0;
}
