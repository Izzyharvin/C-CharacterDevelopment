#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    //creating a file object character
    ofstream createcharacter("character.txt");
    //make a if/else statement to make sure the file opens
    if(createcharacter.is_open()) {
        //Message
        cout <<"The file characters.txt is open!" << endl;
    }
    else {
        //Message
        cout << "The file characters.txt is NOT open!" << endl;
    }

    int loop = 1;
    int userid = 1;

    string username;
    //string classname;
    string racename;
    int attack;
    int ki;
    int armor;

    //Allow the user to start the game or make a character
    while(loop !=0) {
        cout << "Welcome! Please enter your desired username!" << endl;
        cin >> username;

        cout << "Please select a class: Human, Sayian, Alien!" << endl;
        cin >> racename;

        cout << "Please select a starting Attack level!" << endl;
        cin >> attack;

        cout << "Please select a starting Ki level!" << endl;
        cin >> ki;

        cout << "Please select a starting armor level!" << endl;
        cin >> armor;


        createcharacter << userid << "" << username << "" << racename << "" << attack << "" << ki << "" << armor << endl;
        
        userid++;

        cout << "Please enter 0 if you want to begin the game. Please enter 1 if you want to create another character!" << endl;
        cin >> loop;

    }

    createcharacter.close();

    return 0;
}