#include  <iostream>
#include  <string>
#include "MusicStorage.h"
#include  <unordered_map>
#include "MusicStorageFeatures.h"
using namespace std;

int main() {
    mapStructure* temp = new mapStructure();

    string check{};
    string removeName{};
    cout << "Hi, Welcome What would you like to do!" << endl;
    cout << "Enter Commands: Add: add a song; Quit: close the program" << endl;
    getline(cin,check);

    while (true) {
        if (check == "Add") {
            temp->addSong();
        }
        if (check == "Delete") {
            cout << "Enter the Song name you wish to remove: " << endl;
            getline(cin,removeName);
            temp->removeSong(removeName);

        }
        if (check == "Quit") {
            break;
        }
        cout << "Enter Commands: Add: add a song; Quit: close the program" << endl;
        getline(cin,check);
    }

    temp->print();

    return 0;
}