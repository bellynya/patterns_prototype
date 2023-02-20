//---------------------------------------------------------------------------

#pragma hdrstop

#include "Builder.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void CheapHouseBuilder::Reset()
{
	ch = new CheapHouse();
}

void CheapHouseBuilder::BuildBathroom()
{
	ch->parts_.push_back("Bathroom");
}

void CheapHouseBuilder::BuildSleepingRoom()
{
	ch->parts_.push_back("SleepingRoom");
}

void CheapHouseBuilder::BuildKitchen()
{
	ch->parts_.push_back("Kitchen");
}

void CheapHouseBuilder::BuildMainRoom()
{
	ch->parts_.push_back("MainRoom");
}

House* CheapHouseBuilder::GetHouse()
{
	CheapHouse* res = ch;
	Reset();
	return res;
}




void RichHouseBuilder::Reset()
{
	rh = new RichHouse();
}

void RichHouseBuilder::BuildBathroom()
{
	rh->parts_.push_back("RichBathroom");
}

void RichHouseBuilder::BuildSleepingRoom()
{
	rh->parts_.push_back("RichSleepingRoom");
}

void RichHouseBuilder::BuildKitchen()
{
	rh->parts_.push_back("RichKitchen");
}

void RichHouseBuilder::BuildMainRoom()
{
	rh->parts_.push_back("RichMainRoom");
}

House* RichHouseBuilder::GetHouse()
{
	RichHouse* res = rh;
	Reset();
	return res;
}
