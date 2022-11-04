#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
	Resource* r1;

public:

	ResourceManager() { r1 = new Resource{} }

	double get() {return r1.get() }

	ResourceManager(const ResourceManager& l) = default; 

	~ResourceManager() { delete r1; }

	ResourceManager& operator=(const ResourceManager& t) { /* ... */ return *this; }

};
