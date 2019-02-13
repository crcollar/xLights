#include "SMSSettingsDialog.h"

//(*InternalHeaders(SMSSettingsDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include "SMSDaemonOptions.h"
#include "../../xLights/UtilFunctions.h"

//(*IdInit(SMSSettingsDialog)
const long SMSSettingsDialog::ID_STATICTEXT1 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL1 = wxNewId();
const long SMSSettingsDialog::ID_SPINCTRL4 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT7 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL4 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT2 = wxNewId();
const long SMSSettingsDialog::ID_SPINCTRL1 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT3 = wxNewId();
const long SMSSettingsDialog::ID_SPINCTRL2 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT12 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL7 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT4 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL2 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT5 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL3 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT10 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL5 = wxNewId();
const long SMSSettingsDialog::ID_CHECKBOX1 = wxNewId();
const long SMSSettingsDialog::ID_CHECKBOX2 = wxNewId();
const long SMSSettingsDialog::ID_CHECKBOX4 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT6 = wxNewId();
const long SMSSettingsDialog::ID_SPINCTRL3 = wxNewId();
const long SMSSettingsDialog::ID_CHECKBOX5 = wxNewId();
const long SMSSettingsDialog::ID_CHECKBOX3 = wxNewId();
const long SMSSettingsDialog::ID_CHECKBOX6 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT8 = wxNewId();
const long SMSSettingsDialog::ID_SPINCTRL5 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT9 = wxNewId();
const long SMSSettingsDialog::ID_SPINCTRL6 = wxNewId();
const long SMSSettingsDialog::ID_STATICTEXT11 = wxNewId();
const long SMSSettingsDialog::ID_TEXTCTRL6 = wxNewId();
const long SMSSettingsDialog::ID_BUTTON1 = wxNewId();
const long SMSSettingsDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SMSSettingsDialog,wxDialog)
	//(*EventTable(SMSSettingsDialog)
	//*)
END_EVENT_TABLE()

