#pragma once

#include "common.h"

#include <vector>

struct SDL_Window;
struct SDL_Renderer;

struct StateSDL {
    int windowX = 1200;
    int windowY = 800;

    SDL_Window * window = nullptr;
    SDL_Renderer * renderer = nullptr;

    bool initWindow(const char * windowTitle);
    bool initImGui(float fontScale, const std::vector<AppCommon::FontInfo> & fonts);
    bool deinitWindow();
    bool deinitImGui();
};
