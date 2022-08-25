#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sstream>
#include <cmath>
#include <iostream>

#include "trader.h"
#include "player.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//using namespace std;
int main(int argc, char** argv) {
	double bid = 5;
		
	player player_01;
	trader merchant_01(10,10,10,bid);
	trader merchant_02(20,30,30,bid);
	player_01.gold = 100;
	player_01.checkSuccess();
	return 0;
}
