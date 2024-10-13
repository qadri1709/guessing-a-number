/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Q: write a single file handling program in c++ to reading
// and writing data on a file.

// !----Include necessary header files........
#include <fstream>
using namespace std; // !----Use the standard namespace.........
#include <iostream>
#include <string>


int main()
{
    // !----Create an output file stream object......
    ofstream fout;
    // !----Open a file named "NewFile.txt" for writing.........
    fout.open("NewFile.txt");

    // !----Check if the file opened successfully.......
    if (!fout) {
        // !----Print an error message if the file couldn't be.....
        // !----opened......
        cerr << "Error opening file!" << endl;
        // !----Return 1 to indicate failure......
        return 1;
    }

    // !----Declare a string variable to hold each line of text......
    string line;
    // !----Initialize a counter to limit input to 5 lines.....
    int i = 0;

    // !----Prompt the user to enter 5 lines of text.......
    cout << "Enter 5 lines of text:" << endl;
    // !----Loop to read 5 lines of input from the user......
    while (i < 5) {
        // !----Read a line of text from standard input......
        getline(cin, line);
        // !----Write the line of text to the file......
        fout << line << endl;
        // !----Increment the counter......
        i += 1;
    }

    // !----Close the file after writing........
    fout.close();

    // !----Print a success message......
    cout << "Text successfully written to NewFile.txt"
         << endl;

    // !----Return 0 to indicate successful execution.......
    return 0;
}
