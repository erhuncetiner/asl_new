#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>

#include "trader.h"

trader::trader(double gold, double foodAmount, double woodAmount){
	
//	gold = 6;
	desireToBuyFood(foodAmount, gold);
	

	
//	desireToBuyWood(woodAmount, gold);
//	desireToSellFood(foodAmount, gold);
//	desireToSellWood(woodAmount, gold);
	
}

void trader::desireToBuyFood(double foodAmount, double gold){
	if (gold > 0);
	cout << "Yes. We buy food." << endl;
	globalFoodPrice = 300;
	globalWoodPrice = 150;
	foodBuyPrice = globalFoodPrice/foodAmount;
	
	cout << foodBuyPrice  << endl;
	cout << globalFoodPrice  << endl;
	cout << foodAmount  << endl;
	
	
	cout << "I can pay " << foodBuyPrice << " for your food." << endl;
	
	
}
