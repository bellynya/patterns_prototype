//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "Director.h"
#include "Builder.h"
#include "Product.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Director* dir;
House* clone;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	dir = new Director();
	dir->SetBuilder(new CheapHouseBuilder());
	dir->MakeCheapHouse();
	House* cheaphome = dir->GetBuilder()->GetHouse();
	clone = cheaphome->Clone();
	Memo1->Lines->Add(cheaphome->ReturnParts());
	delete dir;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	dir = new Director();
	dir->SetBuilder(new RichHouseBuilder());
	dir->MakeCheapHouse();
	House* cheaphome = dir->GetBuilder()->GetHouse();
	Memo1->Lines->Add(cheaphome->ReturnParts());
	delete dir;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Memo1->Lines->Add(clone->ReturnParts());
}
//---------------------------------------------------------------------------

