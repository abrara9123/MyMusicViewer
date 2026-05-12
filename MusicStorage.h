//
// Created by fiora on 5/10/2026.
//
#include <string>
#include <unordered_map>
using namespace std;
#ifndef MYMUSICVIEWER_MUSICSTORAGE_H
#define MYMUSICVIEWER_MUSICSTORAGE_H

class MusicStorage {
private:
    double lenght{};
    string songName{};
    string url{};
    string genre{};
    string artistName{};

public:
    void addTo(string martistName,string mgenre, double mlength) {
        artistName = martistName;
        genre = mgenre;
        lenght = mlength;
    }
    void printInfo() {
        cout << "Artist Name: " << artistName << " Genre: " << genre << " Track Lenght: " << lenght << "\n";
    }

    void getInput() {
        cout << "Enter Artist Name:  \n";
        getline(cin,artistName);
        cout << "Enter Genre:  \n";
        getline(cin,genre);
        cout << "Enter Lenght:  \n";
        cin >> lenght;

        addTo(artistName,genre,lenght);
    }

};

class mapStructure : public MusicStorage {
private:
    unordered_map<string,MusicStorage> tempOne;
    string songName{};

public:
    void addSong() {
        cout << "Enter the Song Name:" << endl;
        getline(cin,songName);
        tempOne[songName].getInput();
    }

    void print() {
        for (auto [key,pair]: tempOne) {
            cout << "Song name is [" << key << "] ";
            pair.printInfo();
        }
    }
};



#endif //MYMUSICVIEWER_MUSICSTORAGE_H
