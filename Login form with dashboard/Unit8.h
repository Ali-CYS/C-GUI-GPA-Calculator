//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TListBox *ListBox1;
	TComboBox *ComboBox1;
	TLabel *Label1;
	TButton *Button2;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TShape *Shape1;
	TLabel *Label6;
	TShape *Shape2;
	TImage *Image1;
	TLabel *Label7;
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ListBox1Click(TObject *Sender);
	void __fastcall Label1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender)   ;
private:	// User declarations
public:		// User declarations
AnsiString name1;
AnsiString name2;
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
