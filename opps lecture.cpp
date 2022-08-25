#include<iostream>
using namespace std;
class maths
{
    int a,b,c;
    int operation;
    public:
    void input();
    void decision();
    void addition();
    void multiplication();
    void remainder();
    void subtraction();
    void quotient();

    
};
void maths::input()
    {
        cout<<"Enter both the numbers: ";
        cin>>a>>b;
    }
void maths::decision()
    {
        cout<<"Enter the operation you want to perform: "<<endl;
        cout<<"Press 1 for addition. \n Press 2 for subtraction. \n Press 3 for multiplication \n Press 4 for reaminder \n Press 5 for quotient";
        cin>>operation;
        switch(operation)
        {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication();break;
            case 4: remainder(); break;
            case 5: quotient(); break;
            default: cout<<"Input is wrong.";
        }
    }
    
void maths::addition()
    {
        c=a+b;
        cout<<"The added result is: "<<c;
    }
    void maths::subtraction()
    {
        c=a-b;
        cout<<"The subtracted result is: "<<c;
    }
    void maths::multiplication()
    {
        c=a*b;
        cout<<"The product is: "<<c;
    }
void maths::remainder()
    {
        c=a/b;
        cout<<"The added result is: "<<c;
    }
void maths::quotient()
    {
        
    }
int main()
{
    maths x;
    x.input();
    x.decision();
}