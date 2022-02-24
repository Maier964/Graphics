#include "vec2.h"

namespace egc{


    // v1 = v2 ( atribuire )
    vec2& vec2::operator =(const vec2 &srcVector){

        this->x = srcVector.x;
        this->y = srcVector.y;

        return *this;
    }

    // v1 + v2
    vec2 vec2::operator +(const vec2& srcVector) const{
        vec2 v = vec2();

        v.x = srcVector.x + this->x;
        v.y = srcVector.y + this->y;

        return v;
    }

    // v1 = v1 + v2;
    vec2& vec2::operator +=(const vec2& srcVector){

        *this = vec2( srcVector.x + this->x, srcVector.y + this->y );
        return *this;
    }

    // v1 * scalarValue
    vec2 vec2::operator *(float scalarValue) const{
        return vec2( this->x * scalarValue, this->y * scalarValue );
    }

    // v1 - v2
    vec2 vec2::operator -(const vec2& srcVector) const{
        return vec2( this->x - srcVector.x, this->y - srcVector.y );
    }

    // v1 = v1 - v2
    vec2& vec2::operator -=(const vec2& srcVector){
        *this = vec2( this->x - srcVector.x, this->y - srcVector.y );

        return *this;
    }

    vec2 vec2::operator -() const{
        return vec2( -1 * ( this->x ), -1 * ( this->y ) );
    }    

    float vec2::length() const{
        return( sqrt( (this->x)*(this->x) + (this->y)*(this->y) ) );
    }

    vec2& vec2::normalize(){
        float len = length();

        this->x = x / len;
        this->y = y / len;

        return *this;
    }

    float dotProduct(const vec2& v1, const vec2& v2){
        return ( v1.x * v2.x + v1.y * v2.y );
    }




}