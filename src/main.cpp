#include <Geode/Geode.hpp>
#include <Geode/modify/CCLayer.hpp>

using namespace geode::prelude;

class $modify(GlobalLayerMod, CCLayer) {
    void onEnter() override {
        CCLayer::onEnter();

        if (auto background = getChildByID("background")) {
            if (auto shittyassbg = typeinfo_cast<CCSprite*>(background)) {
                shittyassbg->setColor(ccc3(150, 150, 150));
                shittyassbg->stopAllActions();
                shittyassbg->setOpacity(255);
            }
        }
    }
};