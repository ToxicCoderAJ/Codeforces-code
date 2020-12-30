#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
//#include <cstring>

using namespace std;

int main() {
    char s[101]; // set the array limit to 101
    cin >> s;
    int len = strlen(s); // lenght of input
    int j = 0; // a
    sort(s, s + len); // sort 
    for (int i = 0; i < len; i++)
    {
        if (s[i] != s[i + 1])
        {
            j++;
        }
    }
    if (j % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
