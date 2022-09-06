#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n ;
    cin>>n ;
    while(i<=n)
    {
        int j = 1 ;
        char ch = 'A' + i - 1 ;
        while(j<=n)
        {
            cout<<ch;
            ch = ch + 1;
            j = j + 1;
        }
        cout<<endl;
        i = i + 1 ;
    }
}
