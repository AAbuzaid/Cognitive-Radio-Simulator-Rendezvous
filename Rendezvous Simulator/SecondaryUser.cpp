#include "SecondaryUser.h"



SecondaryUser::SecondaryUser()
{
}


SecondaryUser::~SecondaryUser()
{
}

void SecondaryUser::scanBands(std::vector<Band_Details>& Bands)
{
	for (int i = 0; i < 100; i++)
	{
		if (Bands[i].empty())
			emptyBands.push_back(i);
	}
}
