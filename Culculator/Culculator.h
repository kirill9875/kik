
// Culculator.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CCulculatorApp:
// Сведения о реализации этого класса: Culculator.cpp
//

class CCulculatorApp : public CWinApp
{
public:
	CCulculatorApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CCulculatorApp theApp;
