/**
 *  WordGL
 *  Copyright (C) 2012  Patrick Stapfer <p.stapfer@technikum-wien.at>
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

#ifdef __APPLE__
    #include <OpenGL/gl.h>
#else
    #include <GL/gl.h>
#endif

#include "glcube.h"

namespace WordGL {
    
    class LetterCube: public GLCube {

    public:
        LetterCube(Point startPoint, Dimension dimension, char letter);
		char getLetter();
        virtual ~LetterCube();
		void setLetter(char letter);
	private:
		char letter;
		
	};
    
}