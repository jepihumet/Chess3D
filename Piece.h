#ifndef PIECE_H
#define PIECE_H


#include <QtOpenGL/QGLWidget>
#include <QGLShaderProgram>

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


#include "constants.h"
#include "Object3D.h"


class Piece : public Object3D
{
public:
    Piece();

    int id;

};

class Piece_Bishop : public Piece
{
public:
    Piece_Bishop();
};

class Piece_Knight : public Piece
{
public:
    Piece_Knight();

};

class Piece_Pawn : public Piece
{
public:
    Piece_Pawn();

};

class Piece_Rook : public Piece
{
public:
    Piece_Rook();

};

class Piece_King : public Piece
{
public:
    Piece_King();

};

class Piece_Queen : public Piece
{
public:
    Piece_Queen();

};



#endif // PIECE_H
