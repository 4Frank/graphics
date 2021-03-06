//
//  zyh.cpp
//  mygraphics
//
//  Created by zyhc on 12/1/15.
//  Copyright © 2015 zyhc. All rights reserved.
//

#include "zyh.hpp"
#include "../../basicobject/triangle.hpp"
#include "rotatingtriangle.hpp"
void zyhPart(std::vector<Object*>* objectList)
{
    Triangle *t1 = new Triangle;
    t1->location.x = 50.0;
    t1->location.y = 10;
    t1->location.z = -50;
    objectList->push_back(t1);
    Triangle *t2 = new Triangle;
    t2->location.x =50.0;
    t2->location.y = 10;
    t2->location.z = -50;
    objectList->push_back(t2);
    Triangle *t3 = new Triangle;
    t3->location.x = -20;
    t3->location.y = 0;
    t3->location.z = 0;
    t3->size = Vector3(5,5,5);
    t2->addChild(t3);
    RotatingTriangle* rt1 = new RotatingTriangle;
    rt1->location = Vector3(70,10,-50);
    objectList->push_back(rt1);
    
}