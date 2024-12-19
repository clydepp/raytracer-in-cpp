template<typename T> class Vec3 { 
public: 
    // Class method for cross product
    Vec3<T> cross(const Vec3<T> &v) const { 
        return Vec3<T>( 
            y * v.z - z * v.y, 
            z * v.x - x * v.z, 
            x * v.y - y * v.x); 
    } 

}; 
 
// Utility function for cross product
template<typename T> Vec3<T> cross(const Vec3<T> &a, const Vec3<T> &b) { 
    return Vec3<T>( 
        a.y * b.z - a.z * b.y, 
        a.z * b.x - a.x * b.z, 
        a.x * b.y - a.y * b.x); 
} 