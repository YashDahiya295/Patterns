#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin>>n;
    while(i<=n)
    {
        int j = 1 ;
        //spaces print karloo
        int spaces = i - 1 ;
        while (spaces)
        {
            /* code */
            cout<<" ";
            spaces = spaces - 1;
        }

        // numbers print karllooo
        while(j<=(n-i+1))
        {
            cout<<i;
            j = j + 1 ;
        }
        cout<<endl;
        i = i + 1 ;
        
    }
}