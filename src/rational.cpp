#include <rational.hpp>
#include <sstream>

Rational::Rational(int numerator, int denominator) :
    numerator_(numerator), denominator_(denominator) {}
Rational::~Rational() {}

Rational::operator std::string() const {
    std::ostringstream o;
    o << numerator_ << "/" << denominator_;
    return o.str();
}

Rational::operator float() const {
    return static_cast<float>(numerator_)/denominator_;
}
