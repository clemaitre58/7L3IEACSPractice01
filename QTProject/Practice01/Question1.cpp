#include <cmath>

#include "Question1.h"
#include "utls.h"


void circle_area_circumference(const double & radius, double & area, double & circumference) {
    circumference = 2 * maths_const::PI * radius;
    area = maths_const::PI * std::pow(radius, 2);
}
