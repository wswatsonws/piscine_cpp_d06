#include <cstddef>
#include <cstdlib>
#include <iostream>
#include "Squad.hh"

Squad::Squad()
	: marines(new ISpaceMarine*[64]),
	  count(0),
	  arrLen(64)
{
}

Squad::Squad(Squad const &other)
	: marines(new ISpaceMarine*[other.getCount()]),
	  arrLen(other.getCount())
{
	int i = 0;

	while (i < other.getCount())
		marines[i] = other.getUnit(i)->clone();
}

Squad::~Squad()
{
	int i = 0;

	while (i < this->count)
		delete marines[i++];
	delete[] marines;
}

Squad	&Squad::operator=(Squad const &other)
{
	int i = 0;

	while (i < count)
		delete marines[i++];
	count = 0;
	i = 0;
	while (i < other.count)
		this->push(other.getUnit(i));
	return *this;
}

int	Squad::getCount() const
{
	return count;
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	if (unit < count)
		return marines[unit];
	else
		return nullptr;
}

int			Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine	**newArr;

	if (count < arrLen)
		marines[count++] = marine;
	else {
		newArr = new ISpaceMarine*[++arrLen];
		int i = 0;
		while (i < arrLen - 1)
		{
			newArr[i] = marines[i];
			++i;
			}
		newArr[count++] = marine;
		delete[] marines;
		marines = newArr;
	}
	return count;
}
