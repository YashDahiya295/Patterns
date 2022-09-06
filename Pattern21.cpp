#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n ;
    cin>>n ;
    while(i<=n)
    {
        int j = 1;
        //spaces print karlooo
        int spaces = i - 1 ;
        while(spaces)
        {
            cout<<" ";
            spaces = spaces - 1 ;
        }
        //stars print karalooo
        while(j<=(n - i + 1))
        {
            cout<<"*";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
