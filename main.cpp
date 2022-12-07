#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <sstream>
#include <istream>
#include <fstream>
#include <string>
#include <time.h>
#include <unordered_map>
#include "Hospital.h"
#include "functions.h"
#include <chrono>
#include <thread>
using namespace std;


void FileInfo(string fileName, map<string, Hospital>& hospitals) {

    ifstream file(fileName);

    if (file.is_open()) {

        string line;
        getline(file, line);

        while (getline(file, line)) {

            string newLine;

            for (int i = 0; i < line.length(); i++) {
                if (line[i] == ',' && line[i - 1] != '"' && line[i + 1] != '"') {
                    continue;
                }
                newLine += line[i];
            }

            istringstream fullLine(newLine);

            string name;
            string city;
            string state;
            string type;
            string overall;
            string morality;
            string saftey;
            string readMission;
            string experience;
            string effectiveness;
            string timeliness;
            string imaging;
            string heartAttackCost;
            string heartAttackQuality;
            string heartAttackValue;
            string heartFailureCost;
            string heartFailureQuality;
            string heartFailureValue;
            string pneumoniaCost;
            string pneumoniaQuality;
            string pneumoniaValue;
            string hipKneeCost;
            string hipKneeQuality;
            string hipKneeValue;

            int _overall;
            int _heartAttackCost;
            int _heartFailureCost;
            int _pneumoniaCost;
            int _hipKneeCost;

            getline(fullLine, name, ',');
            getline(fullLine, city, ',');
            getline(fullLine, state, ',');
            getline(fullLine, type, ',');
            getline(fullLine, overall, ',');
            getline(fullLine, morality, ',');
            getline(fullLine, saftey, ',');
            getline(fullLine, readMission, ',');
            getline(fullLine, experience, ',');
            getline(fullLine, effectiveness, ',');
            getline(fullLine, timeliness, ',');
            getline(fullLine, imaging, ',');
            getline(fullLine, heartAttackCost, ',');
            getline(fullLine, heartAttackQuality, ',');
            getline(fullLine, heartAttackValue, ',');
            getline(fullLine, heartFailureCost, ',');
            getline(fullLine, heartFailureQuality, ',');
            getline(fullLine, heartFailureValue, ',');
            getline(fullLine, pneumoniaCost, ',');
            getline(fullLine, pneumoniaQuality, ',');
            getline(fullLine, pneumoniaValue, ',');
            getline(fullLine, hipKneeCost, ',');
            getline(fullLine, hipKneeQuality, ',');
            getline(fullLine, hipKneeValue, ',');

            name.erase(0, 1);
            name.pop_back();

            city.erase(0, 1);
            city.pop_back();

            state.erase(0, 1);
            state.pop_back();

            type.erase(0, 1);
            type.pop_back();

            overall.erase(0, 1);
            overall.pop_back();

            morality.erase(0, 1);
            morality.pop_back();

            saftey.erase(0, 1);
            saftey.pop_back();

            readMission.erase(0, 1);
            readMission.pop_back();

            experience.erase(0, 1);
            experience.pop_back();

            effectiveness.erase(0, 1);
            effectiveness.pop_back();

            timeliness.erase(0, 1);
            timeliness.pop_back();

            imaging.erase(0, 1);
            imaging.pop_back();

            heartAttackCost.erase(0, 1);
            heartAttackCost.pop_back();

            heartAttackQuality.erase(0, 1);
            heartAttackQuality.pop_back();

            heartAttackValue.erase(0, 1);
            heartAttackValue.pop_back();

            heartFailureCost.erase(0, 1);
            heartFailureCost.pop_back();

            heartFailureQuality.erase(0, 1);
            heartFailureQuality.pop_back();

            heartFailureValue.erase(0, 1);
            heartFailureValue.pop_back();

            pneumoniaCost.erase(0, 1);
            pneumoniaCost.pop_back();

            pneumoniaQuality.erase(0, 1);
            pneumoniaQuality.pop_back();

            pneumoniaValue.erase(0, 1);
            pneumoniaValue.pop_back();

            hipKneeCost.erase(0, 1);
            hipKneeCost.pop_back();

            hipKneeQuality.erase(0, 1);
            hipKneeQuality.pop_back();

            hipKneeValue.erase(0, 1);
            hipKneeValue.pop_back();

            _overall = stoi(overall);
            _heartAttackCost = stoi(heartAttackCost);
            _heartFailureCost = stoi(heartFailureCost);
            _pneumoniaCost = stoi(pneumoniaCost);
            _hipKneeCost = stoi(hipKneeCost);

            Hospital h(name, city, state, type, _overall, morality, saftey, readMission, experience, effectiveness, timeliness, imaging, _heartAttackCost, heartAttackQuality, heartAttackValue, _heartFailureCost, heartFailureQuality, heartFailureValue, _pneumoniaCost, pneumoniaQuality, pneumoniaValue, _hipKneeCost, hipKneeQuality, hipKneeValue);

            hospitals.insert({ name, h });
        }
    }
}

