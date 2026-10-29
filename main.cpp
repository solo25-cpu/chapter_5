#include <iostream>
using namespace std;

int main() {
 int choice;

    do {
        cout << "\n=== Arithmetic menu ===" << endl;
        cout << "1. Addiction" << endl;
        cout << "2. subtraction" << endl;
        cout << "3. multiplication" << endl;
        cout << "4. division" << endl;
        cout << "5. Exit" << endl;
        cout << "enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nYou selected: Addition" << endl;
                break;
            case 2:
                cout << "\nYou selected: subraction" << endl;
                break;
            case 3:
                cout << "\nYou selected: multiplication" << endl;
                break;
            case 4:
                cout << "\nExiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "\nInvalid choice. Please enter a number between 1 and 5." << endl;

        }

    } while (choice != 5);

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}