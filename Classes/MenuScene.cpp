//
//  MenuScene.cpp
//  OfBears
//
//  Created by king on 16/9/5.
//
//

#include "MenuScene.hpp"

Scene *MenuScene::createScene(){
    auto scene = Scene::create();
    auto layer = MenuScene::create();
    scene->addChild(layer);
    return scene;
}
bool MenuScene::init(){
    if (!Layer::init()) {
        
        
        return false;
    }
    
    //我添加了一些东西
    return true;
}