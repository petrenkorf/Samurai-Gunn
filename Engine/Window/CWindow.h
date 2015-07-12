/*
 * CWindow.h
 *
 *  Created on: May 8, 2015
 *      Author: petris
 */

#ifndef ENGINE_CWINDOW_H_
#define ENGINE_CWINDOW_H_

#include <SDL2/SDL.h>
#include <GL/gl.h>

namespace Engine {

class CWindow {

	private:
		SDL_Window* instance;
		SDL_Surface* buffer;

		static const int WIDTH  = 1024;
		static const int HEIGHT = 768;

		SDL_GLContext context;

		void setGLAttributes();
		void initGL();

	public:
		CWindow();
		virtual ~CWindow();
		void createWindow();
		void clear();
		void update();
		SDL_Surface* getSurface();
};

} /* namespace Engine */

#endif /* ENGINE_CWINDOW_H_ */
