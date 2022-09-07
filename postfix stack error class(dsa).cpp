#include<iostream>
#include<stack>
using namespace std;
int postfix_eval(string exp)
{
    stack <int> stack;
    for(int i=0; i<exp.length(); i++)
    {
        if(exp[i]='0' && exp[i]<='0')
        {
            stack.push(exp[i]-'0');
        }

        else
        {
            int x= stack.top();
            stack.pop();
            int y = stack.top();
            stack.pop();
            if(exp[i]=='+')
            {
                stack.push(x+y);
            }
            else if(exp[i]=='-')
            {
                stack.push(x-y);
            }
            else if(exp[i]=='*')
            {
                stack.push(x*y);
            }
            else if(exp[i]=='/')
            {
                stack.push(x*y);
            }
            return stack.top();

        }
    }

}
int main()
{
    char exp[20];
    char*e;
    cout<<"/n enter postfix expression: ";
    cin>>exp;
    e=exp;
    cout<<postfix_eval(e);
    return 0;
}