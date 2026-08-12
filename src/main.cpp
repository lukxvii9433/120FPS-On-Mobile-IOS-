#include <Geode/Geode.hpp>
#include <Geode/modify/AppDelegate.hpp>

using namespace geode::prelude;

class $modify(FPSUnlockAppDelegate, AppDelegate) {
    bool applicationDidFinishLaunching() {
        if (!AppDelegate::applicationDidFinishLaunching()) return false;

        if (auto director = CCDirector::sharedDirector()) {
            director->setAnimationInterval(1.0 / 120.0);
        }
        return true;
    }
};

$execute {
    log::info("120 FPS Unlock loaded");
}
