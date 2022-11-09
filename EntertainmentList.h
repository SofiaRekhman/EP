#pragma once
#include"Entertainment.h"

class EntertainmentList
{
protected:
	Entertainment** entertainments;
	int current;
	void Add(Entertainment* entertainment);

public:
	EntertainmentList();
	~EntertainmentList();
	virtual void WriteAllToConsole() const;
	void WriteEntertainmentFromInputSize(string inputsize);

};
