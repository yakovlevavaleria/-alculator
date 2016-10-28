#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator sum", "[sum]") {
    float x = 5.0;
    float y = 4.0;
    
    double rv = sum( x, y );
    
	REQUIRE( rv == 9.0 );
}
SCENARIO("calculator sub", "[sub]") {
    float x = 5.0;
    float y = 4.0;
    
    double rv = sub( x, y );
    
	REQUIRE( rv == 1.0 );
}
SCENARIO("calculator mult", "[mult]") {
    float x = 5.0;
    float y = 4.0;
    
    double rv = mult( x, y );
    
	REQUIRE( rv == 20.0 );
}
SCENARIO("calculator div", "[div]") {
    float x = 5.0;
    float y = 4.0;
    
    double rv = div( x, y );
    
	REQUIRE( rv == 1.25 );
}
SCENARIO("calculator pow4", "[pow4]") {
    float x = 6.0;
    float y = 1.0;
    
    double rv = pow4( x, y );
    
	REQUIRE( rv == 6.0 );
}
SCENARIO("calculator sq", "[sq]") {
    float x = 4.0;
    
    double rv = sq( x );
    
	REQUIRE( rv == 2.0 );
}
