#include "model.h"

Model::Model(GLC_World m_World){
        world = m_World;

        QFile ftau(":objects/tauler.obj");
        QFile torre(":objects/torre.obj");
        QFile cavall(":objects/cavall.obj");
        QFile alfil(":objects/alfil.obj");
        QFile reina(":objects/reina.obj");
        QFile rei(":objects/rei.obj");
        QFile peo(":objects/peo.obj");

        GLC_World w0 = GLC_Factory::instance()->createWorldFromFile(ftau);
        GLC_World w1 = GLC_Factory::instance()->createWorldFromFile(torre);
        GLC_World w2 = GLC_Factory::instance()->createWorldFromFile(cavall);
        GLC_World w3 = GLC_Factory::instance()->createWorldFromFile(alfil);
        GLC_World w4 = GLC_Factory::instance()->createWorldFromFile(reina);
        GLC_World w5 = GLC_Factory::instance()->createWorldFromFile(rei);
        GLC_World w6 = GLC_Factory::instance()->createWorldFromFile(peo);

        ftau.close();
        torre.close();
        cavall.close();
        alfil.close();
        reina.close();
        rei.close();
        peo.close();

/*
        world.mergeWithAnotherWorld(w0);
        tauler.obj.setInstance(world.collection()->visibleInstancesHandle().at(0));

        tauler.obj.moveTo(0,0,0);
        tauler.obj.rotate(glc::Y_AXIS,glc::PI/4);
        tauler.obj.rotate(glc::Z_AXIS,glc::PI/4)
*/

        // -----------------------------------------------
        // Ara comencem a afegim les peces
        // -----------------------------------------------

        //Torres
        world.rootOccurence()->addChild(w1.instances().first());
        this->peces[0][0] = new Piece_Rook();
        this->peces[0][0]->setInstance(world.collection()->visibleInstancesHandle().last());
        world.rootOccurence()->addChild(w1.instances().first());
        this->peces[0][1] = new Piece_Rook();
        this->peces[0][1]->setInstance(world.collection()->visibleInstancesHandle().last());

        //Cavalls
        world.rootOccurence()->addChild(w2.instances().first());
        this->peces[0][2] = new Piece_Knight();
        this->peces[0][2]->setInstance(world.collection()->visibleInstancesHandle().last());
        world.rootOccurence()->addChild(w2.instances().first());
        this->peces[0][3] = new Piece_Knight();
        this->peces[0][3]->setInstance(world.collection()->visibleInstancesHandle().last());

        //Alfils
        world.rootOccurence()->addChild(w3.instances().first());
        this->peces[0][4] = new Piece_Bishop();
        this->peces[0][4]->setInstance(world.collection()->visibleInstancesHandle().last());
        world.rootOccurence()->addChild(w3.instances().first());
        this->peces[0][5] = new Piece_Bishop();
        this->peces[0][5]->setInstance(world.collection()->visibleInstancesHandle().last());

        //Reina
        world.rootOccurence()->addChild(w4.instances().first());
        this->peces[0][6] = new Piece_Queen();
        this->peces[0][6]->setInstance(world.collection()->visibleInstancesHandle().last());

        //Rei
        world.rootOccurence()->addChild(w5.instances().first());
        this->peces[0][7] = new Piece_King();
        this->peces[0][7]->setInstance(world.collection()->visibleInstancesHandle().last());

        //Peons
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        world.rootOccurence()->addChild(w6.instances().first());
        this->peces[0][8] = new Piece_Pawn();
        this->peces[0][8]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][9] = new Piece_Pawn();
        this->peces[0][9]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][10] = new Piece_Pawn();
        this->peces[0][10]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][11] = new Piece_Pawn();
        this->peces[0][11]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][12] = new Piece_Pawn();
        this->peces[0][12]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][13] = new Piece_Pawn();
        this->peces[0][13]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][14] = new Piece_Pawn();
        this->peces[0][14]->setInstance(world.collection()->visibleInstancesHandle().last());
        this->peces[0][15] = new Piece_Pawn();
        this->peces[0][15]->setInstance(world.collection()->visibleInstancesHandle().last());

        //Les aliniem, però com que no estan centrades en els .obj no queden ben alineades.
        for (int i = 0; i < 8; i++){
                this->peces[0][i]->moveTo(i*20,0,0);
                this->peces[0][i+8]->moveTo(i*20,0,20);
        }

}

void Model::Dibuixa(){
        //this->peces[0]->rotate(glc::X_AXIS, glc::PI/2);
}
