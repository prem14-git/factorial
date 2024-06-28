# include <bits/stdc++.h>
using namespace std;
float ftc (int n)
{
	float ans;
	ans=(n-32)*(5/9.0);
	return ans;
}
int main ()
{
	int n;
	cout<<"Enter the temperature in farenheit: ";
	cin>>n;
	cout<<n<<" degree farenheit in degree celcius is: "<<ftc(n);
	return 0;
}
