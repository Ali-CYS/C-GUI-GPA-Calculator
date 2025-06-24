//---------------------------------------------------------------------------

#ifndef registrationH
#define registrationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class Tmyregistrationform : public TForm
{
__published:	// IDE-managed Components
	TEdit *nameedit;
	TLabel *Label1;
	TEdit *agedit;
	TLabel *Label2;
	TEdit *usernameedit;
	TLabel *Label3;
	TEdit *passwordedit;
	TLabel *Label4;
	TButton *save;
private:	// User declarations
public:		// User declarations
	__fastcall Tmyregistrationform(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tmyregistrationform *myregistrationform;
//---------------------------------------------------------------------------
#endif
