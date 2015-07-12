/*
 * CGameEngine.h
 *
 *  Created on: May 8, 2015
 *      Author: petris
 */

#ifndef ENGINE_CGAMEENGINE_H_
#define ENGINE_CGAMEENGINE_H_

#include "ErrorManagement/CEngineError.h"
#include "Window/CWindow.h"
#include <iostream>
#include "ResourceManagement/CResourcesManager.h"

namespace Engine {

class CGameEngine {
	private:
		bool isRunning;

		SDL_Event event;

		static const Uint32 subSystemFlags = SDL_INIT_EVERYTHING;

		CWindow* window;
		CEngineError error;


		int initSystems();
	public:
		CGameEngine();
		virtual ~CGameEngine();
		void run();
		void mainLoop();

};

} /* namespace Engine */

#endif /* ENGINE_CGAMEENGINE_H_ */
