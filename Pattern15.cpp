#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    char value = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << value;
            value = value + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}