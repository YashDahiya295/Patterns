#include<iostream>
using namespace std;

int main()
{
    int i = 1 ;
    int n ;
    cin>>n;
    while(i<=n)
    {
        // space print karlooo
        int spaces = n - i ;
        while(spaces)
        {
            cout<<" ";
            spaces = spaces - 1;
        }

        // Stars print karlooo
        int j = 1 ;
        while(j<=i)
        {
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}