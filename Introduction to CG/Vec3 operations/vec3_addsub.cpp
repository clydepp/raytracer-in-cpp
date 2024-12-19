template<typename T> class Vec3 { 
public: 
     
    // Overloads the addition operator for vector addition
    Vec3<T> operator + (const Vec3<T> &v) const 
    { return Vec3<T>(x + v.x, y + v.y, z + v.z); } 
    // Overloads the subtraction operator for vector subtraction
    Vec3<T> operator - (const Vec3<T> &v) const 
    { return Vec3<T>(x - v.x, y - v.y, z - v.z); } 
    // Overloads the multiplication operator for scalar multiplication
    Vec3<T> operator * (const T &r) const 
    { return Vec3<T>(x * r, y * r, z * r); } 

}; 