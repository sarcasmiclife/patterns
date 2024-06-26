#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    //0-1 pattern
    cout << "0-1 MATRIX AND HALF PYRAMID" << endl;
    cout << "enter number of rows and columns: ";
    cin >> rows >> cols;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<cols ; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<i+1 ; j++)
        {
            if ((i+j)%2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }


    return 0;
}

