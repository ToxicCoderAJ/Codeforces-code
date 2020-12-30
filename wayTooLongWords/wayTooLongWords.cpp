#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;
    int amount;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {

        cin >> input;
        if (input.length() > 10)
        {
            cout << input[0] << input.length() - 2 << input[input.length() - 1] << endl;
        }
        else if (input.length() <= 10 && input.length() >= 1)
        {
            cout << input << endl;
        }
        else
        {
            ;
        }
    }

    return 0;
}