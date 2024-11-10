#include <iostream>
using namespace std;
int seconds(int size, string colors[]);
main()
{
    int size, result;
    cout << "Enter size of array: ";
    cin >> size;
    string colors[size];
    cout << "Enter Colours: " << endl;
    for (int x = 0; x < size; x++)
    {
        cin >> colors[x];
    }
    result = seconds(size, colors);
    cout << "It takes " << result << " seconds to colour the whole pattern";
}

int seconds(int size, string colors[])
{
    int quantity, pencils;
    int y = size;
    for (int i = 0; i < size; i++)
    {
        if (colors[i] == colors[i + 1])
        {
            y = y - 1;
        }
    }
    quantity = size * 2;
    pencils = y - 1;
    int seconds = quantity + pencils;
    return seconds;
}