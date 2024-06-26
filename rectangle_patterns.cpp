#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    //solid rectangle
    cout << "SOLID RECTANGLE" << endl;
    cout << "enter number of rows and columns: ";
    cin >> rows >> cols;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<cols ; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //hollow rectangle
    cout << "HOLLOW RECTANGLE" << endl;
    //cout << "enter number of rows and columns: " << endl;
    //cin >> rows >> cols;

    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<cols ; j++)
        {
            if (i==0 || j==0 || i==rows-1 || j==cols-1)
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


    return 0;
}
