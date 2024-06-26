#include <iostream>
using namespace std;

int main()
{
    int rows;

    //half pyramid
    cout << "HALF PYRAMID WITH STARS" << endl;
    cout << "enter number of rows: ";
    cin >> rows;

    for (int i=1 ; i<=rows ; i++)
    {
        for (int j=0 ; j<i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //inverted half pyramid
    cout << "INVERTED HALF PYRAMID WITH STARS" << endl;
    //cout << "enter number of rows: ";
    //cin >> rows;

    for (int i=rows ; i>0 ; i--)
    {
        for (int j=0 ; j<i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //right aligned half pyramid
    cout << "RIGHT ALIGNED HALF PYRAMID WITH STARS" << endl;
    //cout << "enter number of rows: ";
    //cin >> rows;

    for (int i=1 ; i<=rows ; i++)
    {
        for (int k=rows ; k>i ; k--)
        {
            cout << "  ";
        }
        for (int j=0 ; j<i ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //half pyramid
    cout << "HALF PYRAMID WITH NUMBERS" << endl;
    //cout << "enter number of rows: ";
    //cin >> rows;

    for (int i=1 ; i<=rows ; i++)
    {
        for (int j=1 ; j<i+1 ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i=1 ; i<=rows ; i++)
    {
        for (int j=1 ; j<i+1 ; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    //inverted half pyramid
    cout << "INVERTED HALF PYRAMID WITH NUMBERS" << endl;
    //cout << "enter number of rows: ";
    //cin >> rows;

    for (int i=rows ; i>0 ; i--)
    {
        for (int j=1 ; j<i+1 ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i=0 ; i<=rows ; i++)
    {
        for (int j=rows ; j>i ; j--)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }


    return 0;
}

