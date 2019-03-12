#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>
//#include <functional>


// float magnitudeOf(const std::vector<float>& vfloat) {

//     float squares = std::accumulate(vfloat.begin(), vfloat.end(), 0, square<float>());
//     float sqrt = std::sqrt(squares);
//     return sqrt;
// }


// functor for getting sum of previous result and square of current element
template<typename T>
struct square
{
    T operator()(const T& Left, const T& Right) const
    {   
        return (Left + Right*Right);
    }
};

template<typename T>
float magnitudeOf(const std::vector<T>& vector) {

    T squares = std::accumulate(vector.begin(), vector.end(), 0, square<T>());
    float sqrt = std::sqrt(squares);
    return sqrt;
}

template<typename T>
float computedp(const std::vector<float>& a, const std::vector<T>& b) {
    float dp = 0;

    for(size_t i = 0; i < a.size(); i++) {
        dp += a[i] * b[i];
    }

    return dp;
}

template<typename T>
float computeTheta(const std::vector<float>& a, const std::vector<T>& b) {
    std::cout << "computeTheta:" << "\n";

    float dot = computedp(a, b);
    std::cout << "dot:" << dot << "\n";

    float magnitudeA = magnitudeOf(a);
    float magnitudeB = magnitudeOf(b);
    float product = magnitudeA * magnitudeB;
    std::cout << "magnitudeB:" << magnitudeB << "\n";

    float acos = dot / product;
    float theta = acosf(acos);
    return theta;
}

template<typename T>
float computeGeometricDot(const std::vector<float>& a, const std::vector<T>& b, const float& radianTheta) {
    std::cout << "\ncomputeGeometricDot:" << "\n";

    float magnitudeA = magnitudeOf(a);
    float magnitudeB = magnitudeOf(b);
    float product = magnitudeA * magnitudeB;
    std::cout << "magnitudeB:" << magnitudeB << "\n";

    float cos = cosf(radianTheta);
    std::cout << "cos:" << cos << "\n";

    float geometric = product * cos;
    return geometric;
}

int main() {
    std::vector<float> a {1, 2, 3, 4};
    std::vector<int> b {1, 2, 3, 4};

// int p = 0;
// for(size_t i = 0; i < 5; i++)
// {
//     p += v1[i] * v2[i];
// }

    float magnitudeA = magnitudeOf(a);
    float magnitudeB = magnitudeOf(b);
    float product = magnitudeA * magnitudeB;
    std::cout << "magnitudeB:" << magnitudeB << "\n";

    std::cout << "magnitudeA:" << magnitudeA << "\n";
    float sigma = std::accumulate(a.begin(), a.end(), 0);
    std::cout << "sigma:" << sigma << "\n";

    float dot = computedp(a, b);
    std::cout << "dot:" << dot << "\n";

    float theta = computeTheta(a, b);
    std::cout << "theta:" << theta << "\n";

    theta = 0;
    float geometric = computeGeometricDot(a, b, theta);
    std::cout << "geometric:" << geometric << "\n";

    return 0;
}