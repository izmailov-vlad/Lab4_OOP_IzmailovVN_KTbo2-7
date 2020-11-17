#pragma once
#include "Flight.h"
#include "IStringConvertable.h"
#include <functional>
#include <vector>
class IContainer : public IStringConvertable{
public:
	virtual void Add(const Flight& flight) = 0 ;

	virtual std::string To_String() const = 0;

	virtual std::vector<Flight> Find(std::function<bool(const Flight&)> predicate) const = 0;

	virtual std::vector<Flight> FindFlightByKey(const Date& key) const = 0;
};