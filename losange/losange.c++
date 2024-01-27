#include <iostream>

using namespace std;

void pattern(int nbr)
{
    int col_1 = (nbr -1) / 2;
    int col_2 = 3 * nbr / 2 - 1;
    for (int i = 0; i < nbr; i++)
    {
        for(int j = 0; j < nbr; j++)
        {
            if (i + j == col_1 ||  i - j == col_1 || j - i == col_1
                ||i + j == col_2 || i == col_1 || j == col_1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 1;
    pattern(n);
    return 0;
}