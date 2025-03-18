#include <iostream>
#include "node.h"
#include "bst.h"
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    //Create a binary tree

    while (true) {
        char input[100] = "";
        cout << "What would you like to do?(ADD/DELETE/SEARCH/PRINT/QUIT): ";
        cin.getline(input, 100);
        if (strcasecmp(input, "ADD") == 0) {
            memset(input, 0, sizeof(input)); //Clears the input array
            cout << "Read in manually or with file?(FILE/MAN): ";
            cin.getline(input, 100);
            if (strcasecmp(input, "File") == 0) {
                memset(input, 0, sizeof(input));
                cout << "Please enter the filepath exactly: " << endl;
                cin.getline(input, 100);
                ifstream file(input);
                if (!input) {
                    cout << "Error opening file. " << input << endl;

                }

            }
        }
        else if (strcasecmp(input, "DELETE") == 0) {
            //Run the delete function
        }
        else if (strcasecmp(input, "SEARCH") == 0) {
            //Run the search function
        }
        else if (strcasecmp(input, "PRINT") == 0) {
            //Run the print function
        }
        else if (strcasecmp(input, "QUIT") == 0) {
            return 0;
        }
    }
}