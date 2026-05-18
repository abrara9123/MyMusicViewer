//
// Created by fiora on 5/12/2026.
//
#ifndef MYMUSICVIEWER_MUSICSTORAGEFEATURES_H
#define MYMUSICVIEWER_MUSICSTORAGEFEATURES_H
#include  "MusicStorage.h"

class mapStructure : public MusicStorage {
private:
    unordered_map<string,MusicStorage> tempOne;
    string songName{};

public:
    void addSong() {
        cout << "Enter the Song Name:" << "\n";
        getline(cin,songName);
        tempOne[songName].getInput();
    }

    void print() {
        for (auto [key,pair]: tempOne) {
            cout << "Song name is [" << key << "]";
            pair.printInfo();
        }
    }

    void removeSong(string mName) {
        if (!tempOne.contains(mName)) {
            cout << "Item not found and not stored currently!" << "\n";
            return;
        }
        for (const auto& a: tempOne) {
            if (a.first == mName) {
                tempOne.erase(a.first);
                cout << "Successfully Removed" << "\n";
                return;
            }
        }

    }

    void viewSongs() {
        for (auto [key,pair]: tempOne) {
            cout << "Title:[" << key << "]";
            pair.printInfo();
        }
    }


};








#endif //MYMUSICVIEWER_MUSICSTORAGEFEATURES_H
