#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class LoadingLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "LoadingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingLayer();

    /**
     * @note[short] MacOS (ARM): 0x31744c
     * @note[short] MacOS (Intel): 0x38ccb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26f42c
     * @note[short] Android: Rebinded
     */
     ~LoadingLayer();

    /**
     * @note[short] MacOS (Intel): 0x38bbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26e494
     * @note[short] Android
     */
    static LoadingLayer* create(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x316308
     * @note[short] MacOS (Intel): 0x38bac0
     * @note[short] Windows: 0x468f70
     * @note[short] iOS: 0x26e450
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x316c24
     * @note[short] MacOS (Intel): 0x38c410
     * @note[short] Windows: 0x46a480
     * @note[short] iOS: 0x26ec20
     * @note[short] Android
     */
    const char* getLoadingString();

    /**
     * @note[short] MacOS (ARM): 0x3164a0
     * @note[short] MacOS (Intel): 0x38bca0
     * @note[short] Windows: 0x469080
     * @note[short] iOS: 0x26e548
     * @note[short] Android
     */
    bool init(bool refresh);

    /**
     * @note[short] MacOS (ARM): 0x316d00
     * @note[short] MacOS (Intel): 0x38c4d0
     * @note[short] Windows: 0x469940
     * @note[short] iOS: 0x26ecfc
     * @note[short] Android
     */
    void loadAssets();

    /**
     * @note[short] MacOS (ARM): 0x317418
     * @note[short] MacOS (Intel): 0x38cc80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26f3a0
     * @note[short] Android
     */
    void loadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x316c94
     * @note[short] MacOS (Intel): 0x38c470
     * @note[short] Windows: 0x4698d0
     * @note[short] iOS: 0x26ec90
     * @note[short] Android
     */
    void updateProgress(int progress);
    bool m_unknown;
    bool m_unknown2;
    int m_loadStep;
    cocos2d::CCLabelBMFont* m_caption;
    TextArea* m_textArea;
    cocos2d::CCSprite* m_sliderBar;
    float m_sliderGrooveXPos;
    float m_sliderGrooveHeight;
    bool m_fromRefresh;
};
