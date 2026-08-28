#include <cmath>
#include "darts.h"

namespace darts {

// TODO: add your solution here
    int score(double x, double y)
    {
        double distance = hypot(x, y);

        return distance > 10.0 ? 0 : distance > 5.0 ? 1 : distance > 1 ? 5 : 10;
    }
}  // namespace darts
