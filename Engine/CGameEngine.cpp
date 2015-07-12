/*
 * CGameEngine.cpp
 *
 *  Created on: May 8, 2015
 *      Author: petris
 */

#include "CGameEngine.h"

namespace Engine {

CGameEngine::CGameEngine() {
	// TODO Auto-generated constructor stub
	this->window = NULL;
	this->isRunning = true;
}

CGameEngine::~CGameEngine() {
	// TODO Auto-generated destructor stub
	delete this->window;
	std::cout << "Quitted game Engine" << std::endl;
	SDL_Quit();
}

int CGameEngine::initSystems(){
	return SDL_Init(this->subSystemFlags);
}

/**
 *  Essa função inicializa os subsistemas da SDL e carrega os recursos.
 *  Caso tudo tenha ocorrido corretamente, instancia uma nova janela e
 *  inicia o loop principal da aplicação
 */
void CGameEngine::run(){
	if( this->initSystems() != 0 )
		this->error.showError();
	else {
		// FIXME Concluir classe de gerenciamento de recursos do jogo
		// FIXME CGameEngine::run() : Verificar se ouve falha ao carregar recursos
		this->window = new CWindow();
		this->window->createWindow();
		this->window->clear();
		this->window->update();

		try {
			this->window = new CWindow();
			std::cout << "Window created! " << std::endl;
		} catch ( std::bad_alloc& ba ) {
			std::cout << "Bad Allocation: " << ba.what() << std::endl;
		}

	}
	this->mainLoop();
}

void CGameEngine::mainLoop() {
	while( this->isRunning ) {

		while(SDL_PollEvent(&this->event)){
			if(event.type == SDL_QUIT )
			{
				this->isRunning = false;
			}
		}
		this->window->update();
	}
	this->window->~CWindow();
}


} /* namespace Engine */
