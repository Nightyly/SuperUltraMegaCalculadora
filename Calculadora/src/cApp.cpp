#include "cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp(){
    //ctor
}

cApp::~cApp(){
    //dtor
}

bool cApp::OnInit(){
    m_frame1 = new cMain();
    wxInitAllImageHandlers();
    wxImage::AddHandler(new wxPNGHandler());
    m_frame1 -> SetIcon({"Resources/icon.png", wxBITMAP_TYPE_PNG});
    m_frame1 -> Show();
    HWND hide;
    AllocConsole();
    hide = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(hide, 0);
    return true;
}
