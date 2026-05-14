#include <iostream>
#include "IntBinaryTree.h"
#include <fstream> // changed. i did not see it already had an iostream - just tired.
#include <string>
using namespace std;

int main() {
    //create the BST obj.
    IntBinaryTree tree;

    //file logic
    ifstream inputFile("codes.txt"); //okay, so this is how i will remember it.

    int choice;
    //these are to hold the original and then new
    string oldCode;
    string newCode;
    //okay, now I want to add the logic to open the file.
    if(!inputFile) {
        cout << "Error: can't open file";
    } else {
        string code;
        
        while(getline(inputFile, code)) {
            if(!code.empty()) {
                tree.insertNode(code);
            }
        }
    }

    return 0;
}

// Goal 4: Add Menu:
//     1. add; 2. delete; 3. search; 4. modify; 5. need to end selection process. Exit.