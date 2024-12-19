template<typename T> class Vec3 {
public:
    T dot(const Vec3<T> &v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    Vec3<T>& normalize() {
        T len2 = dot(*this);
        if (len2 > 0) {
            T invLen = 1 / sqrt(len2);
            x *= invLen, y *= invLen, z *= invLen;
        }

        return *this;
    }
};

template<typename T> T dot(const Vec3<T> &a, const Vec3<T> &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}