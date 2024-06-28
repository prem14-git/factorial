# include <bits/stdc++.h>
using namespace std;
void triplet (int n1, int n2, int n3){
	if (pow(n1,2)==pow(n2,2)+pow(n3,2) || pow(n2,2)==pow(n1,2)+pow(n3,2) || pow(n3,2)==pow(n2,2)+pow(n1,2)){
		cout<<"The entered numbers "<<n1<<" "<<n2<<" "<<n3<<" are paythagorian triplet !!";
	}
	else {
		cout<<"The entered numbers "<<n1<<" "<<n2<<" "<<n3<<" are not paythagorian triplet !!";	
	}
	
}
int main (){
	int n1,n2,n3;
	cout<<"Enter any three number: "<<endl;
	cin>>n1>>n2>>n3;
	triplet(n1,n2,n3);
}
