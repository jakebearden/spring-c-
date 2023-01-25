// first code in new spring repository

#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age :";
    cin >> age;

    if (age < 18)
    {
        cout << " not even an adult yet" << endl;
    }

    else if (age > 17)
    {
        cout << "You are an adult" << endl;
    }

    else
    {
        cout << "something went wrong lmao" << endl;
    }
}
