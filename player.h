#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>

#pragma once

using namespace std;

class player{
	public:
		double bid;
		double foodStock;
		double woodStock;
		double gold;
		
		string name;
		string objectiveName;
		bool objectiveActive;
		bool objectiveReached;
		
		player();
		
		
		void objective(bool objectiveActive, bool objectiveReached, double gold, string& objectiveName);
		void checkSuccess();
};



