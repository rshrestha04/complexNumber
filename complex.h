/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   complex.h
 * Author: Ronish Shrestha
 *
 * Created on January 25, 2018, 8:04 PM
 */

#ifndef COMPLEX_H
#define COMPLEX_H
#include <sstream>
namespace csis3700 {
    class complex{
    private:
        double real;
        double imaginary;
    public:
        complex();
        complex(double, double);
        double get_real()const;
        double get_imaginary() const;
        double magnitude() const;
        double norm() const;
        complex conjugate() const;
        complex negate() const;
        complex reciprocal() const;
        
        
    };
    
    bool operator ==(const complex& lhs,const complex& rhs);
     std::ostream& operator <<(std::ostream& out,const complex& rhs);
     bool operator !=(const complex& lhs,   const complex& rhs);
     complex operator +(const complex& lhs, const complex& rhs);
     complex operator -(const complex& lhs, const complex& rhs);
     complex operator *(const complex& lhs, const complex& rhs);
     complex operator /(const complex& lhs, const complex& rhs);
}



#endif /* COMPLEX_H */

