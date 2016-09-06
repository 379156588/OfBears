//
//  MenuScene.hpp
//  OfBears
//
//  Created by king on 16/9/5.
//
//

#ifndef MenuScene_hpp
#define MenuScene_hpp

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;
class MenuScene : public Layer {
    
public:
    static Scene *createScene();
    virtual bool init();
    CREATE_FUNC(MenuScene);
};
#endif /* MenuScene_hpp */
