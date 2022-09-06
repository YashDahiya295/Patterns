#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cin >> n;
    char start = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << start;
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}