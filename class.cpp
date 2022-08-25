#include<iostream>
using namespace std;
class abc
{
    public:
    int a,b,c;
    void input()
    {
        cout<<"Enter all three numbers: ";
        cin>>a>>b>>c;
    }
    void compare()
    {
        if (a>b)
        {
            greata();
        }
        else
        {
            greatb();
        }
        
    }
    void greata()
    {
        if (c>a)
        {
            greatc();
        }
        else
        {
            cout<<"A is greatest";
        }
    }
    void greatc()
    {
        cout<<"C is greatest";
    }
    void greatb()
    {
        if (c>b)
        {
            greatc();
        }
        else
        {
            cout<<"B is greatest"
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