/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "complex.h"
#include<iostream>
#include <sstream>
using namespace csis3700;
using namespace std;


TEST_CASE("default_should_be_zero","[complex]"){
    complex c;
    REQUIRE(c.get_real()==0);
    REQUIRE(c.get_imaginary()==0);
    
}

TEST_CASE("passing values","[complex]"){
    complex c(5,1);
    REQUIRE(c.get_real()==5);
    REQUIRE(c.get_imaginary()==1);
    
}

TEST_CASE("getting magnitude","[complex]"){
    complex c(5,12);
    REQUIRE (c.magnitude()==13);
}

TEST_CASE("getting norm","[complex]"){
    complex c(5,-12);
    REQUIRE (c.norm()==169);
}

TEST_CASE("CHECKING == OPERATOR","complex[]"){
    complex c1(5,3);
    complex c2(5,3);
    complex c3(3,5);
    complex c4(3,4);
    REQUIRE(c1==c2);
    REQUIRE(!(c2==c3));
    REQUIRE(!(c3==c2));    
    
}

TEST_CASE("getting conjugate","[complex]"){
  const complex c(5,3);
  complex b= c.conjugate();
  REQUIRE(b == complex(5,-3));
}

TEST_CASE("getting negate","[complex]"){
    const complex c1(1,2);
    complex c2 = c1.negate();
    REQUIRE(c2 == complex(-1,-2));
}

TEST_CASE("GETTING RECIPROCAL","[complex]"){
    const complex c1(1,1); 
     complex c2 = c1.reciprocal();
    REQUIRE (c2 == complex(0.5,-0.5));
    
 }

TEST_CASE("printing complex numbers negative", "[complex]"){
     complex c1(12,-1);
    std::stringstream ss;
    ss << c1;
    REQUIRE(ss.str()=="12-1i");
}
TEST_CASE("printing complex numbers positive", "[complex]"){
     complex c1(12,1);
    std::stringstream ss;
    ss << c1;
    REQUIRE(ss.str()=="12+1i");
}

TEST_CASE("printing complex numbers real", "[complex]"){
     complex c1(12,0);
    std::stringstream ss;
    ss << c1;
    REQUIRE(ss.str()=="12");
}

TEST_CASE("printing complex numbers imaginary", "[complex]"){
     complex c1(0,-1);
    std::stringstream ss;
    ss << c1;
    REQUIRE(ss.str()=="-1i");
}

TEST_CASE("not equal sign ","[complex]"){
    complex c1(1,2);
    complex c2(1,2);
    complex c3(1,3);
    complex c4(2,2);
    complex c5(3,6);
    REQUIRE(!(c1!=c2));
    REQUIRE((c1!=c4));
    REQUIRE(c1!=c3);
    REQUIRE(c1!=c5);
}

TEST_CASE("ADD OPERATOR","[complex]"){
    complex c1(3,4);
    complex c2(2,1);
    complex c3(3,-6);
    complex c4(-3,6);
    complex c5=c1+c2;
    complex c6=c3+c1;
    complex c7=c3+c4;
    REQUIRE(c5==complex(5,5));
    REQUIRE(c6==complex(6,-2));
    REQUIRE(c7== complex(0,0));
    
}

TEST_CASE("subtraction operator","[complex]"){
   complex c1(3,4);
   complex c2(2,1);
   complex c3(3,-6); 
   complex c5=c1-c2;
   complex c6=c1-c3;
   complex c7=c2-c3;
   REQUIRE(c5==complex(1,3));
   REQUIRE(c6==complex(0,10));
   REQUIRE(c7==complex(-1,7));
   
}

TEST_CASE("multiplication operator","{[complex]"){
   complex c1(3,4);
   complex c2(2,1);
   complex c3(3,-6); 
   complex c5=c1*c2;
   complex c6=c1*c3;
   REQUIRE ( c5==complex(2,11));
   REQUIRE ( c6==complex (33,-6));
}
TEST_CASE("division operator","[complex]"){
    complex c1(2,3);
    complex c2(1,-4);
    complex c3=c1/c2;
    REQUIRE(c3.get_real()== Approx(-0.588235).epsilon(0.0001));
    REQUIRE (c3.get_imaginary()==Approx(0.647059).epsilon(0.0001));
    
}
 



