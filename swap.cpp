#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<"value of a="<<a<<endl<<"value of b="<<b<<endl;

    b=(a*b)/(a=b);
    cout<<"after swapping"<<endl<<"value of a="<<a<<" "<<"value of b="<<b;

    return 0;
}