SMSSettingsDialog::SMSSettingsDialog(wxWindow* parent, SMSDaemonOptions* options, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    _options = options;

	//(*Initialize(SMSSettingsDialog)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer4;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	FlexGridSizer1->AddGrowableRow(0);
	FlexGridSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("xSchedule IP Address:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer3->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer4->AddGrowableCol(0);
	TextCtrl_xScheduleIPAddress = new wxTextCtrl(this, ID_TEXTCTRL1, _("127.0.0.1"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer4->Add(TextCtrl_xScheduleIPAddress, 1, wxALL|wxEXPAND, 5);
	SpinCtrl_xSchedulePort = new wxSpinCtrl(this, ID_SPINCTRL4, _T("80"), wxDefaultPosition, wxDefaultSize, 0, 1, 65535, 80, _T("ID_SPINCTRL4"));
	SpinCtrl_xSchedulePort->SetValue(_T("80"));
	FlexGridSizer4->Add(SpinCtrl_xSchedulePort, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Target text item(s)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer3->Add(StaticText7, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_TargetMatrix = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	FlexGridSizer3->Add(TextCtrl_TargetMatrix, 1, wxALL|wxEXPAND, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Message Retrieve Interval (secs)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer3->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_RetrieveInterval = new wxSpinCtrl(this, ID_SPINCTRL1, _T("10"), wxDefaultPosition, wxDefaultSize, 0, 1, 600, 10, _T("ID_SPINCTRL1"));
	SpinCtrl_RetrieveInterval->SetValue(_T("10"));
	FlexGridSizer3->Add(SpinCtrl_RetrieveInterval, 1, wxALL|wxEXPAND, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Display Durations (secs)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer3->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_DisplayDuration = new wxSpinCtrl(this, ID_SPINCTRL2, _T("30"), wxDefaultPosition, wxDefaultSize, 0, 1, 600, 30, _T("ID_SPINCTRL2"));
	SpinCtrl_DisplayDuration->SetValue(_T("30"));
	FlexGridSizer3->Add(SpinCtrl_DisplayDuration, 1, wxALL|wxEXPAND, 5);
	StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("User {user}"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer3->Add(StaticText12, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_User = new wxTextCtrl(this, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	FlexGridSizer3->Add(TextCtrl_User, 1, wxALL|wxEXPAND, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("SID {sid}"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer3->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_SID = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer3->Add(TextCtrl_SID, 1, wxALL|wxEXPAND, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Token {token}"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer3->Add(StaticText5, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_Token = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer3->Add(TextCtrl_Token, 1, wxALL|wxEXPAND, 5);
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("Phone"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	FlexGridSizer3->Add(StaticText10, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_Phone = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	FlexGridSizer3->Add(TextCtrl_Phone, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_UsePurgoMalum = new wxCheckBox(this, ID_CHECKBOX1, _("Use PurgoMalum online profanity filter"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox_UsePurgoMalum->SetValue(false);
	FlexGridSizer3->Add(CheckBox_UsePurgoMalum, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_UseLocalBlacklist = new wxCheckBox(this, ID_CHECKBOX2, _("Use local blacklist"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBox_UseLocalBlacklist->SetValue(true);
	FlexGridSizer3->Add(CheckBox_UseLocalBlacklist, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_UseLocalWhitelist = new wxCheckBox(this, ID_CHECKBOX4, _("Use local whitelist"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	CheckBox_UseLocalWhitelist->SetValue(false);
	FlexGridSizer3->Add(CheckBox_UseLocalWhitelist, 1, wxALL|wxEXPAND, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Maximum Message Length"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer3->Add(StaticText6, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_MaximumMessageLength = new wxSpinCtrl(this, ID_SPINCTRL3, _T("100"), wxDefaultPosition, wxDefaultSize, 0, 10, 1000, 100, _T("ID_SPINCTRL3"));
	SpinCtrl_MaximumMessageLength->SetValue(_T("100"));
	FlexGridSizer3->Add(SpinCtrl_MaximumMessageLength, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_OneWordOnly = new wxCheckBox(this, ID_CHECKBOX5, _("One word only"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	CheckBox_OneWordOnly->SetValue(false);
	FlexGridSizer3->Add(CheckBox_OneWordOnly, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_IgnoreOversized = new wxCheckBox(this, ID_CHECKBOX3, _("Ignore oversized messages"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
	CheckBox_IgnoreOversized->SetValue(false);
	FlexGridSizer3->Add(CheckBox_IgnoreOversized, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer3->Add(0,0,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_UpperCase = new wxCheckBox(this, ID_CHECKBOX6, _("Display in upper case"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	CheckBox_UpperCase->SetValue(false);
	FlexGridSizer3->Add(CheckBox_UpperCase, 1, wxALL|wxEXPAND, 5);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Maximum Message Age (mins)"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer3->Add(StaticText8, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_MaxMessageAge = new wxSpinCtrl(this, ID_SPINCTRL5, _T("10"), wxDefaultPosition, wxDefaultSize, 0, 0, 3600, 10, _T("ID_SPINCTRL5"));
	SpinCtrl_MaxMessageAge->SetValue(_T("10"));
	FlexGridSizer3->Add(SpinCtrl_MaxMessageAge, 1, wxALL|wxEXPAND, 5);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Times To Display"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer3->Add(StaticText9, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_TimesToDisplay = new wxSpinCtrl(this, ID_SPINCTRL6, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 30, 0, _T("ID_SPINCTRL6"));
	SpinCtrl_TimesToDisplay->SetValue(_T("0"));
	FlexGridSizer3->Add(SpinCtrl_TimesToDisplay, 1, wxALL|wxEXPAND, 5);
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("Default Message"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer3->Add(StaticText11, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_DefaultMessage = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	FlexGridSizer3->Add(TextCtrl_DefaultMessage, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	Button_Ok = new wxButton(this, ID_BUTTON1, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer2->Add(Button_Ok, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button_Cancel = new wxButton(this, ID_BUTTON2, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer2->Add(Button_Cancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SMSSettingsDialog::OnTextCtrl_xScheduleIPAddressText);
	Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SMSSettingsDialog::OnTextCtrl_TargetMatrixText);
	Connect(ID_TEXTCTRL7,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SMSSettingsDialog::OnTextCtrl_UserText);
	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SMSSettingsDialog::OnTextCtrl_TwilioSIDText);
	Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SMSSettingsDialog::OnTextCtrl_TwilioTokenText);
	Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&SMSSettingsDialog::OnTextCtrl_TwilioPhoneText);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SMSSettingsDialog::OnButton_OkClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SMSSettingsDialog::OnButton_CancelClick);
	//*)

    TextCtrl_xScheduleIPAddress->SetValue(options->GetXScheduleIP());
    TextCtrl_TargetMatrix->SetValue(options->GetTextItem());
    TextCtrl_User->SetValue(options->GetUser());
    TextCtrl_SID->SetValue(options->GetSID());
    TextCtrl_Token->SetValue(options->GetToken());
    TextCtrl_Phone->SetValue(options->GetPhone());
    TextCtrl_DefaultMessage->SetValue(options->GetDefaultMessage());

    SpinCtrl_RetrieveInterval->SetValue(options->GetRetrieveInterval());
    SpinCtrl_DisplayDuration->SetValue(options->GetDisplayDuration());
    SpinCtrl_MaximumMessageLength->SetValue(options->GetMaxMessageLength());
    SpinCtrl_MaxMessageAge->SetValue(options->GetMaxMessageAge());
    SpinCtrl_TimesToDisplay->SetValue(options->GetMaxTimesToDisplay());
    SpinCtrl_xSchedulePort->SetValue(options->GetXSchedulePort());

    CheckBox_UsePurgoMalum->SetValue(options->GetUsePurgoMalum());
    CheckBox_IgnoreOversized->SetValue(options->GetIgnoreOversizedMessages());
    CheckBox_OneWordOnly->SetValue(options->GetAcceptOneWordOnly());
    CheckBox_UseLocalBlacklist->SetValue(options->GetUseLocalBlacklist());
    CheckBox_UseLocalWhitelist->SetValue(options->GetUseLocalWhitelist());
    CheckBox_UpperCase->SetValue(options->GetUpperCase());

    ValidateWindow();
}

SMSSettingsDialog::~SMSSettingsDialog()
{
	//(*Destroy(SMSSettingsDialog)
	//*)
}


void SMSSettingsDialog::OnButton_OkClick(wxCommandEvent& event)
{
    _options->SetXScheduleIP(TextCtrl_xScheduleIPAddress->GetValue().ToStdString());
    _options->SetTextItem(TextCtrl_TargetMatrix->GetValue().ToStdString());
    _options->SetUser(TextCtrl_User->GetValue().ToStdString());
    _options->SetSID(TextCtrl_SID->GetValue().ToStdString());
    _options->SetToken(TextCtrl_Token->GetValue().ToStdString());
    _options->SetPhone(TextCtrl_Phone->GetValue().ToStdString());
    _options->SetDefaultMessage(TextCtrl_DefaultMessage->GetValue().ToStdString());

    _options->SetRetrieveInterval(SpinCtrl_RetrieveInterval->GetValue());
    _options->SetDisplayDuration(SpinCtrl_DisplayDuration->GetValue());
    _options->SetMaxMessageLength(SpinCtrl_MaximumMessageLength->GetValue());
    _options->SetMaxMessageAge(SpinCtrl_MaxMessageAge->GetValue());
    _options->SetMaxTimesToDisplay(SpinCtrl_TimesToDisplay->GetValue());
    _options->SetXSchedulePort(SpinCtrl_xSchedulePort->GetValue());

    _options->SetUsePurgoMalum(CheckBox_UsePurgoMalum->GetValue());
    _options->SetUseLocalBlacklist(CheckBox_UseLocalBlacklist->GetValue());
    _options->SetUseLocalWhitelist(CheckBox_UseLocalWhitelist->GetValue());
    _options->SetAcceptOneWordOnly(CheckBox_OneWordOnly->GetValue());
    _options->SetIgnoreOversizedMessages(CheckBox_IgnoreOversized->GetValue());
    _options->SetUpperCase(CheckBox_UpperCase->GetValue());

    EndDialog(wxID_OK);
}

void SMSSettingsDialog::OnButton_CancelClick(wxCommandEvent& event)
{
    EndDialog(wxID_CANCEL);
}

void SMSSettingsDialog::OnTextCtrl_xScheduleIPAddressText(wxCommandEvent& event)
{
    ValidateWindow();
}

void SMSSettingsDialog::OnTextCtrl_TargetMatrixText(wxCommandEvent& event)
{
    ValidateWindow();
}

void SMSSettingsDialog::OnTextCtrl_TwilioSIDText(wxCommandEvent& event)
{
    ValidateWindow();
}

void SMSSettingsDialog::OnTextCtrl_TwilioTokenText(wxCommandEvent& event)
{
    ValidateWindow();
}

void SMSSettingsDialog::ValidateWindow()
{
    if (TextCtrl_TargetMatrix->GetValue() == "" ||
        TextCtrl_User->GetValue() == "" ||
        TextCtrl_SID->GetValue() == "" ||
        TextCtrl_Token->GetValue() == "" ||
        !IsIPValid(TextCtrl_xScheduleIPAddress->GetValue()))
    {
        Button_Ok->Disable();
    }
    else
    {
        Button_Ok->Enable();
    }
}

void SMSSettingsDialog::OnTextCtrl_TwilioPhoneText(wxCommandEvent& event)
{
    ValidateWindow();
}

void SMSSettingsDialog::OnTextCtrl_UserText(wxCommandEvent& event)
{
    ValidateWindow();
}
