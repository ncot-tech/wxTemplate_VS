#pragma once

#include "wx\wx.h"
#include "MainFrame.h"

class Application : public wxApp
{
public:
	Application();
	~Application();

	virtual bool OnInit() override;

private:
	MainFrame *mainFrame = nullptr;
};

