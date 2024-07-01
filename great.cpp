# include <bits/stdc++.h>
using namespace std;
int great (int a, int b , int c){
	if (a>b && a>c){
		return a;
	}
	else if (b>a && b>c){
		return b;
	}
	else {
		return c;
	}
}
int main ()
{
	int a,b,c;
	cout<<"Enter the numbers: ";
	cin>>a>>b>>c;
	cout<<"The greater number is: "<<great(a,b,c);
	return 0;
}
