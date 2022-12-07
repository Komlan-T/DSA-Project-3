#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "Hospital.h"
using namespace std;

enum status {
    NeverUsed = 0, Deleted = 1, Occupied = 2
};

class _unordered_map {
    int load;         // number of elements in the array                
    float max_load_factor = 0.6f;
public:
    int bucket_size; // number of buckets in the array
    pair<int, pair<string, Hospital>>* map;
    _unordered_map();
    ~_unordered_map();
    void insert(pair<string, Hospital> hospital);
    void insertHelper(pair<string, Hospital> hospital, pair<int, pair<string, Hospital>>* map);
    bool erase(string hospital);
    Hospital find(string key);
    bool empty() {
        if (load == 0) {
            return true;
        }
        else {
            return false;
        }
    };
    void rehash();
    float load_factor() {
        return load / (float)bucket_size;
    }
    long long getHash(string hash);
    void printMap();
    float get_max_load_factor() {
        return max_load_factor;
    }
};

_unordered_map::_unordered_map() {
    load = 0;
    bucket_size = 10;
    map = new pair<int, pair<string, Hospital>>[bucket_size];
}

_unordered_map::~_unordered_map() {
    delete[] map;
}

long long _unordered_map::getHash(string hash) {
    long long hashVal = 0;
    //determine the hash value for string
    for (int i = 0; i < hash.size(); ++i) {
        hashVal += (int)hash[i] * pow(7, i);
    }
    return hashVal;
}

void _unordered_map::insert(pair<string, Hospital> hospital) {
    insertHelper(hospital, map);
}


void _unordered_map::insertHelper(pair<string, Hospital> h, pair<int, pair<string, Hospital>>* map) {
    long long hashVal = getHash(h.first);

    // reduce hash value for size of array
    int index = abs(hashVal % bucket_size);

    // insert into next available space into the array using the quadratic probing method
    if (map[index].first == NeverUsed) {
        map[index].second = h;
        map[index].first = Occupied;
    }
    else {
        int counter = 1;
        while (map[index].first == Occupied) {
            index = pow(counter, 2);
            counter++;
        }
        map[index].second = h;
        map[index].first = Occupied;
    }

    ++load;
    // check to make the max load factor has not been reached 
    if (load_factor() >= max_load_factor) {
        rehash();
    }
}

Hospital _unordered_map::find(string key) {
    long long hashVal = getHash(key);
    // reduce
    int index = abs(hashVal % bucket_size);

    int count = 1;
    //if wasn't found begin linear search based on quadratic probing
    while (map[index].first != NeverUsed) {
        if (map[index].second.first == key) {
            return map[index].second.second;
        }
        index = pow(count, 2);
        count++;
    }
    // a default hospital is return with nothing
    Hospital h;
    return h;
}

bool _unordered_map::erase(string key) {
    long long hashVal = getHash(key);
    int index = abs(hashVal % bucket_size);

    int count = 1;
    // if wasn't found begin linear search based on quadratic probing
    while (map[index].first != NeverUsed) {
        if (map[index].second.first == key) {
            map[index].first = Deleted;
            --load;
            return true; // object has been deleted
        }
    }

    // object to be deleted was not found
    return false;
}

void _unordered_map::rehash() {
    cout << "Rehashing" << endl;
    // double the size
    this->bucket_size *= 2;
    // allocated new memory on the heap
    pair<int, pair<string, Hospital>>* newMap = new pair<int, pair<string, Hospital>>[bucket_size];
    load = 0;
    // iterate through the existing graph
    for (int i = 0; i < (bucket_size / 2); ++i) {
        if (map[i].first == Occupied) {
            insertHelper(map[i].second, newMap);
        }
    }
    int breakptr = 0;
    // deallocated existing memory
    delete[] map;
    map = newMap;
}

void _unordered_map::printMap() {
    for (int i = 0; i < bucket_size; ++i) {
        if (map[i].first == Occupied) {
            cout << map[i].second.first << endl;
        }
    }
}
