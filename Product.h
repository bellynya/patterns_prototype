//---------------------------------------------------------------------------

#ifndef ProductH
#define ProductH
#include <vector>
#include <System.Classes.hpp>
//---------------------------------------------------------------------------

class House
{
public:
	std::vector<AnsiString> parts_;

	AnsiString ReturnParts();

	virtual House* Clone() = 0;
};

class CheapHouse : public House
{
	House* Clone() override;
};

class RichHouse : public House
{
	House* Clone() override;
};


#endif
