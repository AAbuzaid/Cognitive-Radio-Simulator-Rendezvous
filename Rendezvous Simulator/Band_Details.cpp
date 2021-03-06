#include "Band_Details.h"



Band_Details::Band_Details()
{
}

Band_Details::Band_Details(double PUProb)
{
	ProbON = PUProb;
	PUState = (double(rand()) / double(RAND_MAX)) <= PUProb;
}


Band_Details::~Band_Details()
{
}

bool Band_Details::empty()
{
	return !PUState;
}

void Band_Details::randomState()
{
	PUState = (double(rand()) / double(RAND_MAX)) <= ProbON;
}
