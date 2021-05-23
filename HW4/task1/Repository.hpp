#pragma once
#include "Averager.hpp"
#include "MovingAverager.hpp"
#include "PeriodicSampler.hpp"
#include <string>

// You are not allowed to make breaking changes to the class interface,
// but you are allowed to add additional methods/fields, as 
// well as MODIFY the existing interface so as to make it
// "more correct" and more compact if possible

// Repository is the single place where Subscribers will
// be stored. A Repository has ownership of the Subscribers
// stored inside it.
// The only way to access the available Subscribers in the
// repository is via the Subscriber's unique id.
// id's are guaranteed to be unique
class Repository {
public:
  // add registers a new Subscriber in the Repository
  void add(Averager *);
  void add(MovingAverager *);
  void add(PeriodicSampler *);

  // get returns a Subscriber in the Repository if a
  // Subscriber with the given id exists.
  // Returns nullptr otherwise
  void *get(std::string id);
};
