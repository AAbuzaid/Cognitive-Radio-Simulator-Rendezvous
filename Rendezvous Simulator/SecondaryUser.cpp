#include "SecondaryUser.h"



SecondaryUser::SecondaryUser()
{
}


SecondaryUser::~SecondaryUser()
{
}

void SecondaryUser::scanBands(std::vector<Band_Details>& Bands, bool symmetric, double asymmetricity)
{
	if (symmetric)
	{
		for (int i = 0; i < 100; i++)
		{
			if (Bands[i].empty())
				emptyBands.push_back(i);
		}
	}
	else
	{
		for (int i = 0; i < 100; i++)
		{
			if (Bands[i].empty() && (double(rand())/double(RAND_MAX)) >= asymmetricity)
				emptyBands.push_back(i);
		}
	}
}
