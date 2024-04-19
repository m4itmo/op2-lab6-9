#ifndef OP2_LAB6_9_CASTOMTYPES_HPP
#define OP2_LAB6_9_CASTOMTYPES_HPP

class CRational {
private:
    double value;
public:
     CRational(double n) : value(n) {}

    bool operator==(const CRational &other) const {
        return value == other.value;
    }

    bool operator!=(const CRational &other) const {
        return value != other.value;
    }

    bool operator<(const CRational &other) const {
        return value < other.value;
    }

    bool operator<=(const CRational &other) const {
        return value <= other.value;
    }

    bool operator>(const CRational &other) const {
        return value > other.value;
    }

    bool operator>=(const CRational &other) const {
        return value >= other.value;
    }
};


#endif //OP2_LAB6_9_CASTOMTYPES_HPP
