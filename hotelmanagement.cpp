#include <iostream>
#include <string>
#include <fstream>
using namespace std;
// int m;
int main()
{
    int quant; // quant stands for quantity
    int choice;
    // this will hold the quantity of these items
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qchickenroll = 0, Qshake = 0;
    // this will hold the quantity of sold  items
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Schickenroll = 0, Sshake = 0;
    // Total prace of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_chickenroll = 0, Total_shake = 0;

    cout << "\n\t Quantity of items we have : ";
    cout << "\nRooms Available:";
    cin >> Qrooms;
    cout << "\n Quantity of burger :";
    cin >> Qburger;
    cout << "\n Quantity of pasta :";
    cin >> Qpasta;
    cout << "\n Quantity of noodles :";
    cin >> Qnoodles;
    cout << "\n Quantity of chickenroll :";
    cin >> Qchickenroll;
    cout << "\n Quantity of shake :";
    cin >> Qshake;

 m:
    cout << "\n\t\t Please select from the menu options ";
    cout << "\n\n1)Rooms";
    cout << "\n2)Pasta";
    cout << "\n3)Burger";
    cout << "\n4)Noodles";
    cout << "\n5)ChickenRoll";
    cout << "\n6)Shake";
    cout << "\n7)Information Regarding sales and collection";
    cout << "\n8)Exit";

    cout << "\n\n Please Enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "rooms have been alloted to you";
        }
        else
        {
            cout << "\n\t Only " << Qrooms - Srooms << "are the remaining rooms in the hotel";
        }
        break;
    case 2:
        cout << "\n\n Enter Pasta Quantity";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta = Total_pasta + quant * 180;
            cout << "\n\n\t\t" << quant << "pasta is order";
        }
        else
        {
            cout << "\n\t Only " << Qpasta - Spasta << "are the  Pasta remaining in the stock";
        }
        break;
    case 3:
        cout << "\n\n Enter Burger Quantity";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger = Total_burger + quant * 150;
            cout << "\n\n\t\t" << quant << "burger is order";
        }
        else
        {
            cout << "\n\t Only " << Qburger - Sburger << "are the  burger remaining in the stock";
        }
        break;
    case 4:
        cout << "\n\n Enter noodles Quantity";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles = Total_noodles + quant * 100;
            cout << "\n\n\t\t" << quant << "noodles is order";
        }
        else
        {
            cout << "\n\t Only " << Qnoodles - Snoodles << "are the  noodles remaining in the stock";
        }
        break;
    case 5:
        cout << "\n\n Enter chickenroll Quantity";
        cin >> quant;
        if (Qchickenroll - Schickenroll >= quant)
        {
            Schickenroll = Schickenroll + quant;
            Total_chickenroll = Total_chickenroll + quant * 300;
            cout << "\n\n\t\t" << quant << "chickenroll is order";
        }
        else
        {
            cout << "\n\t Only " << Qchickenroll - Schickenroll << "are the  chickenroll remaining in the stock";
        }
        break;
    case 6:
        cout << "\n\n Enter shake Quantity";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake = Total_shake + quant * 120;
            cout << "\n\n\t\t" << quant << "shake is order";
        }
        else
        {
            cout << "\n\t Only " << Qshake - Sshake << "are the  shake remaining in the stock";
        }
        break;

    case 7:
    cout<<"\n\tDetails of sales and collection ";
    cout<<"\n\n Number of rooms we had:"<<Qrooms;
    cout<<"\n\n Number of rooms we gave for rent"<<Srooms;
    cout<<"\n\n Remaining rooms :"<<Qrooms-Srooms;
    cout<<"\n\n Total rooms collection for the day"<<Total_rooms;

  cout<<"\n\n Number of burger  we had:"<<Qburger;
    cout<<"\n\n Number of burger  we gave for rent"<<Sburger;
    cout<<"\n\n Remaining burger  :"<<Qburger-Sburger;
    cout<<"\n\n Total burger collection for the day"<<Total_burger;

      cout<<"\n\n Number of pasta we had:"<<Qpasta;
    cout<<"\n\n Number of pasta we gave for rent"<<Spasta;
    cout<<"\n\n Remaining pasta :"<<Qpasta-Spasta;
    cout<<"\n\n Total pasta collection for the day"<<Total_pasta;

      cout<<"\n\n Number ofnoodles  we had:"<<Qnoodles;
    cout<<"\n\n Number of noodles we gave for rent"<<Snoodles;
    cout<<"\n\n Remaining noodles :"<<Qnoodles-Snoodles;
    cout<<"\n\n Totalnoodles  collection for the day"<<Total_noodles;

  cout<<"\n\n Number of chickenroll we had:"<<Qchickenroll;
    cout<<"\n\n Number of chickenroll we gave for rent"<<Schickenroll;
    cout<<"\n\n Remaining chickenroll :"<<Qchickenroll-Schickenroll;
    cout<<"\n\n Total chickenroll collection for the day"<<Total_chickenroll; 
    
     cout<<"\n\n Number of shake we had:"<<Qshake;
    cout<<"\n\n Number of shake we gave for rent"<<Sshake;
    cout<<"\n\n Remaining shake :"<<Qshake-Sshake;
    cout<<"\n\n Total shake collection for the day"<<Total_shake;

     case 8:
     exit(0);

     default:
     cout<<"\n please select the choice mentioned above"; 

    }
    goto m;
    return 0;
}