#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "hash.h"


using namespace std;

TEST_CASE("Insert find and remove using  hash")
{

    Hash h;
    h.push(5);
    h.push(19);
    h.push(2);
    h.push(21);
    h.push(10);
    h.push(4);
    
    REQUIRE(h.find(2)== true);
    REQUIRE(h.find(4)== true);
    REQUIRE(h.find(19)== true);
    REQUIRE(h.find(23)== false);
    REQUIRE(h.find(10)==true);
    h.push(23);
    REQUIRE(h.find(23)==true);
    h.remove(19);
    REQUIRE(h.find(19)== false);

}

