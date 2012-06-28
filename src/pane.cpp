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

#include <string>
#include <iostream>		//debug: cout

#include "pane.h"
#include "dimension.h"
#include "point.h"
#include "glcube.h"


namespace WordGL {

    Pane::Pane ( Point startPoint, Dimension dimension ): GLCube(startPoint, dimension) {
    }

    
    void Pane::draw() {
        glPushMatrix();
        this->move(this->startX, this->startY, this->startZ);
        this->drawTop(std::string("background"));
        glPopMatrix();
    }

    Pane::~Pane() {

    }
    
    void Pane::texturize(std::string textureName){
		TextureLoader* textureLoader = TextureLoader::getInstance();
        GLuint textureId = textureLoader->getTextureId(textureName);
		
		glEnable(GL_TEXTURE_2D);
 		glBindTexture(GL_TEXTURE_2D, textureId);
// 		//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
// 		//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
// 		
// 		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
// 		glTexParameteri(GL_TEXTURE_2D,
// 						GL_TEXTURE_MIN_FILTER,
// 						GL_LINEAR_MIPMAP_LINEAR);
	}

}
