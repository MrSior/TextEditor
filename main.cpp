#include "TextEditorModel.h"
#include "TextEditorRender.h"
#include "TextEditorController.h"

int main() {
    TextEditorModel model;
    TextEditorRender render(&model);
    TextEditorController controller(&render, &model);
    controller.Run();
}
