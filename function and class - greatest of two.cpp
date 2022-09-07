#include<iostream>
using namespace std;
class abc
{
    public:
    int a,b;
    void input()
    {
        cout<<"Enter both the numbers: ";
        cin>>a>>b;
    }
    void compare()
    {
        if (a>b)
        {
            cout<<"A is largest among these";
        }
        else if (b==a)
        {
            cout<<"A and B is equal";
        }
        else
        {
            cout<<"B is largest among these.";
        }
        
    }
    void display()
    {
        compare();
    }
};
int main()
{
    abc var;
    var.input();
    var.display();
}