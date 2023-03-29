#include <iostream>
#include "coord3d.h"

#include "funcs.h"

int main()
{
  //task A 
  std::cout << "task a tests" << std::endl;
  Coord3D pointP = {10,20,30}; //assigns x,y,x values
  std::cout << length(&pointP)<< std::endl;
  

  std::cout << "-------------------------" << std::endl;
  
  Coord3D pointP3 = {-3,2,7}; //assigns x,y,x values
  std::cout << length(&pointP3)<< std::endl;

  std::cout << "-------------------------" << std::endl;

  //task b 
  std::cout << "task b tests" << std::endl;

  //assiging values to p1 and p2 
  Coord3D pointP1 = {10,20,30}; 
  Coord3D pointP2 = {-20,21,-22}; 

  std::cout << "Address of P1: " << &pointP1 << std::endl;
	std::cout << "Address of P2: " << &pointP2 << std::endl;
	Coord3D * ans = fartherFromOrigin(&pointP1, &pointP2);
	std::cout << "ans = " << ans << std::endl;

 std::cout << "-------------------------" << std::endl;

  Coord3D pointP4 = {-4,10,25}; 
  Coord3D pointP5 = {3,5,21};  

  std::cout << "Address of P1: " << &pointP4 << std::endl;
	std::cout << "Address of P2: " << &pointP5 << std::endl;
	Coord3D * ans1 = fartherFromOrigin(&pointP4, &pointP5);
	std::cout << "ans = " << ans1 << std::endl;

  //task c
  std::cout << "task c tests" << std::endl;
  Coord3D mpos = {0,0,100.0};
  Coord3D mvel = {1,-5,0.2};

  move(&mpos,&mvel,2.0);

  std::cout << mpos.x << " " << mpos.y << " " << mpos.z << std::endl;

  std::cout << "-------------------------" << std::endl;

  Coord3D mposC1 = {0,0,100.0};
  Coord3D mvelC2 = {30,10,0.5};

  move(&mposC1,&mvelC2,4.0);

  std::cout << mposC1.x << " " << mposC1.y << " " << mposC1.z << std::endl;

  std::cout << "-------------------------" << std::endl;

  //task E 
  std::cout << "task e tests" << std::endl;
  double x = 0;
  double y = 0;
  double z = 100.0;

  Coord3D *posE = createCoord3D(x,y,z);
  
  double xv = 1;
  double yv = -5;
  double zv = 0.2;

  Coord3D *posV = createCoord3D(xv,yv,zv);

  move(posE,posV,2.0);

  std::cout << (*posE).x << " " << (*posE).y << " " << (*posE).z << std::endl;

  deleteCoord3D(posE); // release memory
  deleteCoord3D(posV); 

  return 0;

}
