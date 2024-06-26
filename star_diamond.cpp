#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    //star diamond pattern
    cout << "STAR DIAMOND PATTERN" << endl;
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
            cout << "* ";
        }
        for (int l=2 ; l<=i ; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=rows-1 ; i>0 ; i--)
    {
        for (int j=rows ; j>i ; j--)
        {
            cout << "  ";
        }
        for (int k=i ; k>0 ; k--)
        {
            cout << "* ";
        }
        for (int l=2 ; l<=i ; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //hollow star diamond
    cout << "HOLLOW DIAMOND PATTERN" << endl;
    cout << "enter the number of rows: ";
    cin >> rows;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<(2*rows-1) ; j++)
        {
            if (((i+j) == rows-1) || (j == i+rows-1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i=rows-2 ; i>=0 ; i--)
    {
        for (int j=0 ; j<(2*rows-1) ; j++)
        {
            if (((i+j) == rows-1) || (j == i+rows-1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    //hollow diamond in a rectangle
    cout << "DIAMOND RING IN A RECTANGLE PATTERN" << endl;
    cout << "enter the number of rows: ";
    cin >> rows;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<(2*rows-1) ; j++)
        {
            if (((i+j) == rows-1) || (j == i+rows-1))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    for (int i=rows-2 ; i>=0 ; i--)
    {
        for (int j=0 ; j<(2*rows-1) ; j++)
        {
            if (((i+j) == rows-1) || (j == i+rows-1))
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}
