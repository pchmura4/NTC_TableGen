/***************************************************************
 * Name:      NTCApp.cpp
 * Purpose:   Code for Application Class
 * Author:     (Patryk)
 * Created:   2017-03-10
 * Copyright:  ()
 * License:
 **************************************************************/

#include "NTCApp.h"

//(*AppHeaders
#include "NTCMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(NTCApp);

bool NTCApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    NTCFrame* Frame = new NTCFrame(0);
    Frame->Show();
    SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
