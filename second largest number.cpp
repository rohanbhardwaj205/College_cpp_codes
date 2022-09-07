#include<iostream>
using namespace std;
int funct(int n1, int n2, int n3)
{
	if(((n1>n2)&&(n1<n3))||((n1>n3)&&(n1<n2)))
	{
		return n1;
	}
	else if(((n2>n1)&&(n2<n3))||((n2>n3)&&(n2<n1)))
	{
		return n2;
	}
	else if(((n3>n2)&&(n3<n1))||((n3>n1)&&(n3<n2)))
	{
		return n3;
	}
}
int main()
{
	int n,i;
	cin>>n;
	int a[n],b[n],c[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
	}
	for(i=0; i<n; i++)
	{
		cout<<funct(a[i], b[i], c[i])<<endl;
	}
}				