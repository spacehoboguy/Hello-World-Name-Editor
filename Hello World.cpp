// Hello World.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    string fullname;
    
    cout << "Hello World!\n";
    cout << "What is your name?\n";

    getline(cin,fullname);

    cout << "Your name is :\n\n";

    for(char character : fullname) {
        cout << character << " ";
        Sleep(100);
    }
        
    cout << "\n";

    for(int i=0; i < fullname.length(); i++) {
        cout << i << " ";
        Sleep(100);
    }

    cout << "\nChange character in name";
    cout << "\nSelect index: " ;

    int index;
    cin >> index;

    cout << "\nNew character: " ;

    char newChar;
    cin >> newChar;
    
    cout << " ";

    if(index>= 0 && index < fullname.length()) {
        fullname[index] = newChar;
        
        for(char character : fullname) {
            cout << character;
            Sleep(100);
        }
    }

    return 0;
}