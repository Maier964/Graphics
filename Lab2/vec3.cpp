#include "vec3.h"


namespace egc {

    vec3& vec3::operator =(const vec3 &srcVector){

        this->x = srcVector.x;
        this->y = srcVector.y;
        this->z = srcVector.z;

        return *this;
    }

    // v1 + v2
    vec3 vec3::operator +(const vec3& srcVector) const{
        vec3 v = vec3();

        v.x = srcVector.x + this->x;
        v.y = srcVector.y + this->y;
        v.z = srcVector.z + this->z;

        return v;
    }

    // v1 = v1 + v2;
    vec3& vec3::operator +=(const vec3& srcVector){

        *this = vec3( srcVector.x + this->x, srcVector.y + this->y, srcVector.z + this->z );
        return *this;
    }

    // v1 * scalarValue
    vec3 vec3::operator *(float scalarValue) const{
        return vec3( this->x * scalarValue, this->y * scalarValue, this->z * scalarValue );
    }

    // v1 - v2
    vec3 vec3::operator -(const vec3& srcVector) const{
        return vec3( this->x - srcVector.x, this->y - srcVector.y, this->z - srcVector.z );
    }

    // v1 = v1 - v2
    vec3& vec3::operator -=(const vec3& srcVector){
        *this = vec3( this->x - srcVector.x, this->y - srcVector.y, this->z - srcVector.z );

        return *this;
    }

    vec3 vec3::operator -() const{
        return vec3( -1 * ( this->x ), -1 * ( this->y ), -1 * (this->z) );
    }    

    float vec3::length() const{
        return( sqrt( (this->x)*(this->x) + (this->y)*(this->y) + (this->z * this-> z) ) );
    }

    vec3& vec3::normalize(){
        float len = length();

        this->x = x / len;
        this->y = y / len;
        this->z = z / len;

        return *this;
    }

    float dotProduct(const vec3& v1, const vec3& v2){
        return ( v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
    }

    vec3 crossProduct(const vec3& v1, const vec3& v2){
        vec3 v = vec3(
            v1.y * v2.z - v1.z * v2.y,
            v1.z * v2.x - v1.x * v2.z,
            v1.x * v2.y - v1.y * v2.x
        );

        return v;
    }



}