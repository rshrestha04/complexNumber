/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "complex.h"
#include <iostream>
#include <cmath>
#include <sstream>

namespace csis3700{

    complex::complex(){
        real=0;
        imaginary=0;
    }
    
    complex:: complex(double a,double b){
        real=a;
        imaginary=b;
    }
    
    double complex::get_real() const{
        return real;
    }
    
    double complex::get_imaginary()const{
        return imaginary;
    }
    
     double complex:: magnitude() const{
         return sqrt((real*real)+(imaginary*imaginary));
        }
     double complex::norm() const{
         return (real*real+imaginary*imaginary);
     }
     complex complex::conjugate() const{
         return complex(real,-imaginary);
     }
     
     complex complex::negate() const{
         return complex(-real,-imaginary);
     }
     
     complex complex::reciprocal() const{
         return complex(real/(real*real+imaginary*imaginary),-imaginary/(real*real+imaginary*imaginary));
     }
     
     /////-----------OPERATORS OVERLOADING------///////
     bool operator ==(const complex& lhs,const complex& rhs){
         return(lhs.get_real()==rhs.get_real() and lhs.get_imaginary()==rhs.get_imaginary());
     }
     
     std::ostream& operator <<(std::ostream& out,const complex& rhs){
         if ( rhs.get_real()==0){
             out << rhs.get_imaginary()<<'i';
         }
        else if (rhs.get_imaginary()==0){
             out << rhs.get_real();
         }
         
         else if (rhs.get_imaginary() >0){
            out << rhs.get_real()<<'+' << rhs.get_imaginary() <<'i';
        }
         else if (rhs.get_imaginary() < 0){
            out << rhs.get_real() <<'-' << -rhs.get_imaginary() <<'i';
        }
     }
     bool operator !=(const complex& lhs,const complex& rhs){
         return (lhs.get_imaginary()!= rhs.get_imaginary() or lhs.get_real()!= rhs.get_real());
     }
     complex operator +(const complex& lhs,const complex& rhs){
         return (complex(lhs.get_real()+rhs.get_real(),lhs.get_imaginary()+rhs.get_imaginary()));
     }
     
     complex operator -(const complex& lhs, const complex& rhs){
         return(complex(lhs.get_real() - rhs.get_real(),lhs.get_imaginary() - rhs.get_imaginary() ));
     }
     
     complex operator *(const complex& lhs,const complex& rhs){
         return (complex(lhs.get_real()* rhs.get_real()-rhs.get_imaginary()*lhs.get_imaginary(),
                 lhs.get_real()*rhs.get_imaginary()+lhs.get_imaginary()*rhs.get_real()));
     }
     
     complex operator /(const complex& lhs, const complex& rhs){
         return (complex((lhs.get_real()* rhs.get_real()-(-rhs.get_imaginary())*lhs.get_imaginary())/ rhs.norm(),
                 (lhs.get_real()*(-rhs.get_imaginary())+lhs.get_imaginary()*rhs.get_real())/rhs.norm()));
         
     }
     
     
     
} 