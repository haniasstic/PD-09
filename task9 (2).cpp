#include <iostream>
using namespace std;
void dance(string code, string move[]);
int main()
{
    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabsque"};
    string code;
    cout << "Enter four digits pin: ";
    cin >> code;
    dance(code, move);
}

void dance(string code, string move[])
{
    bool result = true;
    if (code.length() == 4)
    {
        for (int x = 0; x < 4; x++)
        {
            char c = code[x];
            if (!(c <= '9' && c >= '0'))
            {
                result = false;
                cout << "Invalid Input";
                return;
            }
        }

        if (result)
        {
            for (int i = 0; i < 4; i++)
            {
                char c = code[i];
                int y = (c - '0') + i;
                if (y > 9)
                    y = y - 10;
                cout << move[y] << ", ";
            }
        }
    }

    else
    {
        cout << "Invalid Input";
        return;
    }
}