//
// Created by Семён Чубенко on 31.10.2021.
//

#ifndef TEXTEDITOR_FINDERCONTROLLER_H
#define TEXTEDITOR_FINDERCONTROLLER_H

#include "FinderModel.h"
#include "FinderRender.h"

class FinderController {
private:
    FinderModel* m_model;
    FinderRender* m_render;
public:
    FinderController(FinderModel* model, FinderRender* render);
    void Run();
};


#endif //TEXTEDITOR_FINDERCONTROLLER_H
