#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    int n;
    cin>>n;
    int count = 1 ;
    while(i<=n)
    {
        int j = 0;
        //spaces print karloo
        int spaces = n - i ;
        while(spaces)
        {
            cout<<" ";
            spaces = spaces - 1;
        }
        //Numbers print karloo :
        while (j<i)
        {
            cout<<count;
            count = count + 1;
            j =j + 1 ;
        }
        cout<<endl;
        i = i + 1;
        
    }
}
