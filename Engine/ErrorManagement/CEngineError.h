/*
 * CEngineError.h
 *
 *  Created on: May 8, 2015
 *      Author: petris
 */

#ifndef ENGINE_ERRORMANAGEMENT_CENGINEERROR_H_
#define ENGINE_ERRORMANAGEMENT_CENGINEERROR_H_

#include <iostream>
#include <SDL2/SDL.h>

namespace Engine {

class CEngineError {
public:
	CEngineError();
	virtual ~CEngineError();

	void showError();
};

} /* namespace Engine */

#endif /* ENGINE_ERRORMANAGEMENT_CENGINEERROR_H_ */
