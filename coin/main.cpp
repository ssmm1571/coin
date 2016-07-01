#include <iostream>
#include "Coin.h"
#include <time.h> 
using namespace std;

int main(int argc, char*argv[])
{
	srand(time(0));
    Coin newCoin;
	int headCount = 0;
	int tailCount = 0;
	cout << "/-------Toss()------/ " << endl;
    for (int i = 0; i < 1000; i++) {
        newCoin.toss();
        if (newCoin.getSideUp() == "head") {
            headCount++;
        }
    }
	cout << "head: " << headCount << endl;
	cout << "tail: " << 1000 - headCount << endl;
	cout << "/-------BiasedTos()------/ " << endl;
	for (int i = 0; i < 1000; i++) {
        newCoin.BiasedTos();
        if (newCoin.getSideUp() == "tail") {
            tailCount++;
        }
    }
	cout << "head: " << 1000 - tailCount << endl;
	cout << "tail: " << tailCount << endl;

	cout << "/-------Game------/ " << endl;
	Coin quarter;
	Coin dime;
	Coin nickel;
	float cash = 0;
	do {
		quarter.toss();
		if (quarter.getSideUp() == "head") {
			cout << "quarter: 0.25" << endl;
			cash += 0.25;
		}
		else 
			cout << "quarter: tails" << endl;
		dime.toss();
		if (dime.getSideUp() == "head") {
			cout << "dime: 0.10" << endl;
			cash += 0.10;
		}
		else 
			cout << "dime: tails" << endl;
		nickel.toss();
		if (nickel.getSideUp() == "head") {
			cout << "nickel: 0.01" << endl;
			cash += 0.01;
		}
		else 
			cout << "nickel: tails" << endl;
	} while (cash < 1);
	if (cash == 1)
		cout << "You win! Your cash: " << cash << endl;
	else
		cout << "You lose! Your cash: " << cash << endl;
	system("pause");
    return 0;
}
