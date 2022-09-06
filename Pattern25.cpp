#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n ;
    cin>>n;

    while(i<=n)
    {
        int j = 1 ;
        int spaces = n-i ;
        //spaces print karlooo (1st Triangle)
        while (spaces)
        {
            cout<<" ";
            spaces = spaces - 1 ;
        }
        //Numbers print karlooo
        while(j<=i)
        {
            cout<<j;
            j = j + 1 ;
        }
        // 3rd traingle
        int start = i - 1 ;
        while (start)
        {
            cout<<start;
            start = start - 1 ;
        }
        cout<<endl;
        i = i + 1 ;
         


    }
}