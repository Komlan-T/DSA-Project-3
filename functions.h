#pragma once
#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <sstream>
#include <istream>
#include <fstream>
#include <string>
#include <iterator>
#include <unordered_map>
#include "Hospital.h"

using namespace std;

map<string, Hospital> filterByState(map<string, Hospital> _map, string state) {
    
    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.state != state) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

map<string, Hospital> filterByCity(map<string, Hospital> _map, string city) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.city != city) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

map<string, Hospital> filterByFacility(map<string, Hospital> _map, string facility) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.type != facility) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

map<string, Hospital> filterBySaftey(map<string, Hospital> _map, string saftey) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.saftey != saftey) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

map<string, Hospital> filterByMortality(map<string, Hospital> _map, string mortality) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.morality != mortality) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

map<string, Hospital> filterByExperience(map<string, Hospital> _map, string experience) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.experience != experience) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}


// Unordered


unordered_map<string, Hospital> UfilterByState(unordered_map<string, Hospital> _map, string state) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.state != state) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

unordered_map<string, Hospital> UfilterByCity(unordered_map<string, Hospital> _map, string city) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.city != city) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

unordered_map<string, Hospital> UfilterByFacility(unordered_map<string, Hospital> _map, string facility) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.type != facility) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

unordered_map<string, Hospital> UfilterBySaftey(unordered_map<string, Hospital> _map, string saftey) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.saftey != saftey) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

unordered_map<string, Hospital> UfilterByMortality(unordered_map<string, Hospital> _map, string mortality) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.morality != mortality) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}

unordered_map<string, Hospital> UfilterByExperience(unordered_map<string, Hospital> _map, string experience) {

    for (auto iter = _map.begin(); iter != _map.end();) {
        if (iter->second.experience != experience) {
            iter = _map.erase(iter);
        }
        else {
            iter++;
        }
    }
    return _map;
}