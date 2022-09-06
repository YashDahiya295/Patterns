#include<iostream>
using namespace std;

int main()
{
    int i = 1 ;
    int n ;
    cin>>n;

    while(i<=n)
    {
        int j  = 1;
        //spaces print karlooo

        int spaces = n - i ;
        while(spaces)
        {
            cout<<" ";
            spaces = spaces - 1 ;
        }

        // numbers print karlooo
        while(j<=i)
        {
            cout<<i ;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1; 
    }
}
