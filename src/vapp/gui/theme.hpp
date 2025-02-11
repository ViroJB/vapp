#pragma once

#include <map>
#include <GLFW/glfw3.h>
#include <IconsFontAwesome.h>

struct ImFont;

namespace Vapp {

enum FontType {
    Normal,
    Bold,
    Header1,
    Header2,
    Header3,
    Awesome,
};

class Theme {
   public:
    Theme();
    ~Theme();
    void init();

    void pushFont(FontType type);
    void popFont();

    void pushDefaultStyle();
    void popDefaultStyle();

    void enableDarkModeForWindow(GLFWwindow* window);

   private:
    std::map<FontType, ImFont*> m_fonts;

   private:
    void loadFonts();
};

}  // namespace Vapp