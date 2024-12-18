#include <iostream>

template<typename T>
class Vec3 {
public:
    // constructors
    Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
    Vec3(const T &xx) : x(xx), y(xx), z(xx) {}
    Vec3(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {}

    // members x, y, z
    T x, y, z; 
};

typedef Vec3<float> Vec3f;

int main(){
    Vec3<float> a(2.3, 3.12, 5.3); 
    Vec3f b; // zero vector/origin
    std::cout << a.z << std::endl;

}

