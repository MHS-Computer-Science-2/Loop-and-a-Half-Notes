// Loop and a Half Notes
//  I CAN use a BREAK statement to exit a loop

#include <iostream>
using namespace std;

int main()
{
    //Example (from the previous notes)
    cout << "Enter numbers (-1 to stop): " << endl;
    int num = 0;

    while (num != -1) { // what is true to continue
        cin >> num;

        if (num % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }
    }

    //A different way to approach the same problem
    cout << endl << endl << "Enter numbers (-1 to stop): " << endl;
    num = 0;

    while (true) { // means loop forever
        cin >> num;

        if (num == -1) { // what should be true to stop
            break; //immediately ends the loop
        }

        if (num % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }
    }

    system("pause");
}
