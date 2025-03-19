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
                cin.getline(input, 100);
                ifstream file("numbers.txt");
                int num;
                while (file >> num) {
                    //add function
                }
            }
            else if (strcasecmp(input, "Man") == 0 or strcasecmp(input, "Manual") == 0) {
                cout << "Enter numbers between 1 and 999 seperated by spaces." << endl;
                int num;
                while (cin >> num) {
                    //add function
                    if (cin.peek() == '\n') { //If next number is a newline, break
                        break;
                    }
                }
                cin.ignore();
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