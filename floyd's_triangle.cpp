#include <iostream>
using namespace std;

int main()
{
    int rows;

    //floyd's triangle
    cout << "FLOYD'S TRIANGLE" << endl;
    cout << "enter number of rows: ";
    cin >> rows;

    int num = 1;
    for (int i=0 ; i<rows ; i++)
    {
        for (int j=0 ; j<i+1 ; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }


    return 0;
}

