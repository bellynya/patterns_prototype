//---------------------------------------------------------------------------

#ifndef DirectorH
#define DirectorH
#include "Builder.h"
#include "Product.h"
//---------------------------------------------------------------------------

class Director
{
private:
	HouseBuilder* hbuilder_;
public:

	void SetBuilder(HouseBuilder* builder);

	void MakeCheapHouse();

	void MakeRichHouse();

	HouseBuilder* GetBuilder();
};

#endif
