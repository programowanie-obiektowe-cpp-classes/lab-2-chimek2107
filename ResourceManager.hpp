#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
	Resource* r1;

public:

	ResourceManager() { r1 = new Resource{}; }

	double get() { return r1->get(); }

	ResourceManager(const ResourceManager& l)
	{
		r1 = new Resource{};
		*r1 = *l.r1;
	}

	~ResourceManager() { delete r1; }

	ResourceManager& operator=(const ResourceManager& t)
	{
		delete this->r1;
		r1 = new Resource{};
		*r1 = *t.r1;
		return *this;
	}

};
