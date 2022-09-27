#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	// Opens testing scene at the moment
	MainFrame* mainFrame = new MainFrame("Ember Engine");
	mainFrame->SetClientSize(800, 400);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
