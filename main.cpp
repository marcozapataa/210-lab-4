#include <iostream>

using namespace std;

struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    // initialize the Color object
    Color myColor;

    // prompt user to enter data
    cout << "Enter red value: " << endl;
    cin >> myColor.red;

    cout << "Enter green value: " << endl;
    cin >> myColor.green;

    cout << "Enter blue value: " << endl;
    cin >> myColor.blue;

    // output the object's data to the console to confirm
    cout << "R value: " << myColor.red << endl;
    cout << "G value: " << myColor.green << endl;
    cout << "B value: " << myColor.blue << endl;

    return 0;
}