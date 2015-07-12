/*
 * CWindow.cpp
 *
 *  Created on: May 8, 2015
 *      Author: petris
 */

#include "CWindow.h"

namespace Engine {

CWindow::CWindow() {
	// TODO Auto-generated constructor stub
	this->instance  = NULL;
	this->buffer 	= NULL;
}

CWindow::~CWindow() {
	// TODO Auto-generated destructor stub
	SDL_DestroyWindow(this->instance);
}

void CWindow::setGLAttributes() {
	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);

	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
	SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);

	SDL_GL_SetAttribute(SDL_GL_ACCUM_RED_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ACCUM_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ACCUM_GREEN_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ACCUM_ALPHA_SIZE, 8);

	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLEBUFFERS, 1);
	SDL_GL_SetAttribute(SDL_GL_MULTISAMPLESAMPLES, 2);
}

void CWindow::initGL() {
	glViewport(0,0,this->WIDTH,this->HEIGHT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(0,this->WIDTH,this->HEIGHT,0,1,-1);

	glMatrixMode(GL_MODELVIEW);

	glEnable(GL_TEXTURE_2D);
	glLoadIdentity();

	glClearColor(1.f,0.f,0.f,1.f);
	glClear(GL_COLOR_BUFFER_BIT);
}

void CWindow::createWindow() {
	this->instance = SDL_CreateWindow("Game",0,0,this->WIDTH,this->HEIGHT, SDL_WINDOW_OPENGL );
	this->context = SDL_GL_CreateContext(this->instance);
}

void CWindow::clear()
{
    glClearColor(0.f,0.f,0.f,1.f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void CWindow::update() {

	SDL_GL_SwapWindow(this->instance);
}

SDL_Surface* CWindow::getSurface() {
	return SDL_GetWindowSurface(this->instance);
}

} /* namespace Engine */
