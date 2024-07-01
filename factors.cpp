# include <bits/stdc++.h>
using namespace std;
int factors (int n){
	int count=0;
	for (int i=1;i<=n ; i++){
		if (n%i==0){
			count++;
		}
	}
	return count;
}
int main ()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"There are total "<<factors (n)<<" of "<<n;
	return 0;
}
