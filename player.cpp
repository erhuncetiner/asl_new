#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>
//#include "stdafx.h"
#include "player.h"

using namespace std;

player::player(){

//	objectiveActive = true;
//	objectiveReached = true;
//	gold = 50;
//	objectiveName = "Get to 100 gold";
//	cout << "What is your name?" << endl;
//	cin >> name;
	objective(objectiveActive, objectiveReached, gold, objectiveName);
}

void player::objective(bool objectiveActive, bool objectiveReached, double gold, string& objectiveName){
	
	objectiveActive = true;
	objectiveReached = false;
	gold = 20;
	objectiveName = "Get to 100 gold";
	cout << objectiveName << endl << endl;


}

void player::checkSuccess(){
	if (gold >= 100){
		cout << "You have succesfully completed the mission " << objectiveName << "." << endl << endl;
		objectiveActive = false;
		objectiveReached = true;
		cout << "You now have " << gold << " gold." << endl;
	}
	else {
		cout << "You still have less than 100 gold." << endl;
	}
	
}

