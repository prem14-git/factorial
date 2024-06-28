# include <bits/stdc++.h>
using namespace std;
int sumofN (int n)
{
	int sum=0;
	if (n>0){
		for (int i=1;i<=n;i++){
		sum+=i;
	}
	}
	else if (n<0) {
		for (int i=n;i<=1;i++){
			sum+=i;
		}
	}
	return sum;
}
int main ()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Sum of all numbers till "<<n<<" is "<<sumofN(n);
	return 0;
}
