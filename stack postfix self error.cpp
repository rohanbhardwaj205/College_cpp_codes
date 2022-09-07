#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	int a,b;
	char  c;
	cin>>t; 						//enter number of stack values.
	int num[t];
	stack <int> val;
	for(i=0; i<t; i++)
	{
		cin>>num[i];
	}
	for(i=0; i<t; i++)				//read stack values
	{
		c=num[i];
		if(c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='^')	
		{
			cout<<c;
			a= val.top();
			val.pop();
			b= val.top();
			val.pop();
			if(c=='+')
			{
				val.push(a+b);
			}
			if(c=='-')
			{
				val.push(a-b);
			}
			if(c=='*')
			{
				val.push(a*b);
			}
			if(c=='/')
			{
				val.push(a/b);
			}
		}
		else
		{
			cout<<"Push "<<c;
			val.push(c);
		}
	}

}