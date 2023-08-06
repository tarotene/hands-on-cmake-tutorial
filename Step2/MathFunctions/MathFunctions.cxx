#include "MathFunctions.h"

#include <cmath>

#include "mysqrt.h"

namespace mathfunctions {
double sqrt(double x) {
#ifdef USE_MYMATH
  return detail::mysqrt(x);
#else
  return std::sqrt(x);
#endif
}
} // namespace mathfunctions
