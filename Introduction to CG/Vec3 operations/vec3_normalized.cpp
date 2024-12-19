template<typename T> class Vec3 {
public:
    // Vector normalization method
    Vec3<T>& normalize()
    {
        T len = length();
        if (len > 0) { // length of vector is greater than 0 to be normalized
            T invLen = 1 / len;
            x *= invLen, y *= invLen, z *= invLen;
        }

        return *this;
    }

};

// Utility function for vector normalization
template<typename T> void normalize(Vec3<T> &v) {
    T len2 = v.x * v.x + v.y * v.y + v.z * v.z;
    if (len2 > 0) {
        T invLen = 1 / sqrt(len2);
        v.x *= invLen, v.y *= invLen, v.z *= invLen;
    }
}