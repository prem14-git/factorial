# include <bits/stdc++.h>
using namespace std;
int fact (int n)
{
	int ans=1;
	for (int i=1;i<=n;i++)
	{
		ans*=i;
	}
	return ans;
}
int main ()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The factorial of "<<n<<" is "<<fact(n);
	return 0;
}
