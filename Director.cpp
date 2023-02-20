//---------------------------------------------------------------------------

#pragma hdrstop

#include "Director.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Director::SetBuilder(HouseBuilder* builder)
{
	hbuilder_ = builder;
}

void Director::MakeCheapHouse()
{
	hbuilder_->BuildBathroom();
	hbuilder_->BuildSleepingRoom();
	hbuilder_->BuildKitchen();
	hbuilder_->BuildMainRoom();
}

void Director::MakeRichHouse()
{
	hbuilder_->BuildBathroom();
	hbuilder_->BuildSleepingRoom();
	hbuilder_->BuildKitchen();
	hbuilder_->BuildMainRoom();
}

HouseBuilder* Director::GetBuilder()
{
	return hbuilder_;
}
