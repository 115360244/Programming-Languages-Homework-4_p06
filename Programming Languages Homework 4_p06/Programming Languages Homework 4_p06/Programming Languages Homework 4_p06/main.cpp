#include <iostream>
#include <iomanip>
#include <cstdlib>
#define SIZE 10 
using namespace std;

int main()
{
    int s[SIZE];
    int j;

    for (j = 0; j < SIZE; j++)
    {
        s[j] = 2 + 2 * j;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for (j = 0; j < SIZE; j++)
    {
        cout << setw(7) << j << setw(13) << s[j] << endl;
    }

    system("pause");
    return 0;
}