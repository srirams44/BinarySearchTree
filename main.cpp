#include <iostream>
#include <fstream>
#include <cstring>
#include "node.h"
#include "bst.h"
//Quick comment for commit

using namespace std;

int main() {
    BST myBST; // Binary search tree
    while (true) {
        char input[100] = "";
        cout << "What would you like to do? (ADD/DELETE/SEARCH/PRINT/QUIT): ";
        cin.getline(input, 100);

        if (strcasecmp(input, "ADD") == 0) {
            memset(input, 0, sizeof(input)); // Clears input array
            cout << "Read in manually or with file? (FILE/MAN): ";
            cin.getline(input, 100);

            if (strcasecmp(input, "FILE") == 0) {
                ifstream file("numbers.txt.txt");
                if (!file.is_open()) {
                    cout << "Error opening file numbers.txt" << endl;
                    continue;
                }
                int num;
                while (file >> num) {
                    myBST.add(num);
                }
                //cin.ignore(1000, '\n');
                cout << "Numbers added from file successfully." << endl;
            }
            else if (strcasecmp(input, "MAN") == 0) {
                cout << "Enter numbers between 1 and 999 separated by spaces: ";
                int num;
                cin >> num;
                myBST.add(num);
                while (cin.peek() != '\n' && cin >> num) {
                    myBST.add(num);
                }
                cin.ignore(1000, '\n'); // Clear any remaining input
                cout << "Numbers added manually successfully." << endl;
            }
        }
        else if (strcasecmp(input, "DELETE") == 0) {
            // Run the delete function
            int num;
            cout << "Please enter what value to delete: ";
            cin >> num;
            myBST.deleteValue(num);
            //cin.ignore(1000, '\n');

        }
        else if (strcasecmp(input, "SEARCH") == 0) {
            // Run the search function
            int num;
            cout << "Please enter value you are looking for: ";
            cin >> num;
            myBST.search(num);
            //cin.ignore(1000, '\n');
        }
        else if (strcasecmp(input, "PRINT") == 0) {
            myBST.print();
        }
        else if (strcasecmp(input, "QUIT") == 0) {
            return 0;
        }
    }
}