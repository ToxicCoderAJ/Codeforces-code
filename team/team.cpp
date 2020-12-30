#include <iostream>

using namespace std;

int main()
{
    int n, p[3], total = 0; // initialization
    cin >> n;               // Get the number for the look

    for (int i = 0; i < n; i++)
    {
        cin >> p[0] >> p[1] >> p[2];  // get the data from user
        int sum = p[0] + p[1] + p[2]; // add up the user data

        if (sum >= 2)
        {
            total++;
        }
    }
    cout << total << endl;

    return 0;
}