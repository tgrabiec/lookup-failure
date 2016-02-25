#include <boost/type.hpp>

struct input {};
struct column_mapping {};

// Change the order of headers
#include "test.hh"
#include "test2.hh"


int main() {
  input in;
  ser::skip(in, boost::type<column_mapping>());
}

