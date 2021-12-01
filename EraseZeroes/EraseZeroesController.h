//
// Created by Семён Чубенко on 02.12.2021.
//

#ifndef TEXTEDITOR_ERASEZEROESCONTROLLER_H
#define TEXTEDITOR_ERASEZEROESCONTROLLER_H

#include "EraseZeroesModel.h"
#include "EraseZeroesRender.h"

class EraseZeroesController {
private:
    EraseZeroesModel* m_model;
    EraseZeroesRender* m_render;
public:
    EraseZeroesController(EraseZeroesModel* model, EraseZeroesRender* render);
    void Run();
};


#endif //TEXTEDITOR_ERASEZEROESCONTROLLER_H
