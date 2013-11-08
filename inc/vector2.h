#ifndef _MATHLIB_VECTOR2_H
#define _MATHLIB_VECTOR2_H
#include "mathdecl.h"

namespace Math
{

    template <class _Type>
    class Vector2
    {
    public:
        _Type x, y;
        
        ///
        /// Initializes this Vector2 to a zero vector.
        /// Ex:
        ///     Vector2<real_t> x = Vector2();
        ///
        Vector2() : x(0), y(0) 
        { 
        }
        
        ///
        /// Initializes this Vector2 such that x = f, y = f.
        /// Ex:
        ///     Vector2<real_t> x = Vector2(1);
        ///
        Vector2(const _Type& f) : x(f), y(f) 
        { 
        }
        
        ///
        /// Initializes this Vector2 such that x = x1, y = y1
        /// Ex:
        ///     Vector2<real_t> x = Vector2(3, 5);
        /// 
        Vector2(const _Type& x1, const _Type& y1) : x(x1), y(y1) 
        { 
        }
        
        ///
        /// Initializes this Vector2 such that x = other.x, y = other.y
        /// Ex:
        ///     Vector2<real_t> x = Vector2(0, 1);
        ///     Vector2<real_t> y(x);
        /// 
        Vector2(const Vector2<_Type>& other)
        {
            x = other.x;
            y = other.y;
        }
        
        ~Vector2() { }
        
        
        ///
        /// Sets this vector's (x,y) components to the other (x,y) components.
        /// Ex:
        ///     Vector2<real_t> x = Vector2(0, 0);
        ///
        Vector2<_Type>& operator=(const Vector2<_Type>& other)
        {
            x = other.x;
            y = other.y;
            return *this;
        }
        
        ///
        /// Adds two vectors component-wise, returning a new vector.
        /// The underlying type must support the + operator.
        /// Ex:
        ///     Vector2<real_t> x = Vector2(0, 1) + Vector2(3, 5);
        ///
        Vector2<_Type> operator+(const Vector2<_Type>& other)
        {
            return Vector2<_Type>(x + other.x, y + other.y);
        }
        
        ///
        /// Adds 'other' vector to this vector, component-wise, and then returns
        /// a reference to itself.
        /// Ex:
        ///     Vector2<real_t> x;
        ///     x += Vector2(3, 4);
        ///
        Vector2<_Type>& operator+=(const Vector2<_Type>& other)
        {
            x += other.x;
            y += other.y;
            return *this;
        }
        
        /// 
        /// Returns the result of adding this vector and the negation of 
        /// the other vector.
        /// Ex:
        ///     Vector2<real_t> x = Vector2(0, 1) - Vector2(3, 5);
        ///
        Vector2<_Type> operator-(const Vector2<_Type>& other)
        {
            return Vector2<_Type>(x - other.x, y - other.y);
        }
        
        /// 
        /// Adds the negation of the other vector to this vector, component-wise,
        /// then returns a reference to itself.
        /// Ex:
        ///     Vector2<real_t> x;
        ///     x -= Vector2(0, 1);
        ///
        Vector2<_Type>& operator-=(const Vector2<_Type>& other)
        {
            x -= other.x;
            y -= other.y;
            return *this;
        }
        
        ///
        /// Returns the component-wise product of this vector and another.
        /// Ex:
        ///     Vector2<real_t> result = Vector2(0, 1) * Vector2(3, 4);
        ///
        Vector2<_Type> operator*(const Vector2<_Type>& other)
        {
            return Vector2<_Type>(x * other.x, y * other.y);
        }
        
        ///
        /// Multiplies each component of this vector by the corresponding 
        /// other component, storing the product in this vector's component.
        /// Ex:
        ///     Vector2<real_t> x;
        ///     x *= Vector2(0, 3);
        ///
        Vector2<_Type>& operator*=(const Vector2<_Type>& other)
        {
            x *= other.x;
            y *= other.y;
            return *this;
        }
        
        ///
        /// Returns a new vector that represents a scaled version of this vector.
        /// Ex:
        ///     x * 3.5
        ///
        Vector2<_Type> operator*(const _Type& scalar)
        {
            return Vector2<_Type>(x * scalar, y * scalar);
        }
        
        ///
        ///
        ///
    };    
    
}



#endif /* _MATHLIB_VECTOR2_H */
