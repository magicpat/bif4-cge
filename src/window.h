/**
 *  WordGL
 *  Copyright (C) 2012  Bernhard Posselt <bernhard.posselt@gmx.at>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <stdlib.h>
#include "game.h"

namespace WordGL {

    class Window {

    public:
        Window(int* argc, char** argv, const char* title, int width, int height);
        ~Window();
        void init();
        void resize ( int width, int height );
        void keyPressed(unsigned char key, int x, int y);
        void display();
        static Window* getInstance();

    private:
        int window;
        int width;
        int height;
        const char* title;
        Game game;
        static Window* windowInstance;
    };

}