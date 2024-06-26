#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "PALINDROME PATTERN" << endl;
    cout << "enter the number of rows: ";
    cin >> rows;

    for (int i=1 ; i<=rows ; i++)
    {
        for (int j=rows ; j>i ; j--)
        {
            cout << "  ";
        }
        for (int k=i ; k>0 ; k--)
        {
            cout << k << " ";
        }
        for (int l=2 ; l<=i ; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}
