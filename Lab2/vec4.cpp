#include "vec4.h"


namespace egc {

    vec4& vec4::operator =(const vec4 &srcVector){

        this->x = srcVector.x;
        this->y = srcVector.y;
        this->z = srcVector.z;
        this->w = srcVector.w;

        return *this;
    }

    // v1 + v2
    vec4 vec4::operator +(const vec4& srcVector) const{
        vec4 v = vec4();

        v.x = srcVector.x + this->x;
        v.y = srcVector.y + this->y;
        v.z = srcVector.z + this->z;
        v.w = srcVector.w + this->w;

        return v;
    }

    // v1 = v1 + v2;
    vec4& vec4::operator +=(const vec4& srcVector){

        *this = vec4( srcVector.x + this->x, srcVector.y + this->y,
         srcVector.z + this->z, srcVector.w + this->w );
        return *this;
    }

    // v1 * scalarValue
    vec4 vec4::operator *(float scalarValue) const{
        return vec4( this->x * scalarValue, this->y * scalarValue,
         this->z * scalarValue, this->w * scalarValue );
    }

    // v1 - v2
    vec4 vec4::operator -(const vec4& srcVector) const{
        return vec4( this->x - srcVector.x, this->y - srcVector.y,
         this->z - srcVector.z, this->w - srcVector.w );
    }

    // v1 = v1 - v2
    vec4& vec4::operator -=(const vec4& srcVector){
        *this = vec4( this->x - srcVector.x, this->y - srcVector.y,
         this->z - srcVector.z, this->w - srcVector.w );

        return *this;
    }

    vec4 vec4::operator -() const{
        return vec4( -1 * ( this->x ), -1 * ( this->y ),
         -1 * (this->z), -1 * (this->w) );
    }    

    float vec4::length() const{
        return( sqrt( (this->x)*(this->x) + (this->y)*(this->y) + 
        (this->z * this-> z) + (this->w * this->w) ) );
    }

    vec4& vec4::normalize(){
        float len = length();

        this->x = x / len;
        this->y = y / len;
        this->z = z / len;
        this->w = w / len;

        return *this;
    }

    float dotProduct(const vec4& v1, const vec4& v2){
        return ( v1.x * v2.x + v1.y * v2.y + v1.z * v2.z + v1.w * v2.w);
    }

}