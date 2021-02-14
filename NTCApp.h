#ifndef NTCAPP_H
#define NTCAPP_H

/***************************************************************
 * Name:      NTCApp.h
 * Purpose:   Defines Application Class
 * Author:     (Patryk)
 * Created:   2017-03-10
 * Copyright:  ()
 * License:
 **************************************************************/

#include <wx/app.h>

class NTCApp : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // NTCAPP_H
