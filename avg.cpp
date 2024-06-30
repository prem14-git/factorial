# include <bits/stdc++.h>
using namespace std;
float avgn (int n)
{
	float sum=0;
	if (n>0){
		for (int i=1;i<=n;i++){
		sum+=i;
	}
	return sum/n;
	}
	else if (n<0) {
		for (int i=n;i<=1;i++){
			sum+=i;
		}
		return sum/(-n);
	}
}
int main ()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Average of all numbers till "<<n<<" is "<<avgn(n);
	return 0;
}