void UFileInfo(string fileName, unordered_map<string, Hospital>& hospitals) {

    ifstream file(fileName);

    if (file.is_open()) {

        string line;
        getline(file, line);

        while (getline(file, line)) {

            string newLine;

            for (int i = 0; i < line.length(); i++) {
                if (line[i] == ',' && line[i - 1] != '"' && line[i + 1] != '"') {
                    continue;
                }
                newLine += line[i];
            }

            istringstream fullLine(newLine);

            string name;
            string city;
            string state;
            string type;
            string overall;
            string morality;
            string saftey;
            string readMission;
            string experience;
            string effectiveness;
            string timeliness;
            string imaging;
            string heartAttackCost;
            string heartAttackQuality;
            string heartAttackValue;
            string heartFailureCost;
            string heartFailureQuality;
            string heartFailureValue;
            string pneumoniaCost;
            string pneumoniaQuality;
            string pneumoniaValue;
            string hipKneeCost;
            string hipKneeQuality;
            string hipKneeValue;

            int _overall;
            int _heartAttackCost;
            int _heartFailureCost;
            int _pneumoniaCost;
            int _hipKneeCost;

            getline(fullLine, name, ',');
            getline(fullLine, city, ',');
            getline(fullLine, state, ',');
            getline(fullLine, type, ',');
            getline(fullLine, overall, ',');
            getline(fullLine, morality, ',');
            getline(fullLine, saftey, ',');
            getline(fullLine, readMission, ',');
            getline(fullLine, experience, ',');
            getline(fullLine, effectiveness, ',');
            getline(fullLine, timeliness, ',');
            getline(fullLine, imaging, ',');
            getline(fullLine, heartAttackCost, ',');
            getline(fullLine, heartAttackQuality, ',');
            getline(fullLine, heartAttackValue, ',');
            getline(fullLine, heartFailureCost, ',');
            getline(fullLine, heartFailureQuality, ',');
            getline(fullLine, heartFailureValue, ',');
            getline(fullLine, pneumoniaCost, ',');
            getline(fullLine, pneumoniaQuality, ',');
            getline(fullLine, pneumoniaValue, ',');
            getline(fullLine, hipKneeCost, ',');
            getline(fullLine, hipKneeQuality, ',');
            getline(fullLine, hipKneeValue, ',');

            name.erase(0, 1);
            name.pop_back();

            city.erase(0, 1);
            city.pop_back();

            state.erase(0, 1);
            state.pop_back();

            type.erase(0, 1);
            type.pop_back();

            overall.erase(0, 1);
            overall.pop_back();

            morality.erase(0, 1);
            morality.pop_back();

            saftey.erase(0, 1);
            saftey.pop_back();

            readMission.erase(0, 1);
            readMission.pop_back();

            experience.erase(0, 1);
            experience.pop_back();

            effectiveness.erase(0, 1);
            effectiveness.pop_back();

            timeliness.erase(0, 1);
            timeliness.pop_back();

            imaging.erase(0, 1);
            imaging.pop_back();

            heartAttackCost.erase(0, 1);
            heartAttackCost.pop_back();

            heartAttackQuality.erase(0, 1);
            heartAttackQuality.pop_back();

            heartAttackValue.erase(0, 1);
            heartAttackValue.pop_back();

            heartFailureCost.erase(0, 1);
            heartFailureCost.pop_back();

            heartFailureQuality.erase(0, 1);
            heartFailureQuality.pop_back();

            heartFailureValue.erase(0, 1);
            heartFailureValue.pop_back();

            pneumoniaCost.erase(0, 1);
            pneumoniaCost.pop_back();

            pneumoniaQuality.erase(0, 1);
            pneumoniaQuality.pop_back();

            pneumoniaValue.erase(0, 1);
            pneumoniaValue.pop_back();

            hipKneeCost.erase(0, 1);
            hipKneeCost.pop_back();

            hipKneeQuality.erase(0, 1);
            hipKneeQuality.pop_back();

            hipKneeValue.erase(0, 1);
            hipKneeValue.pop_back();

            _overall = stoi(overall);
            _heartAttackCost = stoi(heartAttackCost);
            _heartFailureCost = stoi(heartFailureCost);
            _pneumoniaCost = stoi(pneumoniaCost);
            _hipKneeCost = stoi(hipKneeCost);

            Hospital h(name, city, state, type, _overall, morality, saftey, readMission, experience, effectiveness, timeliness, imaging, _heartAttackCost, heartAttackQuality, heartAttackValue, _heartFailureCost, heartFailureQuality, heartFailureValue, _pneumoniaCost, pneumoniaQuality, pneumoniaValue, _hipKneeCost, hipKneeQuality, hipKneeValue);

            hospitals.insert({ name, h });
        }
    }
}




