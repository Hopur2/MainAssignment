#include "UI/MakelineUI.h"

MakelineUI::MakelineUI()
{
    //ctor
}

void MakelineUI::MainMenu()
{
    PickStore();
    char input;
    bool showdone = false;
    while(true) {
        if(showdone)
        {
            cout << "Showing Done Orders ---- press r to return and q to quit" << endl;
            MS.PrintDoneOrders();
        }
        else
        {
            cout << "Showing Orders to do ---- press r to show done orders and q to quit" << endl;
            MS.PrintOrders();
        }
        cout << "What Order have you done?" << endl;
        cin >> input;
        if(input == 'r')
        {
            showdone = !showdone;
        }
        else if(input == 'q')
        {
            MS.Finished();
            cout << "Saved" << endl;
            break;
        }
        else
        {
            try
            {
                MS.DoneOrder(input);
            }
            catch(char e)
            {
                cout << e << " isn't a valid order number" << endl;
            }
        }
    }
}

void MakelineUI::PickStore()
{
    string store;
    while(store != "1" && store != "2" && store != "3")
    {
        cout << "What store are you in?" << endl;
        cout << "1 - Highway Street 11" << endl;
        cout << "2 - Lowway Street 12" << endl;
        cout << "3 - Middleway Street 13" << endl;
        cin >> store;
    }
    MS.SetStore(store);
}
