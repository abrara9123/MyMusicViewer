//
// Created by fiora on 5/10/2026.
//
#include <string>
#include <unordered_map>
using namespace std;
#ifndef MYMUSICVIEWER_MUSICSTORAGE_H
#define MYMUSICVIEWER_MUSICSTORAGE_H
#include <fstream>


class MusicStorage {
private:
    string lenght{};
    string songName{};
    string url{};
    string genre{};
    string artistName{};
    //mapStructure Mapobject;




public:
    ofstream myFile;
    MusicStorage() {
        myFile.open("Stored Music.txt",ios::app);

    }

    MusicStorage(const MusicStorage& other) {
        lenght = other.lenght;
        songName = other.songName;
        url = other.url;
        genre = other.genre;
        artistName = other.artistName;

    }
    ~MusicStorage() {
        myFile.close();
    }
    void addTo(string martistName,string mgenre, string mlength) {

        artistName = martistName;
        genre = mgenre;
        lenght = mlength;
        //myFile << "Title Track: " << Mapobject.getSongName() << " Artist: " << artistName << " Genre: " << genre << " Length: " << lenght << endl;


    }
    void printInfo() {
        cout << " Artist: " << artistName << " Genre: " << genre << " Length: " << lenght << "\n";
    }

    void getInput() {
        cout << "Enter Artist Name:  \n";
        getline(cin,artistName);
        cout << "Enter Genre:  \n";
        getline(cin,genre);
        cout << "Enter Lenght:  \n";
        getline(cin,lenght);

        addTo(artistName,genre,lenght);
    }


};





#endif //MYMUSICVIEWER_MUSICSTORAGE_H
