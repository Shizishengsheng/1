#pragma once
#include "cocos2d.h"					
using namespace cocos2d;

class Help : public Layer

{
public:   
	static Scene* createScene();

	virtual bool init();

	CREATE_FUNC(Help);

	void EnterGameMenu(Ref *pSender);

	void addHelp();

};
