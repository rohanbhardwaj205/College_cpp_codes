#include<iostream>
using namespace std;
int a,b,c;
class outer
{
    public:
    void input();
    void calculate();
    void result();

};
void outer::input()
{
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Enter number: ";
    cin>>b;
}
void outer::calculate()
{
    c=a+b;
    cout<<"The result is: "<<c; 
}
void outer::result()
{
    calculate();
}
int main()
{
    outer obj;
    obj.input();
    obj.result();
}