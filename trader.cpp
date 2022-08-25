#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>

#include "trader.h"

trader::trader(double gold, double foodAmount, double woodAmount, double bid){
	
//	gold = 6;
	globalPrices();
	desireToBuyFood(foodAmount, gold, bid);
	weBuyFood(gold,foodAmount);

	
//	desireToBuyWood(woodAmount, gold);
//	desireToSellFood(foodAmount, gold);
//	desireToSellWood(woodAmount, gold);
	
}
void trader::globalPrices(){
	globalFoodPrice = 300;
	globalWoodPrice = 150;
}
void trader::desireToBuyFood(double foodAmount, double gold, double bid){
	
//	globalFoodPrice = 300;
//	globalWoodPrice = 150;
	DBF = bid*foodAmount/globalFoodPrice;
	
	cout << DBF  << endl;
	cout << globalFoodPrice  << endl;
	cout << foodAmount  << endl;
	if (gold > 0){
	cout << "Yes. We buy food." << endl;
}
}

void trader::weBuyFood(double gold, double foodAmount){
	buyOfferFood = DBF/100;
		cout << "I can pay " << buyOfferFood << " for your food." << endl;

}
	
		

