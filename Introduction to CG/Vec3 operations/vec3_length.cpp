// there are two methods to finding the length:
template<typename T> class Vec3 { 
public: 
    Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
    Vec3(const T &xx) : x(xx), y(xx), z(xx) {}
    Vec3(T xx, T yy, T zz) : x(xx), y(yy), z(zz) {}
    T x, y, z;

    // length can be a method from the class...
    T length() { 
        return sqrt(x * x + y * y + z * z); 
    } 
}; 
 
// or you can also compute the length in a function that is not part of the class
template<typename T> T length(const Vec3<T> &v) { 
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z); 
} 