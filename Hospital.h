#pragma once
#include <iostream>
using namespace std;

struct Hospital {
	string name;
	string city;
	string state;
	string type;
	int overall;
	string morality;
	string saftey;
	string readMission;
	string experience;
	string effectiveness;
	string timeliness;
	string imaging;
	int heartAttackCost;
	string heartAttackQuality;
	string heartAttackValue;
	int heartFailureCost;
	string heartFailureQuality;
	string heartFailureValue;
	int pneumoniaCost;
	string pneumoniaQuality;
	string pneumoniaValue;
	int hipKneeCost;
	string hipKneeQuality;
	string hipKneeValue;

	Hospital() {
		name = "N/A";
		city = "N/A";
		state = "N/A";
		type = "N/A";
		overall = 0;
		morality = "N/A";
		saftey = "N/A";
		readMission = "N/A";
		experience = "N/A";
		effectiveness = "N/A";
		timeliness = "N/A";
		imaging = "N/A";
		heartAttackCost = 0;
		heartAttackQuality = "N/A";
		heartAttackValue = "N/A";
		heartFailureCost = 0;
		heartFailureQuality = "N/A";
		heartFailureValue = "N/A";
		pneumoniaCost = 0;
		pneumoniaQuality = "N/A";
		pneumoniaValue = "N/A";
		hipKneeCost = 0;
		hipKneeQuality = "N/A";
		hipKneeValue = "N/A";
	}

	Hospital(string name,
		string city,
		string state,
		string type,
		int overall,
		string morality,
		string saftey,
		string readMission,
		string experience,
		string effectiveness,
		string timeliness,
		string imaging,
		int heartAttackCost,
		string heartAttackQuality,
		string heartAttackValue,
		int heartFailureCost,
		string heartFailureQuality,
		string heartFailureValue,
		int pneumoniaCost,
		string pneumoniaQuality,
		string pneumoniaValue,
		int hipKneeCost,
		string hipKneeQuality,
		string hipKneeValue) {
		this->name = name;
		this->city = city;
		this->state = state;
		this->type = type;
		this->overall = overall;
		this->morality = morality;
		this->saftey = saftey;
		this->readMission = readMission;
		this->experience = experience;
		this->effectiveness = effectiveness;
		this->timeliness = timeliness;
		this->imaging = imaging;
		this->heartAttackCost = heartAttackCost;
		this->heartAttackQuality = heartAttackQuality;
		this->heartAttackValue = heartAttackValue;
		this->heartFailureCost = heartFailureCost;
		this->heartFailureQuality = heartFailureQuality;
		this->heartFailureValue = heartFailureValue;
		this->pneumoniaCost = pneumoniaCost;
		this->pneumoniaQuality = pneumoniaQuality;
		this->pneumoniaValue = pneumoniaValue;
		this->hipKneeCost = hipKneeCost;
		this->hipKneeQuality = hipKneeQuality;
		this->hipKneeValue = hipKneeValue;
	}
};