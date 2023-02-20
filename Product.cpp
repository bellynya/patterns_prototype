//---------------------------------------------------------------------------

#pragma hdrstop

#include "Product.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

AnsiString House::ReturnParts()
{
	AnsiString str;
	for (int i = 0; i < parts_.size(); i++) {
		str += parts_[i];
	}
	return str;
}

House* CheapHouse::Clone()
{
	return this;
}

House* RichHouse::Clone()
{
	return this;
}
