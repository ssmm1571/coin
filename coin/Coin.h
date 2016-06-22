#include <iostream>
#include <string>
#include <time.h> 
using namespace std;
 
class Coin 
{
private: 
    string sideUp;

public:
    Coin() 
    {
		toss();
    }
	void toss() {
		int value = rand() % 2;
		if (value == 0)
			this->sideUp = "head";
        else
            this->sideUp = "tail";
	}
	void BiasedTos() {
		int value = rand() % 4;
		if (value >= 0 && value <=2)
			this->sideUp = "head";
		else 
            this->sideUp = "tail";
	}
	string getSideUp() {
        return sideUp;
    }
}; 