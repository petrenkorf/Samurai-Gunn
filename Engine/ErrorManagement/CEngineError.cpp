/*
 * CEngineError.cpp
 *
 *  Created on: May 8, 2015
 *      Author: petris
 */

#include "CEngineError.h"

namespace Engine {

CEngineError::CEngineError() {
	// TODO Auto-generated constructor stub

}

CEngineError::~CEngineError() {
	// TODO Auto-generated destructor stub
}

void CEngineError::showError() {
	std::cout << SDL_GetError();
}

} /* namespace Engine */
