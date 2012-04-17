#include "Object3D.h"

Object3D::Object3D()
{


}

Object3D::~Object3D()
{

}


void Object3D::setInstance(GLC_3DViewInstance *inst){
        this->instance = inst;
        this->instance->resetMatrix();
}

void Object3D::moveTo(double x, double y, double z){
        GLC_Matrix4x4 *matrix = new GLC_Matrix4x4();
        matrix->setToIdentity();
        matrix->setMatTranslate(x,y,z);
        this->instance->setMatrix(*matrix);
}

void Object3D::rotate(const GLC_Vector3d &vect1, double angle){
        GLC_Matrix4x4 *matrix = new GLC_Matrix4x4();
        matrix->setToIdentity();
        matrix->setMatRot(vect1,angle);
        this->instance->setMatrix(*matrix);
}
