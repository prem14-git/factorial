# include <bits/stdc++.h>
using namespace std;
string leap_year(int n)
{
	if ((n%4==0 && n%100 !=0) || (n%400==0))
	{
		return "Leap year";
	}
	else {
		return "Not a leap year";
	}
}
int main ()
{
	int n;
	cout<<"Enter a year: ";
	cin>>n;
	cout<<n<<" is "<<leap_year(n);
	return 0;
}
