// Mainframe is for testing at the moment
#include "MainFrame.h"
#include <wx/wx.h>

MainFrame::MainFrame(const wxString& title): wxFrame(nullptr, wxID_ANY, title) {
	wxPanel* backroundPanel = new wxPanel(this);
	wxButton* button = new wxButton(backroundPanel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
	wxCheckBox* checkBox = new wxCheckBox(backroundPanel, wxID_ANY, "CheckBox", wxPoint(550, 55));

	wxStaticText* staticText = new wxStaticText(backroundPanel, wxID_ANY, "Static Text - Not Editable", wxPoint(120, 150));

	wxTextCtrl textCtrl = new wxTextCtrl
}
