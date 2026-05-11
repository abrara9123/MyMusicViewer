#include  <iostream>
#include  <string>
#include "MusicStorage.h"
#include  <unordered_map>
using namespace std;

int main() {
    unordered_map<string,MusicStorage> newMap;

    newMap["Deep Purple"].addTo("Child in Time","Rock and Roll!",10.20);
    cout << "this all works fine" << endl;


    return 0;
}