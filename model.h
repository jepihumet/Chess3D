#ifndef MODEL_H
#define MODEL_H

//////////////////////////// GLC specific///////////////////////////////////////
// The factory
#include <GLC_Factory>
// Light
#include <GLC_Light>
// Material
#include <GLC_Material>
// The Viewport with a default camera
#include <GLC_Viewport>
// The World which manage GLC_object
#include <GLC_World>
// The Mover controller is used to change the point of view
#include <GLC_MoverController>

//////////////////////////End GLC specific/////////////////////////////////////

#include <Board.h>
#include <Piece.h>


class Model
{
public:
    Model(GLC_World m_World);
    void Dibuixa();
    GLC_World world;
    Piece* peces[2][16];
    Board tauler;
};

#endif // MODEL_H
