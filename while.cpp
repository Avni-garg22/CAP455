//WAP to print numbers till n

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,n;
//     cout<<"enter a number";
//     cin>>n;
    
//     a=0;
//     while(a<=n)
//   {
//     cout<<a<<endl;
//     a++;
//    }
//    return 0;
//    }


// wap to print sum of numbers

#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout<<"enter a number";
    cin>>a;
     
     int sum=0;
     n=1;
    
     while(n<=a)
     {
        sum=sum+n;
        cout<<sum;
        n++;
        if(n==a)
        {
            break;
        }
        cout<<"+";
     }
cout<<sum;
return 0;
}
