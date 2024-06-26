#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    //hollow diamond in a rectangle
    cout << "HOLLOW DIAMOND IN A RECTANGLE" << endl;
    cout << "enter the number of rows: ";
    cin >> rows;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=rows ; j>i ; j--)
        {
            cout << "* ";
        }
        for (int k=2*i ; k>1 ; k--)
        {
            cout << "  ";
        }
        for (int l=0 ; l<rows-i ; l++)
        {
            if (l==0 && i == 0)
            {
                continue;
            }
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=rows-2 ; i>=0 ; i--)
    {
        for (int j=rows ; j>i ; j--)
        {
            cout << "* ";
        }
        for (int k=2*i ; k>1 ; k--)
        {
            cout << "  ";
        }
        for (int l=0 ; l<rows-i ; l++)
        {
            if (l==0 && i == 0)
            {
                continue;
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
