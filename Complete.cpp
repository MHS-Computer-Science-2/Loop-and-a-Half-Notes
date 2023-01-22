// Loop and a Half Notes
//  I CAN use a BREAK statement to exit a loop

#include <iostream>
using namespace std;

int main()
{
    //Example 1 (from the previous notes)
    // The loop itself controls when it stops
    cout << "Enter numbers (-1 to stop): " << endl;
    int num = 0;

    while (num != -1) { //Loop as long as num is NOT -1
        cin >> num;

        if (num % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }
    }

    //EXAMPLE 2
    // A different way to approach the same problem
    // The loop is set to go on forever, and we use an if-statement to end the loop
    // This is called a LOOP AND A HALF, because the loop will end half way through its code
    cout << endl << endl << "Enter numbers (-1 to stop): " << endl;
    num = 0;

    while (true) { // Loop forever
        cin >> num;

        if (num == -1) {
            break; // break immediately exits the current loop
        }

        if (num % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }
    }
    
    //The two examples accomplish the same task
    //Sometimes a solution is EASIER to think about using a LOOP AND A HALF
    //   - In Example 1, we must think of what should be true to KEEP GOING
    //   - In Example 2, we must think of what should be true to STOP

    system("pause");
}
