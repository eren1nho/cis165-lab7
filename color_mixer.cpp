#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    const int COLOR_SIZE = 20;

    char first_color[COLOR_SIZE];
    char second_color[COLOR_SIZE];

    cout << "Enter first color: ";
    cin >> setw(COLOR_SIZE) >> first_color;

    cout << "Enter second color: ";
    cin >> setw(COLOR_SIZE) >> second_color;

    bool valid_first = strcmp(first_color, "red") == 0 ||
                       strcmp(first_color, "blue") == 0 ||
                       strcmp(first_color, "yellow") == 0;

    bool valid_second = strcmp(second_color, "red") == 0 ||
                        strcmp(second_color, "blue") == 0 ||
                        strcmp(second_color, "yellow") == 0;

    if (!valid_first || !valid_second)
    {
        cout << "Error: enter red, blue, or yellow." << endl;
    }
    else if (strcmp(first_color, second_color) == 0)
    {
        cout << "Mixed color: " << first_color << endl;
    }
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "blue") == 0) ||
             (strcmp(first_color, "blue") == 0 && strcmp(second_color, "red") == 0))
    {
        cout << "Mixed color: purple" << endl;
    }
    else if ((strcmp(first_color, "red") == 0 && strcmp(second_color, "yellow") == 0) ||
             (strcmp(first_color, "yellow") == 0 && strcmp(second_color, "red") == 0))
    {
        cout << "Mixed color: orange" << endl;
    }
    else
    {
        cout << "Mixed color: green" << endl;
    }

    return 0;
}