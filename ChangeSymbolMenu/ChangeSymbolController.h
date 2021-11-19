//
// Created by Семён Чубенко on 19.11.2021.
//

#ifndef TEXTEDITOR_CHANGESYMBOLCONTROLLER_H
#define TEXTEDITOR_CHANGESYMBOLCONTROLLER_H

#include "ChangeSymbolModel.h"
#include "ChangeSymbolRender.h"

class ChangeSymbolController {
private:
    ChangeSymbolModel* m_model;
    ChangeSymbolRender* m_render;
public:
    ChangeSymbolController(ChangeSymbolModel* model, ChangeSymbolRender* render);
    void Run();
};


#endif //TEXTEDITOR_CHANGESYMBOLCONTROLLER_H
