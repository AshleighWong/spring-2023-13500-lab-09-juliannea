#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"
#include <cmath>
// add your tests here
TEST_CASE("Tests for length(Coord3D *p)")
{
    Coord3D pointP = {10,20,30};
    CHECK( length(&pointP) == sqrt((pow(10,2))+ (pow(20,2)) + (pow(30,2))));

    Coord3D pointP3 = {-3,2,7};
    CHECK( length(&pointP3) == sqrt((pow(-3,2))+ (pow(2,2)) + (pow(7,2))));

}

TEST_CASE("TESTS for Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)")
{
    Coord3D pointP1 = {10,20,30}; //equals 37.66
    Coord3D pointP2 = {-20,21,-22}; //36.4 about 
    CHECK( fartherFromOrigin(&pointP1, &pointP2) == &pointP1);

    Coord3D pointP4 = {-4,10,25}; 
    Coord3D pointP5 = {3,5,21};  
    CHECK( fartherFromOrigin(&pointP4, &pointP5) == &pointP4);
}

TEST_CASE("Tests for void move(Coord3D *ppos, Coord3D *pvel, double dt)" )
{
    Coord3D mpos = {0,0,100.0};
    Coord3D mvel = {1,-5,0.2};

    move(&mpos,&mvel,2.0);

    CHECK( mpos.x == 2);
    CHECK( mpos.y == -10);
    CHECK( mpos.z == 100.4);

    Coord3D mposC1 = {0,0,100.0};
    Coord3D mvelC2 = {30,10,0.5};

    move(&mposC1,&mvelC2,4.0);

    CHECK( mposC1.x == 120);
    CHECK( mposC1.y == 40);
    CHECK( mposC1.z == 102);
}

TEST_CASE("Tests for Coord3D* createCoord3D(double x, double y, double z)")
{
    //test 1
    double x = 0;
    double y = 0;
    double z = 100.0;
    Coord3D *posE = createCoord3D(x,y,z);

    double xv = 1;
    double yv = -5;
    double zv = 0.2;
    Coord3D *posV = createCoord3D(xv,yv,zv);

    CHECK((*posE).x == 0);
    CHECK((*posE).y == 0);
    CHECK((*posE).z == 100.0);

    deleteCoord3D(posE);
    deleteCoord3D(posV);

}