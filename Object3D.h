#ifndef OBJECT3D_H
#define OBJECT3D_H


// The World which manage GLC_object
#include <GLC_World>
#include <GLC_3DViewInstance>
#include <GLC_StructInstance>

class Object3D
{
public:
        Object3D();
        ~Object3D();

        void setInstance(GLC_3DViewInstance *inst);
        void moveTo(double x, double y, double z);
        void rotate(const GLC_Vector3d &vect1, double angle);
        GLC_3DViewInstance *instance;
        GLC_World world;
};


#endif // OBJECT3D_H
