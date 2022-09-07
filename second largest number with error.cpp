#include<iostream>
using namespace std;
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
		if((a[i]>b[i])&&(a[i]<c[i]))
		{
			cout<<a<<endl;
		}
		else if((a[i]>c[i])&&(a[i]<b[i]))
		{
			cout<<a<<endl;
		}
		else if((b[i]>a[i])&&(b[i]<c[i]))
		{
			cout<<a<<endl;
		}
		else if((b[i]>c[i])&&(b[i]<a[i]))
		{
			cout<<a<<endl;
		}
		else if((c[i]>b[i])&&(c[i]<a[i]))
		{
			cout<<a<<endl;
		}
		else if((c[i]>a[i])&&(c[i]<b[i]))
		{
			cout<<a<<endl;
		}
	}
	      
}				