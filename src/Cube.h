#pragma once

#include "ofMain.h"

#include "Material.h"

class Cube : public ofNode
{
public:
    Cube(Material* m);
    virtual ~Cube();
    virtual void customDraw();

private:
    Material* _m;
    ofVboMesh _mesh;
};

