#include "Application.h"

wxIMPLEMENT_APP(Application);

Application::Application()
{
}


Application::~Application()
{
}

bool Application::OnInit()
{
	mainFrame = new MainFrame();
	mainFrame->Show();

	return true;
}
