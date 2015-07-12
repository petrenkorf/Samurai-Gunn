//============================================================================
// Name        : teste.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Engine/CGameEngine.h"

using namespace std;

int main() {
	Engine::CGameEngine* engine = new Engine::CGameEngine();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	engine->run();
	delete engine;
	return 0;
}
