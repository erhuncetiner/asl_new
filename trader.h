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
//struct inventory{
//	
//	double gold;
//	string food;
//	double foodAmount;
//	string wood;
//	double woodAmount;
//	
////	double DBF;
////	double DSF;
////	double DBW;
////	double DSW;
//	
//}trader_01;
class trader{
	private:
		double foodBuyPrice;
		double foodSellPrice;
		double woodBuyPrice;
		double woodSellPrice;
		
	public:
		string name;
		
		double DBF;
		double DSF;
		double DBW;
		double DSW;
		
		double gold;
		string food;
		double foodAmount;
		string wood;
		double woodAmount;
		
		double globalFoodPrice;
		double globalWoodPrice;
		
		double buyOfferFood;
		double sellOfferFood;
		
		double bid;

		trader (double gold, double foodAmount, double woodAmount, double bid);
		
		void desireToBuyFood (double foodAmount, double gold, double bid);
		void desireToBuyWood (double woodAmount, double gold);
		void desireToSellFood (double foodAmount, double gold);
		void desireToSellWood (double woodAmount, double gold);
		
		void globalPrices();
		
		void weBuyFood(double gold, double foodAmount);
//		double getDBF() {return trader_01.DBF;}
//		double getDSF() {return trader_01.DSF;}
//		double getDBW() {return trader_01.DBW;}
//		double getDSW() {return trader_01.DSW;}
};

