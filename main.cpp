#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    // seed random number generator
    srand(time(0));

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

     // clears data
     myVec.clear();

     // range for random numbers 25 to 50
     int MIN = 25, MAX = 50;
     int n = rand() % (MAX-MIN+1) + MIN;

     // loop running n times, create a temp struct and push temp struct
     for (int i = 0; i < n; i++)
     {
        Color tempColor;

        //populate with random integers
        tempColor.red = rand() % (MAX-MIN+1) + MIN;
        tempColor.green = rand() % (MAX-MIN+1) + MIN;
        tempColor.blue = rand() % (MAX-MIN+1) + MIN;

        myVec.push_back(tempColor);
     }

     

    return 0;
}