#include "UI/MakelineUI.h"

MakelineUI::MakelineUI()
{
    //ctor
}

void MakelineUI::MainMenu()
{
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
