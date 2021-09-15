// Rodriguez_ip3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class ComputerHardware
{
    private:

        string userName = "Default User";
        string userAddress = "Default Address";

    public:

        ComputerHardware() {};
        ComputerHardware(string userName1, string userAddress1) 
        {
            userName = userName1;
            userAddress = userAddress1;
        };

        void SetUserName(string userName1)
        {

            userName = userName1;

        }

        void SetuserAddress(string userAddress1)
        {

            userAddress = userAddress1;

        }

        string GetName()
        {

            string userName;

            cout << "Please enter your name [first name]";
            getline(cin, userName);

            return userName;

        }
	
        
};

ComputerHardware user1 = ComputerHardware();

void GetAddress()
{
    string address;
    cout << "Please enter your address:";
    getline(cin, address);

    user1.SetuserAddress(address);

}
void MainMenu()
{
    string response;
    string ComputerHardware[5] = { "1.Computer", "2.Phone", "3.Software", "4.Customer support", "5.Other support" };
    cout << "\n\nDo you want to see the selection you need help on? [y = yes n = no]";
    getline(cin, response);

    if (response == "y")
    {
        for (string computer : ComputerHardware)
        {
            cout << computer << "\n";
        }
    }



}

int GetUserSelection()
{
    string userEntry;
    int userSelection;

    cout << "\nPlease select a product you need help with [select from 1 to 5]";
    getline(cin, userEntry);
    userSelection = stoi(userEntry);

    return userSelection;

}


void ReturnUserSelections(int selection2)
{

    switch (selection2)
    {
    case 1:
        cout << "\n1.Computer";
        break;
    case 2:
        cout << "\n2.Phone";
        break;
    case 3:
        cout << "\n3.software";
        break;
    case 4:
        cout << "\n4.Customer Support";
        break;
    case 5:
        cout << "\n5.Other Support";
        break;
    }
}

int main()
{

    string userName2;
    int userSelection2;
    bool stopSelecting = false;
    string userResponse;

    cout << "Welcome to Help desk do you need help with your device\n";
    user1.GetName();
    GetAddress();
    cout << "\n\nThank you for using help desk, " << userName2;
    MainMenu();

    while (stopSelecting == false)
    {

        userSelection2 = GetUserSelection();
        ReturnUserSelections(userSelection2);

        cout << "would you like to exit the help desk [y =yes or n = no]?";
        getline(cin, userResponse);

        if (userResponse == "y")
        {

            stopSelecting = true;

        }
    }


};



