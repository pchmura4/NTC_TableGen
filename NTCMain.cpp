/***************************************************************
 * Name:      NTCMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     (Patryk)
 * Created:   2017-03-10
 * Copyright:  ()
 * License:
 **************************************************************/

#include "NTCMain.h"
#include <wx/msgdlg.h>
#include <math.h>

//(*InternalHeaders(NTCFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(NTCFrame)
const long NTCFrame::ID_STATICTEXT1 = wxNewId();
const long NTCFrame::ID_STATICTEXT2 = wxNewId();
const long NTCFrame::ID_TEXTCTRL1 = wxNewId();
const long NTCFrame::ID_TEXTCTRL2 = wxNewId();
const long NTCFrame::ID_TEXTCTRL3 = wxNewId();
const long NTCFrame::ID_TEXTCTRL4 = wxNewId();
const long NTCFrame::ID_TEXTCTRL5 = wxNewId();
const long NTCFrame::ID_TEXTCTRL6 = wxNewId();
const long NTCFrame::ID_STATICTEXT7 = wxNewId();
const long NTCFrame::ID_TEXTCTRL7 = wxNewId();
const long NTCFrame::ID_AXIS1 = wxNewId();
const long NTCFrame::ID_AXIS2 = wxNewId();
const long NTCFrame::ID_VECTOR1 = wxNewId();
const long NTCFrame::ID_VECTOR2 = wxNewId();
const long NTCFrame::ID_MATHPLOT1 = wxNewId();
const long NTCFrame::ID_GRID1 = wxNewId();
const long NTCFrame::ID_STATICTEXT3 = wxNewId();
const long NTCFrame::ID_STATICTEXT4 = wxNewId();
const long NTCFrame::ID_STATICLINE1 = wxNewId();
const long NTCFrame::ID_STATICTEXT5 = wxNewId();
const long NTCFrame::ID_STATICTEXT6 = wxNewId();
const long NTCFrame::ID_STATICLINE2 = wxNewId();
const long NTCFrame::ID_STATICTEXT8 = wxNewId();
const long NTCFrame::ID_STATICTEXT9 = wxNewId();
const long NTCFrame::ID_BUTTON1 = wxNewId();
const long NTCFrame::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NTCFrame,wxFrame)
    //(*EventTable(NTCFrame)
    //*)
END_EVENT_TABLE()

