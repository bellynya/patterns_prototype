//---------------------------------------------------------------------------

#ifndef BuilderH
#define BuilderH
#include "Product.h"
//---------------------------------------------------------------------------

class HouseBuilder
{
public:
	virtual void Reset() = 0;
	virtual void BuildBathroom() = 0;
	virtual void BuildSleepingRoom() = 0;
	virtual void BuildKitchen() = 0;
	virtual void BuildMainRoom() = 0;

	virtual House* GetHouse() = 0;
};

class CheapHouseBuilder : public HouseBuilder
{
	 CheapHouse* ch;

public:

	CheapHouseBuilder()
	{
		Reset();
	}

	~CheapHouseBuilder()
	{
		delete ch;
	}

	void Reset() override;
	void BuildBathroom() override;
	void BuildSleepingRoom() override;
	void BuildKitchen() override;
	void BuildMainRoom() override;
	House* GetHouse() override;
};

class RichHouseBuilder : public HouseBuilder
{
	RichHouse* rh;

public:

	RichHouseBuilder()
	{
		Reset();
	}

	~RichHouseBuilder()
	{
		delete rh;
	}

	void Reset() override;
	void BuildBathroom() override;
	void BuildSleepingRoom() override;
	void BuildKitchen() override;
	void BuildMainRoom() override;
	House* GetHouse() override;
};


#endif
