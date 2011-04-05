#ifndef _RATIONAL_HPP_
#define _RATIONAL_HPP_
#include <string>
#include <ostream>

class Rational {
    private:
        Rational();
        int numerator_, denominator_;

    public:
        Rational(int numerator, int denominator = 1);
        ~Rational();

    public:
        operator std::string() const;
        operator float() const;
};

std::ostream & operator<<(std::ostream &stream, const Rational &r) {
     stream << "abc";
     return stream;
};

#endif // _RATIONAL_HPP_
