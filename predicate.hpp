#ifndef OP2_LAB6_9_PREDICATE_HPP
#define OP2_LAB6_9_PREDICATE_HPP


using namespace std;

template<typename IT, typename T>
bool anyOf(IT first, IT last, T data) {
    for (; first != last; ++first)
        if (data(*first))
            return true;
    return false;
}

template<typename IT, typename T>
bool oneOf(IT first, IT last, T data) {
    bool f = false;

    for (; first != last; ++first) {
        if (data(*first)) {
            if (!f)
                f = true;
            else
                return false;
        }
    }
    return f;
}


template<typename IT, typename T>
bool is_palindrome(IT first, IT last, T data) {
    IT right = first;
    --last;

    while (first != last && right != last) {
        if (data(*first, *last--) == 0)
            return false;
        right = first++;
    }
    return true;
}

#endif //OP2_LAB6_9_PREDICATE_HPP
