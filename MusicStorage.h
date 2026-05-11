//
// Created by fiora on 5/10/2026.
//
#include <string>
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
    void addTo(string sname,string mgenre, double mlength) {
        songName = sname;
        genre = mgenre;
        lenght = mlength;

    }
};





#endif //MYMUSICVIEWER_MUSICSTORAGE_H
