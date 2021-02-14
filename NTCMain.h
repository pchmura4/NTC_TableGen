#ifndef NTCMAIN_H
#define NTCMAIN_H

/***************************************************************
 * Name:      NTCMain.h
 * Purpose:   Defines Application Frame
 * Author:     (Patryk)
 * Created:   2017-03-10
 * Copyright:  ()
 * License:
 **************************************************************/

//(*Headers(NTCFrame)
#include <mathplot.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/grid.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)

class NTCFrame: public wxFrame
{
    public:

        NTCFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~NTCFrame();

    private:

        //(*Handlers(NTCFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnGrid1Resize(wxSizeEvent& event);
        //*)

        //(*Identifiers(NTCFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_TEXTCTRL3;
        static const long ID_TEXTCTRL4;
        static const long ID_TEXTCTRL5;
        static const long ID_TEXTCTRL6;
        static const long ID_STATICTEXT7;
        static const long ID_TEXTCTRL7;
        static const long ID_AXIS1;
        static const long ID_AXIS2;
        static const long ID_VECTOR1;
        static const long ID_VECTOR2;
        static const long ID_MATHPLOT1;
        static const long ID_GRID1;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_STATICLINE1;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICLINE2;
        static const long ID_STATICTEXT8;
        static const long ID_STATICTEXT9;
        static const long ID_BUTTON1;
        static const long ID_PANEL1;
        //*)

        //(*Declarations(NTCFrame)
        mpFXYVector   *resVector;
        mpFXYVector   *voltVector;
        mpScaleX   *xAxis;
        mpScaleY   *yAxis;
        mpWindow* MathPlot1;
        std::vector<double>  resVector_X;
        std::vector<double>  resVector_Y;
        std::vector<double>  voltVector_X;
        std::vector<double>  voltVector_Y;
        wxButton* Button1;
        wxGrid* Grid1;
        wxPanel* Panel1;
        wxStaticLine* StaticLine1;
        wxStaticLine* StaticLine2;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl3;
        wxTextCtrl* TextCtrl4;
        wxTextCtrl* TextCtrl5;
        wxTextCtrl* TextCtrl6;
        wxTextCtrl* TextCtrl7;
        //*)

        void gridResize(wxGrid* m_grid, wxSize m_size);

        DECLARE_EVENT_TABLE()
};

#endif // NTCMAIN_H
