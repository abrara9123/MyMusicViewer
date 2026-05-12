#include  <iostream>
#include  <string>
#include "MusicStorage.h"
#include  <unordered_map>
using namespace std;

int main() {
    mapStructure* temp = new mapStructure();

    int check{};
    cout << "Enter Y to add a song" << endl;
    temp->addSong();
    cin >> check;

    switch (check) {
        cin.clear();
        case 1:
        temp->addSong();
            break;
        default:
            cout << "Not a vaid Switch" << "\n";
            break;

    }

    temp->print();

    return 0;
}