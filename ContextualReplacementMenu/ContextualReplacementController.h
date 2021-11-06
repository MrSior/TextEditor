//
// Created by Семён Чубенко on 06.11.2021.
//

#ifndef TEXTEDITOR_CONTEXTUALREPLACEMENTCONTROLLER_H
#define TEXTEDITOR_CONTEXTUALREPLACEMENTCONTROLLER_H

#include "ContextualReplacementModel.h"
#include "ContextualReplacementRender.h"

class ContextualReplacementController {
private:
    ContextualReplacementModel* m_model;
    ContextualReplacementRender* m_render;
public:
    ContextualReplacementController(ContextualReplacementModel* model, ContextualReplacementRender* render);
    void Run();
};


#endif //TEXTEDITOR_CONTEXTUALREPLACEMENTCONTROLLER_H
