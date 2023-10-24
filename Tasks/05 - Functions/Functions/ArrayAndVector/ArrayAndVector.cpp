#include <iostream>
#include <array>
#include <vector>
using namespace std;

string dispArray(array<int,3> dat)
{
    for (int n = 0; n < dat.size(); n++) {
        cout << dat[n] << " ";
    }

    return "c++ is fab";
    cout << endl;
}



void dispVec(vector<int> dat)
{
    for (int n = 0; n < dat.size(); n++) {
        cout << dat[n] << " ";
    }
    cout << endl;
}


void sum2nums(int number1, int freddy, int simon)
{

    int answer = number1 + freddy + simon;
    cout << answer;
}


int main()
{
    // Sneak peak at a C++ array type (very fast, fixed in size)
    array<int, 3> dat1 = { 1,2,3 };
    string message = dispArray(dat1);
    cout << message;

    // And vector (not as fast, but very versatile!) - which has variable size
    vector<int> dat2;
    dat2.push_back(5);  //It gets bigger with each value added
    dat2.push_back(3);
    dat2.push_back(2);
    dat2.push_back(-5);
    dispVec(dat2);


    sum2nums(23, 44, 66);

}