NTCFrame::NTCFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(NTCFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* BoxSizer6;
    wxGridSizer* GridSizer1;
    wxGridSizer* GridSizer2;

    Create(parent, wxID_ANY, _("NTC Table Generator 2017 Patryk Chmura"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(600,400));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    GridSizer1 = new wxGridSizer(0, 2, 0, 0);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Temperature"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    GridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Resistance"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    GridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("-40"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    GridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("100950"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    GridSizer1->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _("25"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    GridSizer1->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, _("3000"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    GridSizer1->Add(TextCtrl4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _("100"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    GridSizer1->Add(TextCtrl5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl6 = new wxTextCtrl(Panel1, ID_TEXTCTRL6, _("204"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    GridSizer1->Add(TextCtrl6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Rpull"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    GridSizer1->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl7 = new wxTextCtrl(Panel1, ID_TEXTCTRL7, _("2700"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    GridSizer1->Add(TextCtrl7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3->Add(GridSizer1, 1, wxEXPAND, 5);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    MathPlot1 = new mpWindow(Panel1, ID_MATHPLOT1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
    xAxis = new mpScaleX(_(""), 4, true);
    MathPlot1->AddLayer(xAxis);
    yAxis = new mpScaleY(_(""), 4, true);
    MathPlot1->AddLayer(yAxis);
    resVector = new mpFXYVector(_("Vector"), 0);
    resVector->SetContinuity(true);
    MathPlot1->AddLayer(resVector);
    voltVector = new mpFXYVector(_("Vector"), 0);
    voltVector->SetContinuity(true);
    MathPlot1->AddLayer(voltVector);
    MathPlot1->UpdateAll();
    MathPlot1->Fit();
    BoxSizer6->Add(MathPlot1, 1, wxEXPAND, 5);
    BoxSizer3->Add(BoxSizer6, 1, wxEXPAND, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxEXPAND, 5);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    Grid1 = new wxGrid(Panel1, ID_GRID1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_GRID1"));
    Grid1->CreateGrid(2,16);
    Grid1->EnableEditing(true);
    Grid1->EnableGridLines(true);
    Grid1->SetColLabelSize(30);
    Grid1->SetRowLabelSize(40);
    Grid1->SetDefaultRowSize(30, true);
    Grid1->SetDefaultColSize(30, true);
    Grid1->SetColLabelValue(0, _("-40"));
    Grid1->SetColLabelValue(1, _("-30"));
    Grid1->SetColLabelValue(2, _("-20"));
    Grid1->SetColLabelValue(3, _("-10"));
    Grid1->SetColLabelValue(4, _("0"));
    Grid1->SetColLabelValue(5, _("15"));
    Grid1->SetColLabelValue(6, _("26"));
    Grid1->SetColLabelValue(7, _("37"));
    Grid1->SetColLabelValue(8, _("48"));
    Grid1->SetColLabelValue(9, _("59"));
    Grid1->SetColLabelValue(10, _("70"));
    Grid1->SetColLabelValue(11, _("81"));
    Grid1->SetColLabelValue(12, _("92"));
    Grid1->SetColLabelValue(13, _("103"));
    Grid1->SetColLabelValue(14, _("114"));
    Grid1->SetColLabelValue(15, _("125"));
    Grid1->SetRowLabelValue(0, _("Res"));
    Grid1->SetRowLabelValue(1, _("Volt"));
    Grid1->SetDefaultCellFont( Grid1->GetFont() );
    Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
    BoxSizer4->Add(Grid1, 1, wxEXPAND, 5);
    GridSizer2 = new wxGridSizer(0, 3, 0, 0);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("A"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    GridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    GridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine1 = new wxStaticLine(Panel1, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
    GridSizer2->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("B"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    GridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    GridSizer2->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticLine2 = new wxStaticLine(Panel1, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
    GridSizer2->Add(StaticLine2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("C"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    GridSizer2->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT9, _("0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    GridSizer2->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Generate"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    GridSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4->Add(GridSizer2, 1, wxEXPAND, 5);
    BoxSizer2->Add(BoxSizer4, 1, wxEXPAND, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxEXPAND, 5);
    SetSizer(BoxSizer1);
    SetSizer(BoxSizer1);
    Layout();

    Grid1->Connect(wxEVT_SIZE,(wxObjectEventFunction)&NTCFrame::OnGrid1Resize,0,this);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NTCFrame::OnButton1Click);
    //*)

    resVector->ShowName(false);
    voltVector->ShowName(false);
    resVector->SetPen(wxPen(wxColour(255, 0, 0)));
    voltVector->SetPen(wxPen(wxColour(0, 0, 255)));

    wxCommandEvent e(wxEVT_COMMAND_BUTTON_CLICKED, ID_BUTTON1);
    this->ProcessEvent(e);
}

NTCFrame::~NTCFrame()
{
    //(*Destroy(NTCFrame)
    //*)
}

void NTCFrame::OnQuit(wxCommandEvent& event)
{
	Close();
}

void NTCFrame::OnAbout(wxCommandEvent& event)
{
	wxString msg = wxbuildinfo(long_f);
	wxMessageBox(msg, _("Welcome to..."));
}


void NTCFrame::OnButton1Click(wxCommandEvent& event)
{
	resVector->Clear();
	voltVector->Clear();
	resVector_X.clear();
	resVector_Y.clear();
	voltVector_X.clear();
	voltVector_Y.clear();

	double T1, T2, T3;
	TextCtrl1->GetValue().ToDouble(&T1);
	TextCtrl3->GetValue().ToDouble(&T2);
	TextCtrl5->GetValue().ToDouble(&T3);
	T1 += 273.15;
	T2 += 273.15;
	T3 += 273.15;

	double R1, R2, R3;
	TextCtrl2->GetValue().ToDouble(&R1);
	TextCtrl4->GetValue().ToDouble(&R2);
	TextCtrl6->GetValue().ToDouble(&R3);

	double Rx;
	TextCtrl7->GetValue().ToDouble(&Rx);

	double L1, L2, L3;
	L1 = log(R1);
	L2 = log(R2);
	L3 = log(R3);

	double Y1, Y2, Y3;
	Y1 = 1/T1;
	Y2 = 1/T2;
	Y3 = 1/T3;

	double U2, U3;
	U2 = (Y2-Y1) / (L2-L1);
	U3 = (Y3-Y1) / (L3-L1);

	double A, B, C;
	C = (U3 - U2) / (L3 - L2) * pow(L1 + L2 + L3, -1);
	B = U2 - C * (L1*L1 + L1*L2 + L2*L2);
	A = Y1 - (B + L1 * L1 * C) * L1;

	StaticText4->SetLabel(wxString::Format(wxT("%lf"), A));
	StaticText6->SetLabel(wxString::Format(wxT("%lf"), B));
	StaticText9->SetLabel(wxString::Format(wxT("%lf"), C));

	double maxVal = 0;
	for(int i=0; i<Grid1->GetNumberCols(); i++)
	{
		double T;
		Grid1->GetColLabelValue(i).ToDouble(&T);
		T += 273.15;

		double X, Y;
		X = (A - ((double)1/T))/C;
		Y = pow((pow((B/(3*C)),3) + (pow(X, 2)/4)),((double)1/2));

		double R;
		R = exp(pow((Y-(X/2)), ((double)1/3)) - pow((Y+(X/2)), ((double)1/3)));
		if(R > maxVal)		maxVal = R;

		double voltage = 5.0 * R / (R + Rx);

		Grid1->SetCellValue(0, i, wxString::Format(wxT("%0.1lf"), R));
		Grid1->SetCellValue(1, i, wxString::Format(wxT("%0.3lf"), voltage));

		voltVector_X.push_back(T-273.15);
		resVector_X.push_back(T-273.15);
		voltVector_Y.push_back(voltage);
		resVector_Y.push_back(R);
	}

	for(int i=0; i<Grid1->GetNumberCols(); i++)
		resVector_Y[i] = 5.0 * resVector_Y[i] / maxVal;

	resVector->SetData(resVector_X, resVector_Y);
	voltVector->SetData(voltVector_X, voltVector_Y);
	MathPlot1->Fit();
}


void NTCFrame::gridResize(wxGrid* m_grid, wxSize m_size)
{
	int colSize = (m_size.GetX()-m_grid->GetRowLabelSize())/m_grid->GetNumberCols();
	int rowSize = (m_size.GetY()-m_grid->GetColLabelSize())/m_grid->GetNumberRows();

	m_grid->SetDefaultColSize(colSize, 1);
	m_grid->SetDefaultRowSize(rowSize, 1);

	m_grid->Refresh();
}


void NTCFrame::OnGrid1Resize(wxSizeEvent& event)
{
	gridResize(Grid1, event.GetSize());
}
