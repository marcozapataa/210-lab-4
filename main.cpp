#include <iostream>
#include <vector>

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

    // create an empty vector of type <Color>
     vector <Color> myVec;

     // populate the vector with the Color object
     myVec.push_back(myColor);

     cout << "Stored R: " << myVec[0].red << endl;
     cout << "Stored G: " << myVec[0].green << endl;
     cout << "Stored B: " << myVec[0].blue << endl;

    return 0;
}