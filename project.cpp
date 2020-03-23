#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string uName;
    string uPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Enter User Name: ";
        cin >> uName;
        cout << "Enter Password: ";
        cin >> uPassword;

        if (uName == "sugata" && uPassword == "jeet")
        {
            cout << "Hi Sugata!\n";
            break;
        }
        else if (uName == "hrishabh" && uPassword == "chotu")
        {
            cout << "Hi Hrishabh!\n";
            break;
        }
        else
        {
            cout << "Invalid Credentials. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "You have tried too many times. System will now terminate!";
            return 0;
    }

    cout << "Thanx for logging.\n";
    return 0;
}