int main() {
    //clock_t start = clock();

    map<string, Hospital> _hospitals;
    unordered_map<string, Hospital> hospital$;

    bool locationFlag = false, facilityFlag = false, ratingFlag = false; //know what menus to print based off of what filters have already been done
    ifstream hospitalFile("hospitals.csv");
    cout << "Hello and welcome to Better Care:" << endl;
    cout << "---------------------------------" << endl;

    cout << "Please select which data structure you would like to use? " << endl;
    cout << "1. Ordered Map" << endl << "2. Unordered Map" << endl;

    int dataStructure = 0;
    cin >> dataStructure;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        dataStructure = 0;
    }

    while (dataStructure != 1 && dataStructure != 2) {
        cout << "Please enter either a 1 or a 2." << endl;
        cin >> dataStructure;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            dataStructure = 0;
        }
    }

    if (dataStructure == 1) { //load csv into ordered map

        FileInfo("hospitals.csv", _hospitals);
    }
    else if (dataStructure == 2) { //load csv into unordered map

        UFileInfo("hospitals.csv", hospital$);
       //hospital$ = FileInfoUnordered("hospitals.csv");
       //cout << "Load: " << hospital$.load << endl;
    }


    cout << "What medical procedure are you looking into today?" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "1. Heart Attack" << endl;
    cout << "2. Heart Failure" << endl;
    cout << "3. Pneumonia" << endl;
    cout << "4. Hip or knee conditions " << endl;

    int filterCity = 0;
    int procedure = 0;
    cin >> procedure;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        procedure = 0;
    }

    while (procedure != 1 && procedure != 2 && procedure != 3 && procedure != 4) {
        cout << "Please enter either a 1, 2, 3, or 4" << endl;
        cin >> procedure;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            procedure = 0;
        }
    }

    cout << "How would you like filter the results" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Filter by location" << endl;
    cout << "2. Filter by facility" << endl;
    cout << "3. Filter by rating" << endl;

    int filter = 0;
    cin >> filter;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        filter = 0;
    }

    while (filter != 1 && filter != 2 && filter != 3) {
        cout << "Please enter either a 1, 2, or 3" << endl;
        cin >> filter;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            filter = 0;
        }
    }

    while (filter != 4) {
        if (filter == 1) { //filter by location
            cout << "Input state abbreviation (capitalized): ";

            string abbreviation = "";
            cin >> abbreviation;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                abbreviation = "";
            }
            while (abbreviation != "AL" && abbreviation != "AK" && abbreviation != "AZ" && abbreviation != "AR" && abbreviation != "CA" && abbreviation != "CO" && abbreviation != "CT" && abbreviation != "DE" && abbreviation != "FL" && abbreviation != "GA" && abbreviation != "HI" && abbreviation != "ID" && abbreviation != "IL" && abbreviation != "IN" && abbreviation != "IA" && abbreviation != "KS" && abbreviation != "KY" && abbreviation != "LA" && abbreviation != "ME" && abbreviation != "MD" && abbreviation != "MA" && abbreviation != "MI" && abbreviation != "MN" && abbreviation != "MS" && abbreviation != "MO" && abbreviation != "MT" && abbreviation != "NE" && abbreviation != "NV" && abbreviation != "NH" && abbreviation != "NJ" && abbreviation != "NM" && abbreviation != "NY" && abbreviation != "NC" && abbreviation != "ND" && abbreviation != "OH" && abbreviation != "OK" && abbreviation != "OR" && abbreviation != "PA" && abbreviation != "RI" && abbreviation != "SC" && abbreviation != "SD" && abbreviation != "TN" && abbreviation != "TX" && abbreviation != "UT" && abbreviation != "VT" && abbreviation != "VA" && abbreviation != "WA" && abbreviation != "WV" && abbreviation != "WI" && abbreviation != "WY") {
                cout << "Please enter a valid state abbriviation." << endl;
                cin >> abbreviation;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    abbreviation = "";
                }
            }
            if (dataStructure == 1) {
                _hospitals = filterByState(_hospitals, abbreviation);
            }
            else if (dataStructure == 2) {
                hospital$ = UfilterByState(hospital$, abbreviation);
            }

            locationFlag = true;

            cout << "Would you like to filter by city?" << endl;
            cout << "---------------------------------" << endl;
            cout << "1. Yes" << endl;
            cout << "2. No" << endl;

            cin >> filterCity;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                filterCity = 0;
            }
            while (filterCity != 1 && filterCity != 2) {
                cout << "Please input either a 1 or 2." << endl;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filterCity = 0;
                }
            }
            if (filterCity == 1) {
                cout << "Input city name: ";
                string city = "";
                cin >> city;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    city = "";
                }
                while (city.length() == 0) {
                    cout << "Please input a valid city name." << endl;
                    cin >> city;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        city = "";
                    }
                }
                if (dataStructure == 1) {
                    filterByCity(_hospitals, city);
                }
                else if (dataStructure == 2) {
                    UfilterByCity(hospital$, city);
                }

            }
            if (ratingFlag == false && facilityFlag == false && locationFlag == true) {
                cout << "What would you like to do now?" << endl;
                cout << "------------------------------" << endl;
                cout << "2. Filter by facility" << endl;
                cout << "3. Filter by rating" << endl;
                cout << "4. Display results" << endl;

                cin >> filter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filter = 0;
                }

                while (filter != 4 && filter != 2 && filter != 3) {
                    cout << "Please enter either a 2, 3, or 4" << endl;
                    cin >> filter;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        filter = 0;
                    }
                }
            }
            else if (ratingFlag == false && facilityFlag == true && locationFlag == true) {
                cout << "What would you like to do now?" << endl;
                cout << "------------------------------" << endl;
                cout << "3. Filter by rating" << endl;
                cout << "4. Display results" << endl;

                cin >> filter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filter = 0;
                }

                while (filter != 4 && filter != 3) {
                    cout << "Please enter either a 3 or 4" << endl;
                    cin >> filter;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        filter = 0;
                    }
                }
            }
            else if (ratingFlag == true && facilityFlag == false && locationFlag == true) {
                cout << "What would you like to do now?" << endl;
                cout << "------------------------------" << endl;
                cout << "2. Filter by facilty" << endl;
                cout << "4. Display results" << endl;

                cin >> filter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filter = 0;
                }

                while (filter != 4 && filter != 2) {
                    cout << "Please enter either a 2 or 4" << endl;
                    cin >> filter;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        filter = 0;
                    }
                }
            }
            else if (locationFlag == true && facilityFlag == true && ratingFlag == true) {
                filter = 4;
            }


        }

        else if (filter == 2) { //filter by facility
            cout << "What ype of facility are you looking for?" << endl;
            cout << "-----------------------------------------" << endl;
            cout << "1. Government" << endl;
            cout << "2. Private" << endl;
            cout << "3. Proprietary" << endl;
            cout << "4. Church" << endl;
            cout << "5. Unknown" << endl;

            int facility = 0;
            cin >> facility;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                facility = 0;
            }
            while (facility != 1 && facility != 2 && facility != 3 && facility != 4 && facility != 5) {
                cout << "Please input valid facility type." << endl;
                cin >> facility;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    facility = 0;
                }
            }
            string fac = "";
            if (facility == 1) {
                fac = "Government";

            }
            else if (facility == 2) {
                fac = "Private";

            }
            else if (facility == 3) {
                fac = "Proprietary";

            }
            else if (facility == 4) {
                fac = "Church";
            }
            else if (facility == 5) {
                fac = "unknkown";
            }
            if (dataStructure == 1) {
                filterByFacility(_hospitals, fac);
            }
            else if (dataStructure == 2) {
                UfilterByFacility(hospital$, fac);
            }
            facilityFlag = true;


            if (ratingFlag == false && facilityFlag == true && locationFlag == false) {
                cout << "What would you like to do now?" << endl;
                cout << "------------------------------" << endl;
                cout << "1. Filter by location" << endl;
                cout << "3. Filter by rating" << endl;
                cout << "4. Display results" << endl;

                cin >> filter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filter = 0;
                }

                while (filter != 4 && filter != 1 && filter != 3) {
                    cout << "Please enter either a 1, 3, or 4" << endl;
                    cin >> filter;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        filter = 0;
                    }
                }
            }
            else if (ratingFlag == false && facilityFlag == true && locationFlag == true) {
                cout << "What would you like to do now?" << endl;
                cout << "------------------------------" << endl;
                cout << "3. Filter by rating" << endl;
                cout << "4. Display results" << endl;

                cin >> filter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filter = 0;
                }

                while (filter != 4 && filter != 3) {
                    cout << "Please enter either a 3 or 4" << endl;
                    cin >> filter;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        filter = 0;
                    }
                }
            }
            else if (ratingFlag == true && facilityFlag == true && locationFlag == false) {
                cout << "What would you like to do now?" << endl;
                cout << "------------------------------" << endl;
                cout << "1. Filter by location" << endl;
                cout << "4. Display results" << endl;

                cin >> filter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    filter = 0;
                }

                while (filter != 4 && filter != 1) {
                    cout << "Please enter either a 1 or 4" << endl;
                    cin >> filter;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        filter = 0;
                    }
                }
            }
            else if (locationFlag == true && facilityFlag == true && ratingFlag == true) {
                filter = 4;
            }
        }


        else if (filter == 3) {//filter by rating

            bool safteyFlag = false, mortalityFlag = false, experienceFlag = false;
            int loop = 1;

            cout << "What ratings would you like to filter by?" << endl;
            cout << "-----------------------------------------" << endl;
            cout << "1. Saftey" << endl;
            cout << "2. Mortality" << endl;
            cout << "3. Experience" << endl;

            int ratingFilter = 0;
            cin >> ratingFilter;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                ratingFilter = 0;
            }

            while (ratingFilter != 1 && ratingFilter != 2 && ratingFilter != 3) {
                cout << "Please enter either a 1, 2, or 3" << endl;
                cin >> ratingFilter;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    ratingFilter = 0;
                }
            }
            while (loop == 1) {


                if (ratingFilter == 1) { //saftey
                    cout << "How would you like to filter hospitals average saftey compared national hospital's saftey" << endl;
                    cout << "------------------------------------------------------------------------------------------" << endl;
                    cout << "1. Above" << endl;
                    cout << "2. Same" << endl;
                    cout << "3. Below" << endl;
                    cout << "4. Unknown" << endl;

                    int saftey = 0;
                    cin >> saftey;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        saftey = 0;
                    }

                    while (saftey != 1 && saftey != 2 && saftey != 3 && saftey != 4) {
                        cout << "Please enter either a 1, 2, 3, or 4" << endl;
                        cin >> saftey;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            saftey = 0;
                        }
                    }
                    string safe = "";
                    if (saftey == 1) {
                        safe = "Above";

                    }
                    else if (saftey == 2) {
                        safe = "Same";

                    }
                    else if (saftey == 3) {
                        safe = "Below";

                    }
                    else if (saftey == 4) {
                        safe = "Unknown";
                    }
                    if (dataStructure == 1) {
                        filterBySaftey(_hospitals, safe);
                    }
                    else if (dataStructure == 2) {
                        UfilterBySaftey(hospital$, safe);
                    }
                    safteyFlag = true;
                    ratingFlag = true;

                    if (safteyFlag == false || mortalityFlag == false || experienceFlag == false) {
                        cout << "Would you like to continue filtering by rating?" << endl;
                        cout << "-----------------------------------------------" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> loop;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            loop = 0;
                        }

                        while (loop != 1 && loop != 2) {
                            cout << "Please enter either a 1 or 2" << endl;
                            cin >> loop;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                loop = 0;
                            }
                        }
                    }


                    if (loop == 1) {
                        if (safteyFlag == true && mortalityFlag == false && experienceFlag == false) { //you have the option of either mortality or experience
                            cout << "What ratings would you like to filter by?" << endl;
                            cout << "-----------------------------------------" << endl;
                            cout << "2. Mortality" << endl;
                            cout << "3. Experience" << endl;

                            cin >> ratingFilter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                ratingFilter = 0;
                            }

                            while (ratingFilter != 2 && ratingFilter != 3) {
                                cout << "Please enter either a 2 or 3" << endl;
                                cin >> ratingFilter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    ratingFilter = 0;
                                }
                            }
                            if (safteyFlag == true && mortalityFlag == true && experienceFlag == true) {
                                loop = 2;
                            }


                        }
                        else if (safteyFlag == true && mortalityFlag == false && experienceFlag == true) { //only mortality
                            ratingFilter = 2;
                        }
                        else if (safteyFlag == true && mortalityFlag == true && experienceFlag == false) {//only experience
                            ratingFilter = 3;
                        }


                    }
                    else if (loop == 2) {
                        if (ratingFlag == true && facilityFlag == false && locationFlag == false) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "1. Filter by location" << endl;
                            cout << "2. Filter by facility" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1 && filter != 2) {
                                cout << "Please enter either a 1, 3, or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (ratingFlag == true && facilityFlag == true && locationFlag == false) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "1. Filter by location" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1) {
                                cout << "Please enter either a 1 or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (ratingFlag == true && facilityFlag == false && locationFlag == true) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "2. Filter by facility" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1) {
                                cout << "Please enter either a 2 or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (locationFlag == true && facilityFlag == true && ratingFlag == true) {
                            filter = 4;
                        }

                    }

                }

                else if (ratingFilter == 2) {//mortality
                    cout << "How would you like to filter hospitals average mortality compared national hospital's mortality" << endl;
                    cout << "------------------------------------------------------------------------------------------" << endl;
                    cout << "1. Above" << endl;
                    cout << "2. Same" << endl;
                    cout << "3. Below" << endl;
                    cout << "4. Unknown" << endl;

                    int mortality = 0;
                    cin >> mortality;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        mortality = 0;
                    }

                    while (mortality != 1 && mortality != 2 && mortality != 3 && mortality != 4) {
                        cout << "Please enter either a 1, 2, 3, or 4" << endl;
                        cin >> mortality;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            mortality = 0;
                        }
                    }
                    string mort = "";
                    if (mortality == 1) {
                        mort = "Above";

                    }
                    else if (mortality == 2) {
                        mort = "Same";

                    }
                    else if (mortality == 3) {
                        mort = "Below";

                    }
                    else if (mortality == 4) {
                        mort = "Unknown";
                    }
                    if (dataStructure == 1) {
                        filterByMortality(_hospitals, mort);
                    }
                    else if (dataStructure == 2) {
                        UfilterByMortality(hospital$, mort);
                    }
                    mortalityFlag = true;
                    ratingFlag = true;

                    if (safteyFlag == false || mortalityFlag == false || experienceFlag == false) {
                        cout << "Would you like to continue filtering by rating?" << endl;
                        cout << "-----------------------------------------------" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> loop;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            loop = 0;
                        }

                        while (loop != 1 && loop != 2) {
                            cout << "Please enter either a 1 or 2" << endl;
                            cin >> loop;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                loop = 0;
                            }
                        }
                    }
                    if (safteyFlag == true && mortalityFlag == true && experienceFlag == true) {
                        loop = 2;
                    }

                    if (loop == 1) {
                        if (safteyFlag == false && mortalityFlag == true && experienceFlag == false) { //you have the option of either mortality or experience
                            cout << "What ratings would you like to filter by?" << endl;
                            cout << "-----------------------------------------" << endl;
                            cout << "1. Saftey" << endl;
                            cout << "3. Experience" << endl;

                            cin >> ratingFilter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                ratingFilter = 0;
                            }

                            while (ratingFilter != 1 && ratingFilter != 3) {
                                cout << "Please enter either a 2 or 3" << endl;
                                cin >> ratingFilter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    ratingFilter = 0;
                                }
                            }
                        }
                        else if (safteyFlag == true && mortalityFlag == true && experienceFlag == false) { //only mortality
                            ratingFilter = 3;
                        }
                        else if (safteyFlag == false && mortalityFlag == true && experienceFlag == true) {//only experience
                            ratingFilter = 1;
                        }
                        else if (safteyFlag == true && mortalityFlag == true && experienceFlag == true) {
                            loop = 2;

                        }
                    }
                    else if (loop == 2) {
                        if (ratingFlag == true && facilityFlag == false && locationFlag == false) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "1. Filter by location" << endl;
                            cout << "2. Filter by facility" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1 && filter != 2) {
                                cout << "Please enter either a 1, 3, or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (ratingFlag == true && facilityFlag == true && locationFlag == false) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "1. Filter by location" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1) {
                                cout << "Please enter either a 1 or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (ratingFlag == true && facilityFlag == false && locationFlag == true) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "2. Filter by facility" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1) {
                                cout << "Please enter either a 2 or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (locationFlag == true && facilityFlag == true && ratingFlag == true) {
                            filter = 4;
                        }
                    }


                }

                else if (ratingFilter == 3) {//experience
                    cout << "How would you like to filter hospitals average experience compared national hospital's experience" << endl;
                    cout << "------------------------------------------------------------------------------------------" << endl;
                    cout << "1. Above" << endl;
                    cout << "2. Same" << endl;
                    cout << "3. Below" << endl;
                    cout << "4. Unknown" << endl;

                    int experience = 0;
                    cin >> experience;

                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        experience = 0;
                    }

                    while (experience != 1 && experience != 2 && experience != 3 && experience != 4) {
                        cout << "Please enter either a 1, 2, 3, or 4" << endl;
                        cin >> experience;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            experience = 0;
                        }
                    }
                    string exp = "";
                    if (experience == 1) {
                        exp = "Above";

                    }
                    else if (experience == 2) {
                        exp = "Same";

                    }
                    else if (experience == 3) {
                        exp = "Below";

                    }
                    else if (experience == 4) {
                        exp = "Unknown";
                    }
                    if (dataStructure == 1) {
                        filterByExperience(_hospitals, exp);
                    }
                    else if (dataStructure == 2) {
                        UfilterByExperience(hospital$, exp);
                    }
                    experienceFlag = true;
                    ratingFlag = true;



                    if (safteyFlag == false || mortalityFlag == false || experienceFlag == false) {
                        cout << "Would you like to continue filtering by rating?" << endl;
                        cout << "-----------------------------------------------" << endl;
                        cout << "1. Yes" << endl;
                        cout << "2. No" << endl;
                        cin >> loop;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');
                            loop = 0;
                        }

                        while (loop != 1 && loop != 2) {
                            cout << "Please enter either a 1 or 2" << endl;
                            cin >> loop;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                loop = 0;
                            }
                        }
                    }
                    if (safteyFlag == true && mortalityFlag == true && experienceFlag == true) {
                        loop = 2;
                    }
                    if (loop == 1) {
                        if (safteyFlag == false && mortalityFlag == false && experienceFlag == true) { //you have the option of either mortality or experience
                            cout << "What ratings would you like to filter by?" << endl;
                            cout << "-----------------------------------------" << endl;
                            cout << "1. Saftey" << endl;
                            cout << "2. Mortality" << endl;

                            cin >> ratingFilter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                ratingFilter = 0;
                            }

                            while (ratingFilter != 1 && ratingFilter != 2) {
                                cout << "Please enter either a 1 or 2" << endl;
                                cin >> ratingFilter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    ratingFilter = 0;
                                }
                            }
                            if (safteyFlag == true && mortalityFlag == true && experienceFlag == true) {
                                loop = 2;
                            }


                        }
                        else if (safteyFlag == true && mortalityFlag == false && experienceFlag == true) { //only mortality
                            ratingFilter = 2;
                        }
                        else if (safteyFlag == false && mortalityFlag == true && experienceFlag == true) {//only experience
                            ratingFilter = 1;
                        }


                    }
                    if (loop == 2) {
                        if (ratingFlag == true && facilityFlag == false && locationFlag == false) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "1. Filter by location" << endl;
                            cout << "2. Filter by facility" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1 && filter != 2) {
                                cout << "Please enter either a 1, 3, or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (ratingFlag == true && facilityFlag == true && locationFlag == false) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "1. Filter by location" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1) {
                                cout << "Please enter either a 1 or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (ratingFlag == true && facilityFlag == false && locationFlag == true) {
                            cout << "What would you like to do now?" << endl;
                            cout << "------------------------------" << endl;
                            cout << "2. Filter by facility" << endl;
                            cout << "4. Display results" << endl;

                            cin >> filter;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                filter = 0;
                            }

                            while (filter != 4 && filter != 1) {
                                cout << "Please enter either a 2 or 4" << endl;
                                cin >> filter;
                                if (cin.fail()) {
                                    cin.clear();
                                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                    filter = 0;
                                }
                            }
                        }
                        else if (locationFlag == true && facilityFlag == true && ratingFlag == true) {

                            filter = 4;
                        }
                    }


                }
            }
        }
        if (filter == 4) {
            if (dataStructure == 1) {
                for (auto iter = _hospitals.begin(); iter != _hospitals.end(); iter++) {

                    cout << "Name: " << iter->first << endl;

                    if (filterCity == 2) {
                        cout << "City: " << iter->second.city << endl;
                    }
                    cout << "------------------------------" << endl;
                    if (iter->second.overall == -1) {
                        cout << "Hospital's Overall Rating: N/A" << endl;
                    }
                    else {
                        cout << "Hospital's Overall Rating: " << iter->second.overall << endl;
                    }
                    if (procedure == 1) {
                        cout << "Heart Attack Cost: $" << iter->second.heartAttackCost << endl;
                        cout << "Price compared to national average: " << iter->second.heartAttackValue << endl;
                        cout << "Procedure quality: " << iter->second.heartAttackQuality << endl;
                    }
                    else if (procedure == 2) {
                        cout << "Heart Failure Cost: $" << iter->second.heartFailureCost << endl;
                        cout << "Price compared to national average: " << iter->second.heartFailureValue << endl;
                        cout << "Procedure quality: " << iter->second.heartFailureQuality << endl;
                    }
                    else if (procedure == 3) {
                        cout << "Pneumonia Cost: $" << iter->second.pneumoniaCost << endl;
                        cout << "Price compared to national average: " << iter->second.pneumoniaValue << endl;
                        cout << "Procedure quality: " << iter->second.pneumoniaQuality << endl;
                    }
                    else if (procedure == 4) {
                        cout << "Hip or knee Cost: $" << iter->second.hipKneeCost << endl;
                        cout << "Price compared to national average: " << iter->second.hipKneeValue << endl;
                        cout << "Procedure quality: " << iter->second.hipKneeCost << endl;
                    }
                    cout << endl;

                }
            }
            else if (dataStructure == 2) {
                for (auto iter = hospital$.begin(); iter != hospital$.end(); iter++) {

                    cout << "Name: " << iter->first << endl;

                    if (filterCity == 2) {
                        cout << "City: " << iter->second.city << endl;
                    }
                    cout << "------------------------------" << endl;
                    if (iter->second.overall == -1) {
                        cout << "Hospital's Overall Rating: N/A" << endl;
                    }
                    else {
                        cout << "Hospital's Overall Rating: " << iter->second.overall << endl;
                    }
                    if (procedure == 1) {
                        cout << "Heart Attack Cost: $" << iter->second.heartAttackCost << endl;
                        cout << "Price compared to national average: " << iter->second.heartAttackValue << endl;
                        cout << "Procedure quality: " << iter->second.heartAttackQuality << endl;
                    }
                    else if (procedure == 2) {
                        cout << "Heart Failure Cost: $" << iter->second.heartFailureCost << endl;
                        cout << "Price compared to national average: " << iter->second.heartFailureValue << endl;
                        cout << "Procedure quality: " << iter->second.heartFailureQuality << endl;
                    }
                    else if (procedure == 3) {
                        cout << "Pneumonia Cost: $" << iter->second.pneumoniaCost << endl;
                        cout << "Price compared to national average: " << iter->second.pneumoniaValue << endl;
                        cout << "Procedure quality: " << iter->second.pneumoniaQuality << endl;
                    }
                    else if (procedure == 4) {
                        cout << "Hip or knee Cost: $" << iter->second.hipKneeCost << endl;
                        cout << "Price compared to national average: " << iter->second.hipKneeValue << endl;
                        cout << "Procedure quality: " << iter->second.hipKneeCost << endl;
                    }
                    cout << endl;

                }
            }
        }
    }
    //cout << endl;
    //printf("Time elapsed: %.2fs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;
    cout << "Time elapsed: " << duration.count() << "s" << endl;
}