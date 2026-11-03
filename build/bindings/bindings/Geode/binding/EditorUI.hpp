#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObjectEditorState.hpp>
#include <Geode/binding/GJTransformState.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/GJRotationControlDelegate.hpp>
#include <Geode/binding/GJScaleControlDelegate.hpp>
#include <Geode/binding/GJTransformControlDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/unordered_map.hpp>

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public GJTransformControlDelegate, public MusicDownloadDelegate, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorUI";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditorUI, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x2d353c
     * @note[short] MacOS (Intel): 0x1a900
     * @note[short] Windows: 0x1a8dd0
     * @note[short] Android: Rebinded
     */
     EditorUI();

    /**
     * @note[short] MacOS (ARM): 0x42e0
     * @note[short] MacOS (Intel): 0x4e00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46e3d0
     * @note[short] Android: Rebinded
     */
     ~EditorUI();

    /**
     * @note[short] MacOS (ARM): 0x459c
     * @note[short] MacOS (Intel): 0x5210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditorUI* create(LevelEditorLayer* editorLayer);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static EditorUI* get();

    /**
     * @note[short] MacOS (ARM): 0x602b78
     * @note[short] MacOS (Intel): 0x6efbb0
     * @note[short] Windows: 0x1f8f90
     * @note[short] Android
     */
    static int getRandomStartKey(int specialTemplate);

    /**
     * @note[short] MacOS (ARM): 0x602db4
     * @note[short] MacOS (Intel): 0x6efde0
     * @note[short] Windows: 0x1f9230
     * @note[short] Android
     */
    static int getSmartObjectKey(int key, GJSmartDirection direction);

    /**
     * @note[short] MacOS (ARM): 0x602b58
     * @note[short] MacOS (Intel): 0x6efb90
     * @note[short] Windows: 0x1f8ef0
     * @note[short] Android
     */
    static int smartTypeForKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x16f40
     * @note[short] MacOS (Intel): 0x1a280
     * @note[short] Windows: 0x1bf390
     * @note[short] iOS: 0x47ce80
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x549fbc
     * @note[short] MacOS (Intel): 0x609d80
     * @note[short] Windows: 0x1bff50
     * @note[short] iOS: 0x1610ac
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x54a564
     * @note[short] MacOS (Intel): 0x60a2c0
     * @note[short] Windows: 0x1c0500
     * @note[short] iOS: 0x161520
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x54ab94
     * @note[short] MacOS (Intel): 0x60a9a0
     * @note[short] Windows: 0x1c0cf0
     * @note[short] iOS: 0x161b14
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x54b388
     * @note[short] MacOS (Intel): 0x60b2f0
     * @note[short] Windows: 0x1c1a00
     * @note[short] iOS: 0x162340
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x54b608
     * @note[short] MacOS (Intel): 0x60b550
     * @note[short] Windows: 0x134dc0
     * @note[short] iOS: 0x1623b8
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x54b640
     * @note[short] MacOS (Intel): 0x60b590
     * @note[short] Windows: 0x1c1a80
     * @note[short] iOS: 0x1623f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x54b654
     * @note[short] MacOS (Intel): 0x60b5c0
     * @note[short] Windows: 0x1c1a90
     * @note[short] iOS: 0x162404
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x1a9340
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual EditorUI* getUI();

    /**
     * @note[short] MacOS (ARM): 0xe818
     * @note[short] MacOS (Intel): 0x10270
     * @note[short] Windows: 0x1b10b0
     * @note[short] iOS: 0x476720
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0xe700
     * @note[short] MacOS (Intel): 0x10170
     * @note[short] Windows: 0x1b0fd0
     * @note[short] iOS: 0x476650
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x552170
     * @note[short] MacOS (Intel): 0x613660
     * @note[short] Windows: 0x203590
     * @note[short] iOS: 0x1605cc
     * @note[short] Android
     */
    virtual void updateTransformControl();

    /**
     * @note[short] MacOS (ARM): 0x552400
     * @note[short] MacOS (Intel): 0x613960
     * @note[short] Windows: 0x2038c0
     * @note[short] iOS: 0x160844
     * @note[short] Android
     */
    virtual void transformChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x552448
     * @note[short] MacOS (Intel): 0x6139d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x16088c
     * @note[short] Android
     */
    virtual void transformChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x174cc
     * @note[short] MacOS (Intel): 0x1a8d0
     * @note[short] Windows: 0x1a9350
     * @note[short] iOS: 0x47d348
     * @note[short] Android
     */
    virtual cocos2d::CCNode* getTransformNode();

    /**
     * @note[short] MacOS (ARM): 0x550bdc
     * @note[short] MacOS (Intel): 0x611da0
     * @note[short] Windows: 0x2028c0
     * @note[short] iOS: 0x15fd04
     * @note[short] Android
     */
    virtual void transformScaleXChanged(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x550d10
     * @note[short] MacOS (Intel): 0x611f00
     * @note[short] Windows: 0x2028e0
     * @note[short] iOS: 0x15fd1c
     * @note[short] Android
     */
    virtual void transformScaleYChanged(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x550e44
     * @note[short] MacOS (Intel): 0x612060
     * @note[short] Windows: 0x202900
     * @note[short] iOS: 0x15fd34
     * @note[short] Android
     */
    virtual void transformScaleXYChanged(float scaleX, float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x550f7c
     * @note[short] MacOS (Intel): 0x6121d0
     * @note[short] Windows: 0x202920
     * @note[short] iOS: 0x15fd50
     * @note[short] Android
     */
    virtual void transformSkewXChanged(float skewX);

    /**
     * @note[short] MacOS (ARM): 0x5510b0
     * @note[short] MacOS (Intel): 0x612330
     * @note[short] Windows: 0x202940
     * @note[short] iOS: 0x15fd68
     * @note[short] Android
     */
    virtual void transformSkewYChanged(float skewY);

    /**
     * @note[short] MacOS (ARM): 0x5511e4
     * @note[short] MacOS (Intel): 0x612490
     * @note[short] Windows: 0x202960
     * @note[short] iOS: 0x15fd80
     * @note[short] Android
     */
    virtual void transformRotationXChanged(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x551318
     * @note[short] MacOS (Intel): 0x6125f0
     * @note[short] Windows: 0x202980
     * @note[short] iOS: 0x15fd98
     * @note[short] Android
     */
    virtual void transformRotationYChanged(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x55144c
     * @note[short] MacOS (Intel): 0x612750
     * @note[short] Windows: 0x2029a0
     * @note[short] iOS: 0x15fdb0
     * @note[short] Android
     */
    virtual void transformRotationChanged(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x551584
     * @note[short] MacOS (Intel): 0x6128c0
     * @note[short] Windows: 0x2029c0
     * @note[short] iOS: 0x15fdcc
     * @note[short] Android
     */
    virtual void transformResetRotation();

    /**
     * @note[short] MacOS (ARM): 0x55163c
     * @note[short] MacOS (Intel): 0x6129b0
     * @note[short] Windows: 0x2029f0
     * @note[short] iOS: 0x15fe10
     * @note[short] Android
     */
    virtual void transformRestoreRotation();

    /**
     * @note[short] MacOS (ARM): 0x101fc
     * @note[short] MacOS (Intel): 0x11e20
     * @note[short] Windows: 0x1b4760
     * @note[short] iOS: 0x477c8c
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x16ae4
     * @note[short] MacOS (Intel): 0x19e00
     * @note[short] Windows: 0x1bed60
     * @note[short] iOS: 0x47cc48
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x54b76c
     * @note[short] MacOS (Intel): 0x60b6e0
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x16251c
     * @note[short] Android
     */
    virtual void keyUp(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x54b774
     * @note[short] MacOS (Intel): 0x60b700
     * @note[short] Windows: 0x1c1bf0
     * @note[short] iOS: 0x162524
     * @note[short] Android
     */
    virtual bool handleAction(int action, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x550a78
     * @note[short] MacOS (Intel): 0x611c00
     * @note[short] Windows: 0x202790
     * @note[short] iOS: 0x15fbb4
     * @note[short] Android
     */
    virtual void angleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x550a94
     * @note[short] MacOS (Intel): 0x611c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15fbd0
     * @note[short] Android
     */
    virtual void angleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x550a9c
     * @note[short] MacOS (Intel): 0x611c60
     * @note[short] Windows: 0x2027a0
     * @note[short] iOS: 0x15fbd8
     * @note[short] Android
     */
    virtual void angleChanged(float rotation, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x551af8
     * @note[short] MacOS (Intel): 0x612ef0
     * @note[short] Windows: 0x202e80
     * @note[short] iOS: 0x160138
     * @note[short] Android
     */
    virtual void updateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0x552450
     * @note[short] MacOS (Intel): 0x6139f0
     * @note[short] Windows: 0x203990
     * @note[short] iOS: 0x160894
     * @note[short] Android
     */
    virtual void anchorPointMoved(cocos2d::CCPoint anchorPoint);

    /**
     * @note[short] MacOS (ARM): 0x551c3c
     * @note[short] MacOS (Intel): 0x6130b0
     * @note[short] Windows: 0x202fe0
     * @note[short] iOS: 0x16026c
     * @note[short] Android
     */
    virtual void scaleChangeBegin();

    /**
     * @note[short] MacOS (ARM): 0x551c58
     * @note[short] MacOS (Intel): 0x6130f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x160288
     * @note[short] Android
     */
    virtual void scaleChangeEnded();

    /**
     * @note[short] MacOS (ARM): 0x551c60
     * @note[short] MacOS (Intel): 0x613110
     * @note[short] Windows: 0x202ff0
     * @note[short] iOS: 0x160290
     * @note[short] Android
     */
    virtual void scaleXChanged(float scaleX, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x551d94
     * @note[short] MacOS (Intel): 0x613250
     * @note[short] Windows: 0x2030f0
     * @note[short] iOS: 0x160338
     * @note[short] Android
     */
    virtual void scaleYChanged(float scaleY, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x551ec8
     * @note[short] MacOS (Intel): 0x613390
     * @note[short] Windows: 0x2031f0
     * @note[short] iOS: 0x1603e0
     * @note[short] Android
     */
    virtual void scaleXYChanged(float scaleX, float scaleY, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x54d3f8
     * @note[short] MacOS (Intel): 0x60e190
     * @note[short] Windows: 0x1c50b0
     * @note[short] iOS: 0x164038
     * @note[short] Android
     */
    virtual bool scrollWheel(float y, float x);

    /**
     * @note[short] MacOS (ARM): 0x54dc4c
     * @note[short] MacOS (Intel): 0x60ea80
     * @note[short] Windows: 0x2025e0
     * @note[short] Android
     */
    void activateRotationControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x55180c
     * @note[short] MacOS (Intel): 0x612bc0
     * @note[short] Windows: 0x202bc0
     * @note[short] Android
     */
    void activateScaleControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5506dc
     * @note[short] MacOS (Intel): 0x6117f0
     * @note[short] Windows: 0x2032b0
     * @note[short] Android
     */
    void activateTransformControl(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x10850
     * @note[short] MacOS (Intel): 0x124f0
     * @note[short] Windows: 0x1b5860
     * @note[short] Android
     */
    void addObjectsToSmartTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1002c
     * @note[short] MacOS (Intel): 0x11c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addSnapPosition(cocos2d::CCPoint position);

    /**
     * @note[short] Android
     */
    TodoReturn adjustCustomGridSize(int p0);

    /**
     * @note[short] Windows: 0x2017a0
     * @note[short] Android
     */
    void alignObjects(cocos2d::CCArray* objects, bool axisY);

    /**
     * @note[short] Windows: 0x201300
     * @note[short] Android
     */
    TodoReturn alignObjectsOnAxis(cocos2d::CCArray* p0, bool p1);

    /**
     * @note[short] Android
     */
    void applyOffset(GameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x611a20
     * @note[short] Windows: 0x202050
     * @note[short] Android
     */
    cocos2d::CCPoint applySpecialOffset(cocos2d::CCPoint position, GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x159e4
     * @note[short] MacOS (Intel): 0x18ad0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool arrayContainsClass(cocos2d::CCArray* objects, int classType);

    /**
     * @note[short] MacOS (ARM): 0x13e60
     * @note[short] MacOS (Intel): 0x60e410
     * @note[short] Windows: 0x1b8e70
     * @note[short] Android
     */
    void assignNewGroups(bool groupY);

    /**
     * @note[short] MacOS (ARM): 0x15a5c
     * @note[short] MacOS (Intel): 0x18b40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canAllowMultiActivate(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5055c4
     * @note[short] MacOS (Intel): 0x5b8830
     * @note[short] Windows: 0x1c8500
     * @note[short] Android
     */
    bool canSelectObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe9e0
     * @note[short] MacOS (Intel): 0x10420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void centerCameraOnObject(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn centerCameraOnPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x5068b0
     * @note[short] MacOS (Intel): 0x119970
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void changeSelectedObjects(cocos2d::CCArray* objects, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x55257c
     * @note[short] MacOS (Intel): 0x613b40
     * @note[short] Windows: 0x203a10
     * @note[short] Android
     */
    cocos2d::CCPoint checkDiffAfterTransformAnchor(cocos2d::CCPoint diff, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x1c96e0
     * @note[short] Android
     */
    void checkLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0xae6c
     * @note[short] MacOS (Intel): 0xc6d0
     * @note[short] Windows: 0x1ada10
     * @note[short] Android
     */
    void clickOnPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (Intel): 0x19b70
     * @note[short] Windows: 0x1be3a0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeLiveColorSelect();

    /**
     * @note[short] MacOS (ARM): 0x168d8
     * @note[short] MacOS (Intel): 0x19b70
     * @note[short] Windows: 0x1be6a0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeLiveHSVSelect();

    /**
     * @note[short] MacOS (ARM): 0x16ae0
     * @note[short] MacOS (Intel): 0x19df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorSelectClosed(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xc2fc
     * @note[short] MacOS (Intel): 0xdbc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void constrainGameLayerPosition();

    /**
     * @note[short] MacOS (ARM): 0x8028
     * @note[short] MacOS (Intel): 0x9010
     * @note[short] Windows: 0x1bf010
     * @note[short] Android
     */
    void constrainGameLayerPosition(float x, float y);

    /**
     * @note[short] MacOS (ARM): 0x603450
     * @note[short] MacOS (Intel): 0x6f04a0
     * @note[short] Windows: 0x1f9920
     * @note[short] Android
     */
    int convertKeyBasedOnNeighbors(int smartKey, int objectID, cocos2d::CCPoint position, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x603374
     * @note[short] MacOS (Intel): 0x6f0390
     * @note[short] Windows: 0x1f9820
     * @note[short] Android
     */
    int convertToBaseKey(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x5033d4
     * @note[short] MacOS (Intel): 0x5b5f80
     * @note[short] Windows: 0x1c5700
     * @note[short] Android
     */
    std::string copyObjects(cocos2d::CCArray* objects, bool copyColors, bool sort);

    /**
     * @note[short] MacOS (ARM): 0x4a3a34
     * @note[short] MacOS (Intel): 0x53b360
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string copyObjectsDetailed(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x574e58
     * @note[short] MacOS (Intel): 0x638500
     * @note[short] Windows: 0x1f6210
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomItems();

    /**
     * @note[short] MacOS (ARM): 0x576a78
     * @note[short] MacOS (Intel): 0x63a1e0
     * @note[short] Windows: 0x1f33b0
     * @note[short] Android
     */
    void createDpadMoveMenu(cocos2d::CCArray* buttons);

    /**
     * @note[short] MacOS (ARM): 0x603d30
     * @note[short] MacOS (Intel): 0x6f0f40
     * @note[short] Windows: 0x1fa160
     * @note[short] Android
     */
    GameObject* createEdgeForObject(GameObject* object, int type);

    /**
     * @note[short] MacOS (ARM): 0x6075b8
     * @note[short] MacOS (Intel): 0x6f54a0
     * @note[short] Windows: 0x1fe9e0
     * @note[short] Android
     */
    void createExtraObject(int id, cocos2d::CCPoint position, GameObject* object, cocos2d::CCArray* objects, int zOrder, int editorLayer);

    /**
     * @note[short] MacOS (ARM): 0x587fac
     * @note[short] MacOS (Intel): 0x6f2af0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createExtras(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x605224
     * @note[short] MacOS (Intel): 0x6f2b80
     * @note[short] Windows: 0x1fbc90
     * @note[short] Android
     */
    void createExtrasForObject(int id, GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x13410
     * @note[short] MacOS (Intel): 0x15730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGlow();

    /**
     * @note[short] Windows: 0x1b9a70
     * @note[short] Android
     */
    TodoReturn createGradientFromSelection();

    /**
     * @note[short] MacOS (ARM): 0x14244
     * @note[short] MacOS (Intel): 0x16860
     * @note[short] Windows: 0x1b9360
     * @note[short] Android
     */
    void createLoop();

    /**
     * @note[short] MacOS (ARM): 0x5759ac
     * @note[short] MacOS (Intel): 0x6390e0
     * @note[short] Windows: 0x1f1a70
     * @note[short] Android
     */
    void createMoveMenu();

    /**
     * @note[short] MacOS (ARM): 0x14028
     * @note[short] MacOS (Intel): 0x165d0
     * @note[short] Windows: 0x1b90b0
     * @note[short] Android
     */
    void createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x10074
     * @note[short] MacOS (Intel): 0x11ca0
     * @note[short] Windows: 0x1b32a0
     * @note[short] Android
     */
    GameObject* createObject(int objectID, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x604058
     * @note[short] MacOS (Intel): 0x6f12b0
     * @note[short] Windows: 0x1fa7a0
     * @note[short] Android
     */
    cocos2d::CCArray* createOutlines(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x125cc
     * @note[short] MacOS (Intel): 0x147a0
     * @note[short] Windows: 0x1b7380
     * @note[short] Android
     */
    void createPrefab(GJSmartTemplate* smartTemplate, std::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x489520
     * @note[short] Windows: 0x1fb1f0
     * @note[short] Android
     */
    cocos2d::CCArray* createRockBases(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6039f8
     * @note[short] MacOS (Intel): 0x6f0ba0
     * @note[short] Windows: 0x1f9df0
     * @note[short] Android
     */
    cocos2d::CCArray* createRockEdges(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x11b6c
     * @note[short] Windows: 0x1b6820
     * @note[short] Android
     */
    void createSmartObjectsFromTemplate(GJSmartTemplate* smartTemplate, cocos2d::CCArray* objects, bool useNearby, bool dontDelete, bool referenceOnly, bool dontPaste);

    /**
     * @note[short] MacOS (ARM): 0x12b70
     * @note[short] Windows: 0x1b7870
     * @note[short] Android
     */
    void createSmartObjectsFromType(int type, cocos2d::CCArray* objects, bool extras, bool dontDelete);

    /**
     * @note[short] MacOS (ARM): 0x100f8
     * @note[short] MacOS (Intel): 0x11d30
     * @note[short] Windows: 0x1b37e0
     * @note[short] Android
     */
    UndoObject* createUndoObject(UndoCommand command, bool addToList);

    /**
     * @note[short] MacOS (ARM): 0xbb30
     * @note[short] MacOS (Intel): 0xd470
     * @note[short] Windows: 0x1b3a50
     * @note[short] Android
     */
    void createUndoSelectObject(bool redo);

    /**
     * @note[short] Android
     */
    TodoReturn createViewButton(std::string p0, int p1, std::string p2, cocos2d::CCPoint p3, float p4, cocos2d::CCArray* p5);

    /**
     * @note[short] Windows: 0x1ae5d0
     * @note[short] Android
     */
    TodoReturn cycleCustomGridPreset(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x550a14
     * @note[short] MacOS (Intel): 0x611ba0
     * @note[short] Windows: 0x202720
     * @note[short] Android
     */
    void deactivateRotationControl();

    /**
     * @note[short] MacOS (ARM): 0x551a78
     * @note[short] MacOS (Intel): 0x612e60
     * @note[short] Windows: 0x202dd0
     * @note[short] Android
     */
    void deactivateScaleControl();

    /**
     * @note[short] MacOS (ARM): 0x550124
     * @note[short] MacOS (Intel): 0x6111a0
     * @note[short] Windows: 0x2034c0
     * @note[short] Android
     */
    void deactivateTransformControl();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteObject(GameObject* object, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x12488
     * @note[short] MacOS (Intel): 0x14660
     * @note[short] Windows: 0x1b7740
     * @note[short] Android
     */
    void deleteSmartBlocksFromObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x12a78
     * @note[short] MacOS (Intel): 0x14d00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteTypeFromObjects(int id, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x505698
     * @note[short] MacOS (Intel): 0x5b88f0
     * @note[short] Windows: 0x1c82b0
     * @note[short] Android
     */
    void deselectAll();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x506128
     * @note[short] MacOS (Intel): 0x5b9420
     * @note[short] Windows: 0x1c81d0
     * @note[short] Android
     */
    void deselectObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5069bc
     * @note[short] MacOS (Intel): 0x5b9d60
     * @note[short] Windows: 0x1c9840
     * @note[short] Android
     */
    void deselectObjectsColor();

    /**
     * @note[short] Windows: 0x1c83a0
     * @note[short] Android
     */
    void deselectTargetPortals();

    /**
     * @note[short] MacOS (ARM): 0xbd88
     * @note[short] MacOS (Intel): 0xd6b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableButton(CreateMenuItem* button);

    /**
     * @note[short] MacOS (ARM): 0x504aa8
     * @note[short] MacOS (Intel): 0x5b7d40
     * @note[short] Windows: 0x1c5ca0
     * @note[short] Android
     */
    void doCopyObjects(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x504ee0
     * @note[short] MacOS (Intel): 0x5b81d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doPasteInPlace(bool withColor);

    /**
     * @note[short] MacOS (Intel): 0x5b7ec0
     * @note[short] Windows: 0x1c5ea0
     * @note[short] Android
     */
    void doPasteObjects(bool withColor);

    /**
     * @note[short] MacOS (ARM): 0x13414
     * @note[short] MacOS (Intel): 0x15740
     * @note[short] Windows: 0x1b8200
     * @note[short] Android
     */
    void dynamicGroupUpdate(bool reGroup);

    /**
     * @note[short] MacOS (ARM): 0x603ef0
     * @note[short] MacOS (Intel): 0x380a60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int edgeForObject(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x15668
     * @note[short] MacOS (Intel): 0x18720
     * @note[short] Windows: 0x1bab70
     * @note[short] Android
     */
    bool editButton2Usable();

    /**
     * @note[short] MacOS (ARM): 0x150b4
     * @note[short] MacOS (Intel): 0x179c0
     * @note[short] Windows: 0x1ba320
     * @note[short] Android
     */
    bool editButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x167b4
     * @note[short] MacOS (Intel): 0x19a00
     * @note[short] Windows: 0x1be180
     * @note[short] Android
     */
    void editColor();

    /**
     * @note[short] MacOS (ARM): 0x16444
     * @note[short] MacOS (Intel): 0x195c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool editColorButtonUsable();

    /**
     * @note[short] MacOS (ARM): 0x9210
     * @note[short] MacOS (Intel): 0xa820
     * @note[short] Windows: 0x1be710
     * @note[short] Android
     */
    void editGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1be410
     * @note[short] Android
     */
    void editHSV();

    /**
     * @note[short] MacOS (ARM): 0x83a0
     * @note[short] MacOS (Intel): 0x93f0
     * @note[short] Windows: 0x1bb3e0
     * @note[short] Android
     */
    void editObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8398
     * @note[short] MacOS (Intel): 0x93e0
     * @note[short] Windows: 0x1bd190
     * @note[short] Android
     */
    void editObject2(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void editObject3(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1bd1a0
     * @note[short] Android
     */
    void editObjectSpecial(int type);

    /**
     * @note[short] MacOS (ARM): 0xad80
     * @note[short] MacOS (Intel): 0xc600
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int editorLayerForArray(cocos2d::CCArray* objects, bool layer2);

    /**
     * @note[short] MacOS (ARM): 0xbc54
     * @note[short] MacOS (Intel): 0xd5a0
     * @note[short] Windows: 0x1adb90
     * @note[short] Android
     */
    void enableButton(CreateMenuItem* button);

    /**
     * @note[short] Android
     */
    TodoReturn findObject(int p0, bool p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn findPassesFilters(GameObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x1a400
     * @note[short] Windows: 0x1bf500
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCArray* objects, float offset);

    /**
     * @note[short] MacOS (ARM): 0x16fa8
     * @note[short] MacOS (Intel): 0x1a2f0
     * @note[short] Windows: 0x1bf400
     * @note[short] Android
     */
    void findSnapObject(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x13fd8
     * @note[short] MacOS (Intel): 0x16580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void findTriggerTest();

    /**
     * @note[short] Android
     */
    TodoReturn finishTouchDelay();

    /**
     * @note[short] Windows: 0x1fff00
     * @note[short] Android
     */
    void flipObjectsX(cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x2000f0
     * @note[short] Android
     */
    void flipObjectsY(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xbe94
     * @note[short] MacOS (Intel): 0xd790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getButton(char const* text, int width, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu);

    /**
     * @note[short] MacOS (ARM): 0x1ccd5c
     * @note[short] MacOS (Intel): 0x637ee0
     * @note[short] Windows: 0x1f1390
     * @note[short] Android
     */
    CreateMenuItem* getCreateBtn(int id, int bg);

    /**
     * @note[short] MacOS (ARM): 0x35c004
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CreateMenuItem* getCreateMenuItemButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int background, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0xe260
     * @note[short] MacOS (Intel): 0xfd20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* getCycledObject(cocos2d::CCArray* objects, bool dontSkipSelected);

    /**
     * @note[short] MacOS (ARM): 0x16474
     * @note[short] MacOS (Intel): 0x195f0
     * @note[short] Windows: 0x1bdef0
     * @note[short] Android
     */
    void getEditColorTargets(ColorAction*& mainColor, ColorAction*& detailColor, EffectGameObject*& object);

    /**
     * @note[short] MacOS (ARM): 0x33c378
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getGridSnappedPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x54f0e0
     * @note[short] MacOS (Intel): 0x60ff40
     * @note[short] Windows: 0x2022c0
     * @note[short] Android
     */
    cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* objects, bool absolute);

    /**
     * @note[short] MacOS (ARM): 0x15550
     * @note[short] MacOS (Intel): 0x185d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void getGroupInfo(GameObject* selectedObject, cocos2d::CCArray* selectedObjects, int& objectID, int& classType, int& objectType);

    /**
     * @note[short] MacOS (ARM): 0x54dd9c
     * @note[short] MacOS (Intel): 0x60ec00
     * @note[short] Windows: 0x202550
     * @note[short] Android
     */
    cocos2d::CCPoint getLimitedPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x13328
     * @note[short] MacOS (Intel): 0x15660
     * @note[short] Windows: 0x1b8120
     * @note[short] Android
     */
    cocos2d::CCNode* getNeighbor(int smartKey, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x550834
     * @note[short] MacOS (Intel): 0x611970
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x506918
     * @note[short] MacOS (Intel): 0x5b9cb0
     * @note[short] Windows: 0x1c9630
     * @note[short] Android
     */
    cocos2d::CCArray* getSelectedObjects();

    /**
     * @note[short] MacOS (ARM): 0xc094
     * @note[short] MacOS (Intel): 0xd970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSimpleButton(std::string frameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu);

    /**
     * @note[short] MacOS (ARM): 0x11a6c
     * @note[short] MacOS (Intel): 0x13b20
     * @note[short] Windows: 0x1b7ff0
     * @note[short] Android
     */
    SmartGameObject* getSmartNeighbor(SmartGameObject* object, cocos2d::CCPoint position, GJSmartDirection direction, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x54e1f0
     * @note[short] MacOS (Intel): 0x60f080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getSnapAngle(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x6e34
     * @note[short] MacOS (Intel): 0x7ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale);

    /**
     * @note[short] Windows: 0x1add30
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* spriteFrameName, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset, float p6);

    /**
     * @note[short] MacOS (ARM): 0xc184
     * @note[short] MacOS (Intel): 0xda50
     * @note[short] Windows: 0x1addc0
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(cocos2d::CCSprite* sprite, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, int buttonKind, cocos2d::CCPoint offset, float p6);

    /**
     * @note[short] MacOS (ARM): 0x549aa8
     * @note[short] MacOS (Intel): 0x609810
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJTransformState& getTransformState();

    /**
     * @note[short] Android
     */
    TodoReturn getViewButtonState(int p0);

    /**
     * @note[short] MacOS (ARM): 0xc30c
     * @note[short] MacOS (Intel): 0xdbe0
     * @note[short] Windows: 0x1bf270
     * @note[short] Android
     */
    float getXMin(int offset);

    /**
     * @note[short] MacOS (ARM): 0x54b9d8
     * @note[short] MacOS (Intel): 0x60bbd0
     * @note[short] Windows: 0x1c2270
     * @note[short] Android
     */
    bool handleEditorAction(int action, bool down, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x461c
     * @note[short] MacOS (Intel): 0x5270
     * @note[short] Windows: 0x1a9630
     * @note[short] Android
     */
    bool init(LevelEditorLayer* editorLayer);

    /**
     * @note[short] Android
     */
    bool isFreeMoveTouch();

    /**
     * @note[short] MacOS (ARM): 0x15b24
     * @note[short] MacOS (Intel): 0x18bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isLiveColorSelectTrigger(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x15af4
     * @note[short] MacOS (Intel): 0x18bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool liveEditColorUsable();

    /**
     * @note[short] MacOS (ARM): 0x5757a0
     * @note[short] MacOS (Intel): 0x638ef0
     * @note[short] Windows: 0x1f1160
     * @note[short] Android
     */
    CreateMenuItem* menuItemFromObjectString(std::string str, int id);

    /**
     * @note[short] MacOS (ARM): 0x54d87c
     * @note[short] MacOS (Intel): 0x60e630
     * @note[short] Windows: 0x201d60
     * @note[short] Android
     */
    cocos2d::CCPoint moveForCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0xce6c
     * @note[short] MacOS (Intel): 0xe840
     * @note[short] Windows: 0x1ae930
     * @note[short] Android
     */
    void moveGamelayer(cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x54db00
     * @note[short] MacOS (Intel): 0x60e950
     * @note[short] Windows: 0x1fee70
     * @note[short] Android
     */
    void moveObject(GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x54d678
     * @note[short] MacOS (Intel): 0x60e410
     * @note[short] Windows: 0x1feb10
     * @note[short] Android
     */
    void moveObjectCall(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x82dfd0
     * @note[short] Windows: 0x1feae0
     * @note[short] Android
     */
    void moveObjectCall(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn nextDpadStep();

    /**
     * @note[short] MacOS (ARM): 0x16df8
     * @note[short] MacOS (Intel): 0x1a140
     * @note[short] Windows: 0x15c530
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onAssignNewGroupID();

    /**
     * @note[short] MacOS (ARM): 0xece0
     * @note[short] MacOS (Intel): 0x10710
     * @note[short] Windows: 0x1b1770
     * @note[short] Android
     */
    void onColorFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1c5c50
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1c7030
     * @note[short] Android
     */
    void onCopyState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xb4d8
     * @note[short] MacOS (Intel): 0xce30
     * @note[short] Windows: 0x1b2460
     * @note[short] Android
     */
    bool onCreate();

    /**
     * @note[short] MacOS (ARM): 0xee38
     * @note[short] MacOS (Intel): 0x10880
     * @note[short] Windows: 0x1b20f0
     * @note[short] Android
     */
    void onCreateButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xf3b0
     * @note[short] MacOS (Intel): 0x10e30
     * @note[short] Windows: 0x1b2930
     * @note[short] Android
     */
    void onCreateObject(int id);

    /**
     * @note[short] Windows: 0x1aff90
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x64db0
     * @note[short] Windows: 0x1b07f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x578ef0
     * @note[short] MacOS (Intel): 0x63c970
     * @note[short] Windows: 0x1f5fa0
     * @note[short] Android
     */
    void onDeleteCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xe180
     * @note[short] MacOS (Intel): 0x50e640
     * @note[short] Windows: 0x1afe40
     * @note[short] Android
     */
    void onDeleteInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b0990
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b0e60
     * @note[short] Android
     */
    void onDeleteSelectedType(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b0f30
     * @note[short] Android
     */
    void onDeleteStartPos(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDeselectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onDpadStep(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5031e4
     * @note[short] MacOS (Intel): 0x5b5da0
     * @note[short] Windows: 0x1c5520
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8320
     * @note[short] MacOS (Intel): 0x9380
     * @note[short] Windows: 0x1bde80
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditorCommands(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFindObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x94cc
     * @note[short] MacOS (Intel): 0xab30
     * @note[short] Windows: 0x1b56a0
     * @note[short] Android
     */
    void onGoToBaseLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGoToFreeLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x92fc
     * @note[short] MacOS (Intel): 0xa930
     * @note[short] Windows: 0x1b53f0
     * @note[short] Android
     */
    void onGoToLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGridSizeIndicator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x94b0
     * @note[short] MacOS (Intel): 0xab00
     * @note[short] Windows: 0x1beac0
     * @note[short] Android
     */
    void onGroupDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xebb4
     * @note[short] MacOS (Intel): 0x10610
     * @note[short] Windows: 0x1b1550
     * @note[short] Android
     */
    void onGroupIDFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7895b0
     * @note[short] Windows: 0x1b4f80
     * @note[short] Android
     */
    void onGroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x9498
     * @note[short] MacOS (Intel): 0xaae0
     * @note[short] Windows: 0x1beaa0
     * @note[short] Android
     */
    void onGroupUp(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHideUIBtn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x957c
     * @note[short] MacOS (Intel): 0xabf0
     * @note[short] Windows: 0x1bec50
     * @note[short] Android
     */
    void onLockLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5789a4
     * @note[short] MacOS (Intel): 0x198a0
     * @note[short] Windows: 0x1f5a90
     * @note[short] Android
     */
    void onNewCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8318
     * @note[short] MacOS (Intel): 0x384230
     * @note[short] Windows: 0x1c5e20
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPasteColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x41b670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPasteInPlace(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1c70e0
     * @note[short] Android
     */
    void onPasteState(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e54
     * @note[short] MacOS (Intel): 0x8dd0
     * @note[short] Windows: 0x1accb0
     * @note[short] Android
     */
    void onPause(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7688
     * @note[short] MacOS (Intel): 0x8540
     * @note[short] Windows: 0x1b4170
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x787c
     * @note[short] MacOS (Intel): 0x8780
     * @note[short] Windows: 0x1b4770
     * @note[short] Android
     */
    void onPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xed38
     * @note[short] MacOS (Intel): 0x10770
     * @note[short] Windows: 0x1b19c0
     * @note[short] Android
     */
    void onResetSpecialFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b56c0
     * @note[short] Android
     */
    void onSelectBuildTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x828c
     * @note[short] Windows: 0x1ac4f0
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b3d10
     * @note[short] Android
     */
    void onShowUIBtn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8b70
     * @note[short] Windows: 0x1b5020
     * @note[short] Android
     */
    void onStickyToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b4990
     * @note[short] Android
     */
    void onStopPlaytest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x16cb4
     * @note[short] MacOS (Intel): 0x1a000
     * @note[short] Windows: 0x1beea0
     * @note[short] Android
     */
    void onTargetIDChange(int change);

    /**
     * @note[short] MacOS (ARM): 0xccc0
     * @note[short] MacOS (Intel): 0xe6b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggleGuide(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xcd00
     * @note[short] MacOS (Intel): 0xe6e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggleSelectedOrder(EffectGameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggleTraceIn(GameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onToggleTraceOut(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7895b0
     * @note[short] Windows: 0x1b4fd0
     * @note[short] Android
     */
    void onUngroupSticky(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xed98
     * @note[short] MacOS (Intel): 0x107d0
     * @note[short] Windows: 0x1b1c30
     * @note[short] Android
     */
    void onUpdateDeleteFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onViewButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x63cad0
     * @note[short] Windows: 0x1f6180
     * @note[short] Android
     */
    void orderDownCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x578f78
     * @note[short] MacOS (Intel): 0x63ca10
     * @note[short] Windows: 0x1f60f0
     * @note[short] Android
     */
    void orderUpCustomItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5039ac
     * @note[short] MacOS (Intel): 0x5b6630
     * @note[short] Windows: 0x1c6100
     * @note[short] Android
     */
    cocos2d::CCArray* pasteObjects(std::string str, bool withColor, bool noUndo);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playCircleAnim(cocos2d::CCPoint position, float radius, float duration);

    /**
     * @note[short] MacOS (ARM): 0x54b4c0
     * @note[short] MacOS (Intel): 0x60b3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x54b5b8
     * @note[short] MacOS (Intel): 0x60b4f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn playSoundForCreatedObject(GameObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x11e50
     * @note[short] Windows: 0x1b49f0
     * @note[short] Android
     */
    void playtestStopped();

    /**
     * @note[short] MacOS (ARM): 0xff78
     * @note[short] MacOS (Intel): 0x11bc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool positionIsInSnapped(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x550878
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint positionWithoutOffset(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn processSelectObject(GameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x505dac
     * @note[short] MacOS (Intel): 0x5b90a0
     * @note[short] Windows: 0x1c9570
     * @note[short] Android
     */
    void processSelectObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x13014
     * @note[short] MacOS (Intel): 0x152d0
     * @note[short] Windows: 0x1b7d50
     * @note[short] Android
     */
    void processSmartObjectsFromType(int type, cocos2d::CCArray* objects, cocos2d::CCArray* objects2, cocos2d::CCArray* objects3, cocos2d::CCArray* objects4);

    /**
     * @note[short] MacOS (ARM): 0x5790f8
     * @note[short] Windows: 0x1f69e0
     * @note[short] Android
     */
    void recreateButtonTabs();

    /**
     * @note[short] Android
     */
    void redoLastAction(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshGridWindow();

    /**
     * @note[short] MacOS (ARM): 0x578e84
     * @note[short] MacOS (Intel): 0x63c900
     * @note[short] Windows: 0x1f6770
     * @note[short] Android
     */
    void reloadCustomItems();

    /**
     * @note[short] MacOS (ARM): 0x54efe0
     * @note[short] Windows: 0x2021a0
     * @note[short] Android
     */
    void removeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x13b74
     * @note[short] MacOS (Intel): 0x16150
     * @note[short] Windows: 0x1b8ab0
     * @note[short] Android
     */
    void replaceGroupID(GameObject* object, int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x504e10
     * @note[short] MacOS (Intel): 0x5b8100
     * @note[short] Windows: 0x1c73f0
     * @note[short] Android
     */
    void repositionObjectsToCenter(cocos2d::CCArray* objects, cocos2d::CCPoint position, bool absolute);

    /**
     * @note[short] MacOS (Intel): 0x613880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetObjectEditorValues(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x16c24
     * @note[short] MacOS (Intel): 0x19f50
     * @note[short] Windows: 0x1bedd0
     * @note[short] Android
     */
    void resetSelectedObjectsColor();

    /**
     * @note[short] MacOS (Intel): 0x8c60
     * @note[short] Windows: 0x1afc20
     * @note[short] Android
     */
    void resetUI();

    /**
     * @note[short] MacOS (ARM): 0x54e5e4
     * @note[short] MacOS (Intel): 0x60f4d0
     * @note[short] Windows: 0x2002e0
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint center, bool lock);

    /**
     * @note[short] MacOS (ARM): 0x2e69b8
     * @note[short] MacOS (Intel): 0x60f060
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float rotationforCommand(EditCommand command);

    /**
     * @note[short] MacOS (ARM): 0x54f2fc
     * @note[short] MacOS (Intel): 0x610150
     * @note[short] Windows: 0x2007d0
     * @note[short] Android
     */
    void scaleObjects(cocos2d::CCArray* objects, float scaleX, float scaleY, cocos2d::CCPoint pivotPoint, ObjectScaleType type, bool lockMove);

    /**
     * @note[short] MacOS (ARM): 0x505e74
     * @note[short] MacOS (Intel): 0x5b9160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectAll();

    /**
     * @note[short] MacOS (ARM): 0x505f30
     * @note[short] MacOS (Intel): 0x5b9220
     * @note[short] Windows: 0x1c8010
     * @note[short] Android
     */
    void selectAllWithDirection(bool left);

    /**
     * @note[short] MacOS (ARM): 0xee84
     * @note[short] MacOS (Intel): 0x108d0
     * @note[short] Windows: 0x1b56f0
     * @note[short] Android
     */
    void selectBuildTab(int tab);

    /**
     * @note[short] Android
     */
    TodoReturn selectedMoveCommand(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5054dc
     * @note[short] MacOS (Intel): 0x5b8760
     * @note[short] Windows: 0x1c7490
     * @note[short] Android
     */
    void selectObject(GameObject* object, bool ignoreFilter);

    /**
     * @note[short] MacOS (ARM): 0x505758
     * @note[short] MacOS (Intel): 0x5b89e0
     * @note[short] Windows: 0x1c7590
     * @note[short] Android
     */
    void selectObjects(cocos2d::CCArray* objects, bool ignoreFilter);

    /**
     * @note[short] MacOS (Intel): 0x5b9030
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectObjectsInRect(cocos2d::CCRect rect);

    /**
     * @note[short] Windows: 0x1ae520
     * @note[short] Android
     */
    void setCustomGridEnabled(bool p0);

    /**
     * @note[short] Windows: 0x1ae390
     * @note[short] Android
     */
    void setCustomGridNodeSize(float p0);

    /**
     * @note[short] Android
     */
    void setCustomMoveStep(float p0);

    /**
     * @note[short] Windows: 0x1f3e60
     * @note[short] Android
     */
    void setDpadStep(int p0);

    /**
     * @note[short] MacOS (Intel): 0x61af40
     * @note[short] Windows: 0x1ca6c0
     * @note[short] Android
     */
    void setupCreateMenu();

    /**
     * @note[short] MacOS (ARM): 0x5779ec
     * @note[short] MacOS (Intel): 0x63b320
     * @note[short] Windows: 0x1f42a0
     * @note[short] Android
     */
    void setupDeleteMenu();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupEditMenu();

    /**
     * @note[short] Windows: 0x1f6e80
     * @note[short] Android
     */
    void setupViewMenu();

    /**
     * @note[short] MacOS (ARM): 0xe390
     * @note[short] MacOS (Intel): 0xfe30
     * @note[short] Windows: 0x1b0530
     * @note[short] Android
     */
    bool shouldDeleteObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x173bc
     * @note[short] MacOS (Intel): 0x1a7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldSnap(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe628
     * @note[short] MacOS (Intel): 0x10090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showDeleteConfirmation();

    /**
     * @note[short] Android
     */
    TodoReturn showGridSizeAlert();

    /**
     * @note[short] MacOS (ARM): 0x169e4
     * @note[short] MacOS (Intel): 0x19cc0
     * @note[short] Windows: 0x1be2d0
     * @note[short] Android
     */
    void showLiveColorSelectForMode(int colorID);

    /**
     * @note[short] MacOS (ARM): 0x16908
     * @note[short] MacOS (Intel): 0x19ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showLiveColorSelectForModeSpecial(int colorID);

    /**
     * @note[short] Android
     */
    TodoReturn showLockedLayerAlert(int p0);

    /**
     * @note[short] MacOS (ARM): 0xf11c
     * @note[short] MacOS (Intel): 0x10ba0
     * @note[short] Windows: 0x1b5210
     * @note[short] Android
     */
    void showMaxBasicError();

    /**
     * @note[short] MacOS (Intel): 0x10cf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showMaxCoinError();

    /**
     * @note[short] MacOS (ARM): 0xefcc
     * @note[short] MacOS (Intel): 0x10a50
     * @note[short] Windows: 0x1b50d0
     * @note[short] Android
     */
    void showMaxError();

    /**
     * @note[short] Android
     */
    TodoReturn showTextAlert(std::string p0, bool p1, bool p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x552054
     * @note[short] MacOS (Intel): 0x613520
     * @note[short] Windows: 0x203340
     * @note[short] Android
     */
    bool showTransformControl();

    /**
     * @note[short] MacOS (Intel): 0x1920d0
     * @note[short] Windows: 0x1b3e20
     * @note[short] Android
     */
    void showUI(bool show);

    /**
     * @note[short] MacOS (ARM): 0x6d4c
     * @note[short] MacOS (Intel): 0x7bb0
     * @note[short] Windows: 0x1ae000
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5751c4
     * @note[short] MacOS (Intel): 0x638870
     * @note[short] Windows: 0x1f0860
     * @note[short] Android
     */
    cocos2d::CCSprite* spriteFromObjectString(std::string str, bool absoluteCenter, bool useGroup, int objLimit, cocos2d::CCArray* objects, cocos2d::CCArray* group, GameObject* groupParent);

    /**
     * @note[short] Windows: 0x1bfaf0
     * @note[short] Android
     */
    TodoReturn startFreeMoveTouch();

    /**
     * @note[short] Android
     */
    TodoReturn swipeToPosition(cocos2d::CCPoint p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleCustomGridEnabled();

    /**
     * @note[short] MacOS (ARM): 0xa764
     * @note[short] MacOS (Intel): 0xbf60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleDuplicateButton();

    /**
     * @note[short] MacOS (ARM): 0xa6a0
     * @note[short] MacOS (Intel): 0xbe90
     * @note[short] Windows: 0x1baf50
     * @note[short] Android
     */
    void toggleEditObjectButton();

    /**
     * @note[short] MacOS (ARM): 0x7204
     * @note[short] MacOS (Intel): 0x8060
     * @note[short] Windows: 0x1b36a0
     * @note[short] Android
     */
    void toggleEnableRotate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1b34c0
     * @note[short] Android
     */
    void toggleFreeMove(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xa698
     * @note[short] MacOS (Intel): 0xbe80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleLockUI(bool lockUI);

    /**
     * @note[short] MacOS (ARM): 0x6f3c
     * @note[short] Windows: 0x1afd40
     * @note[short] Android
     */
    void toggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x9e14
     * @note[short] MacOS (Intel): 0xb560
     * @note[short] Windows: 0x1ae9b0
     * @note[short] Android
     */
    void toggleObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x7180
     * @note[short] MacOS (Intel): 0x7fd0
     * @note[short] Windows: 0x1b3590
     * @note[short] Android
     */
    void toggleSnap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0xa8dc
     * @note[short] MacOS (Intel): 0xc0e0
     * @note[short] Windows: 0x1bb050
     * @note[short] iOS: 0x473d50
     * @note[short] Android
     */
    void toggleSpecialEditButtons(bool forceRotationControl);

    /**
     * @note[short] Windows: 0x1b33e0
     * @note[short] Android
     */
    void toggleSwipe(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn toggleTraceSelected(bool p0);

    /**
     * @note[short] Windows: 0x1f8440
     * @note[short] Android
     */
    TodoReturn toggleViewOption(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn toggleWindow(int p0);

    /**
     * @note[short] MacOS (ARM): 0x54e978
     * @note[short] MacOS (Intel): 0x60f850
     * @note[short] Android
     */
    void transformObject(GameObject* object, EditCommand command, bool noOffset);

    /**
     * @note[short] Windows: 0x1ff300
     * @note[short] Android
     */
    void transformObjectCall(EditCommand command);

    /**
     * @note[short] Windows: 0x1ff2d0
     * @note[short] Android
     */
    void transformObjectCall(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54f87c
     * @note[short] MacOS (Intel): 0x6107f0
     * @note[short] Windows: 0x200d60
     * @note[short] Android
     */
    void transformObjects(cocos2d::CCArray* objs, cocos2d::CCPoint anchor, float scaleX, float scaleY, float rotateX, float rotateY, float warpX, float warpY);

    /**
     * @note[short] MacOS (Intel): 0x610740
     * @note[short] Windows: 0x200c20
     * @note[short] Android
     */
    void transformObjectsActive();

    /**
     * @note[short] MacOS (ARM): 0x54fc44
     * @note[short] MacOS (Intel): 0x610c20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void transformObjectsReset();

    /**
     * @note[short] Windows: 0x1bf810
     * @note[short] Android
     */
    void triggerSwipeMode();

    /**
     * @note[short] Android
     */
    TodoReturn uncheckPortals();

    /**
     * @note[short] Android
     */
    void undoLastAction(cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x96e4
     * @note[short] MacOS (Intel): 0xad60
     * @note[short] Windows: 0x1ad160
     * @note[short] Android
     */
    void updateButtons();

    /**
     * @note[short] Windows: 0x201cf0
     * @note[short] Android
     */
    TodoReturn updateControlsAfterAlign();

    /**
     * @note[short] MacOS (Intel): 0x46ab60
     * @note[short] Windows: 0x1b2140
     * @note[short] Android
     */
    void updateCreateMenu(bool selectTab);

    /**
     * @note[short] MacOS (ARM): 0x5783d4
     * @note[short] MacOS (Intel): 0x63bd80
     * @note[short] Windows: 0x1f5100
     * @note[short] Android
     */
    void updateDeleteButtons();

    /**
     * @note[short] MacOS (ARM): 0x80bfe4
     * @note[short] MacOS (Intel): 0x929b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDeleteMenu();

    /**
     * @note[short] Android
     */
    TodoReturn updateDpadStepLabel();

    /**
     * @note[short] MacOS (ARM): 0x5516f0
     * @note[short] MacOS (Intel): 0x241860
     * @note[short] Windows: 0x202a20
     * @note[short] Android
     */
    void updateEditButtonColor(int tag, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x15b60
     * @note[short] MacOS (Intel): 0x18c20
     * @note[short] Windows: 0x1bdd10
     * @note[short] Android
     */
    void updateEditColorButton();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateEditMenu();

    /**
     * @note[short] MacOS (ARM): 0xc494
     * @note[short] MacOS (Intel): 0xdd90
     * @note[short] Windows: 0x1ae1c0
     * @note[short] Android
     */
    void updateGridNodeSize();

    /**
     * @note[short] MacOS (ARM): 0x21aa78
     * @note[short] Windows: 0x1ae330
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateGridNodeSize(int objectID);

    /**
     * @note[short] MacOS (Intel): 0xff3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateGroupIDBtn2();

    /**
     * @note[short] MacOS (ARM): 0x95c4
     * @note[short] MacOS (Intel): 0xac40
     * @note[short] Windows: 0x1beaf0
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0xcee8
     * @note[short] MacOS (Intel): 0xe8b0
     * @note[short] Windows: 0x1aea40
     * @note[short] Android
     */
    void updateObjectInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x54d4fc
     * @note[short] MacOS (Intel): 0x60e270
     * @note[short] Windows: 0x1c5260
     * @note[short] iOS: 0x164110
     * @note[short] Android
     */
    void updatePanDecay(float dt);

    /**
     * @note[short] MacOS (ARM): 0xa578
     * @note[short] MacOS (Intel): 0xbd70
     * @note[short] Windows: 0x1b4630
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectionUI();

    /**
     * @note[short] MacOS (ARM): 0x81e0
     * @note[short] MacOS (Intel): 0x9200
     * @note[short] Windows: 0x1ae100
     * @note[short] Android
     */
    void updateSlider();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSpecialUIElements();

    /**
     * @note[short] MacOS (ARM): 0x9f68
     * @note[short] MacOS (Intel): 0xb6b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateStickyControls();

    /**
     * @note[short] Windows: 0x1f80f0
     * @note[short] Android
     */
    void updateViewButtons();

    /**
     * @note[short] Windows: 0x1ba2a0
     * @note[short] Android
     */
    void updateViewMenu();

    /**
     * @note[short] MacOS (ARM): 0x10334
     * @note[short] MacOS (Intel): 0x11f90
     * @note[short] Windows: 0x1b4c00
     * @note[short] Android
     */
    void updateZoom(float zoom);

    /**
     * @note[short] MacOS (ARM): 0x10464
     * @note[short] MacOS (Intel): 0x120c0
     * @note[short] Windows: 0x1b4c70
     * @note[short] Android
     */
    void updateZoom(float p0, cocos2d::CCPoint p1);

    /**
     * @note[short] MacOS (ARM): 0xc404
     * @note[short] MacOS (Intel): 0xdd00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float valueFromXPos(float xPos);

    /**
     * @note[short] Android
     */
    TodoReturn windowClosed(EditorWindowPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0xc280
     * @note[short] MacOS (Intel): 0xdb40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float xPosFromValue(float value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void zoomGameLayer(bool zoomingIn);

    /**
     * @note[short] MacOS (ARM): 0x7a7c
     * @note[short] MacOS (Intel): 0x89b0
     * @note[short] Windows: 0x1b4b00
     * @note[short] Android
     */
    void zoomIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7b3c
     * @note[short] MacOS (Intel): 0x8a90
     * @note[short] Windows: 0x1b4b80
     * @note[short] Android
     */
    void zoomOut(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void editObjectOptions(cocos2d::CCObject* p0);
    std::unordered_map<int, GameObjectEditorState> m_objectEditorStates;
    GJTransformState m_transformState;
    std::unordered_map<int, cocos2d::CCNode*> m_unkMap;
    bool m_isPlayingMusic;
    EditButtonBar* m_customTabBar;
    bool m_alertShown;
    cocos2d::CCArray* m_uiItems;
    float m_gridSize;
    float m_customGridSize;
    bool m_customGridEnabled;
    int m_playerTouchID1;
    int m_playerTouchID2;
    bool m_playbackActive;
    float m_playbackStartWarp;
    float m_playbackStartTime;
    UndoObject* m_undoObject;
    bool m_spaceSwiping;
    bool m_noSnapUndo;
    bool m_editingObject;
    bool m_increaseScale;
    bool m_refreshPosition;
    int m_rotationTouchID;
    int m_scaleTouchID;
    int m_touchID;
    bool m_unk2f4;
    int m_transformTouchID;
    int m_unk2fc;
    cocos2d::CCPoint m_unkPoint300;
    cocos2d::CCPoint m_unkPoint308;
    float m_unk310;
    float m_unk314;
    float m_unk318;
    bool m_unk31c;
    bool m_unk31d;
    bool m_unk31e;
    cocos2d::CCLabelBMFont* m_objectInfoLabel;
    GJRotationControl* m_rotationControl;
    cocos2d::CCPoint m_pivotPoint;
    bool m_canActivateControls;
    GJScaleControl* m_scaleControl;
    GJTransformControl* m_transformControl;
    cocos2d::CCNode* m_transformNode;
    cocos2d::CCNode* m_transformChild;
    cocos2d::CCDictionary* m_editButtonDict;
    EditButtonBar* m_createButtonBar;
    EditButtonBar* m_editButtonBar;
    Slider* m_positionSlider;
    float m_unk308;
    float m_constrainedHeight;
    float m_toolbarHeight;
    bool m_swipeEnabled;
    bool m_swipeActive;
    bool m_swipeSelected;
    bool m_continuousSnap;
    bool m_freeMoveEnabled;
    bool m_snapObjectExists;
    bool m_snapSelected;
    bool m_stickyControlsEnabled;
    bool m_linkControlsDisabled;
    bool m_speedObjectsUpdated;
    cocos2d::CCPoint m_createPosition;
    cocos2d::CCArray* m_snapPositions;
    cocos2d::CCPoint m_snapPosition;
    cocos2d::CCArray* m_selectedObjects;
    cocos2d::CCMenu* m_deleteMenu;
    cocos2d::CCArray* m_customTabControls;
    CCMenuItemSpriteExtra* m_deleteModeBtn;
    CCMenuItemSpriteExtra* m_buildModeBtn;
    CCMenuItemSpriteExtra* m_editModeBtn;
    CCMenuItemSpriteExtra* m_viewModeBtn;
    CCMenuItemSpriteExtra* m_swipeBtn;
    CCMenuItemSpriteExtra* m_freeMoveBtn;
    CCMenuItemSpriteExtra* m_deselectBtn;
    CCMenuItemSpriteExtra* m_snapBtn;
    CCMenuItemSpriteExtra* m_rotateBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_playtestBtn;
    CCMenuItemSpriteExtra* m_playtestStopBtn;
    CCMenuItemSpriteExtra* m_playtestPauseBtn;
    CCMenuItemSpriteExtra* m_trashBtn;
    CCMenuItemSpriteExtra* m_hideUIBtn;
    cocos2d::CCMenu* m_showUIMenu;
    CCMenuItemSpriteExtra* m_linkBtn;
    CCMenuItemSpriteExtra* m_unlinkBtn;
    CCMenuItemSpriteExtra* m_enableLinkBtn;
    CCMenuItemSpriteExtra* m_undoBtn;
    CCMenuItemSpriteExtra* m_redoBtn;
    CCMenuItemSpriteExtra* m_editObjectBtn;
    CCMenuItemSpriteExtra* m_editGroupBtn;
    CCMenuItemSpriteExtra* m_editHSVBtn;
    CCMenuItemSpriteExtra* m_editSpecialBtn;
    cocos2d::CCObject* m_unk3F0;
    CCMenuItemSpriteExtra* m_copyPasteBtn;
    CCMenuItemSpriteExtra* m_copyBtn;
    CCMenuItemSpriteExtra* m_pasteBtn;
    CCMenuItemSpriteExtra* m_copyValuesBtn;
    CCMenuItemSpriteExtra* m_pasteStateBtn;
    CCMenuItemSpriteExtra* m_pasteColorBtn;
    CCMenuItemSpriteExtra* m_goToLayerBtn;
    CCMenuItemSpriteExtra* m_layerPlusBtn;
    cocos2d::CCArray* m_createButtonBars;
    cocos2d::CCMenu* m_tabsMenu;
    cocos2d::CCArray* m_tabsArray;
    cocos2d::CCSprite* m_deleteAllSprite;
    cocos2d::CCSprite* m_customDeleteSprite;
    CCMenuItemSpriteExtra* m_deleteButton;
    CCMenuItemSpriteExtra* m_deleteAllButton;
    CCMenuItemSpriteExtra* m_deleteFilterNone;
    CCMenuItemSpriteExtra* m_deleteFilterStatic;
    CCMenuItemSpriteExtra* m_deleteFilterDetails;
    CCMenuItemSpriteExtra* m_deleteFilterCustom;
    cocos2d::CCLabelBMFont* m_currentLayerLabel;
    CCMenuItemSpriteExtra* m_layerNextBtn;
    CCMenuItemSpriteExtra* m_layerPrevBtn;
    CCMenuItemSpriteExtra* m_goToBaseBtn;
    ButtonSprite* m_deleteGroupSprite;
    ButtonSprite* m_deleteColorSprite;
    void* m_unk4b8;
    void* m_unk4c0;
    int m_selectedObjectIndex;
    cocos2d::CCArray* m_createButtonArray;
    cocos2d::CCArray* m_customObjectButtonArray;
    cocos2d::CCArray* m_deleteObjects;
    cocos2d::CCDictionary* m_viewButtons;
    cocos2d::CCNode* m_viewMenu;
    std::unordered_map<int, void*> m_unk5a0;
    int m_unk5e0;
    int m_selectedMode;
    LevelEditorLayer* m_editorLayer;
    cocos2d::CCPoint m_swipeStart;
    cocos2d::CCPoint m_swipeEnd;
    cocos2d::CCPoint m_swipePosition;
    cocos2d::CCPoint m_lastTouchPoint;
    cocos2d::CCPoint m_cameraTest;
    cocos2d::CCPoint m_clickAtPosition;
    GameObject* m_selectedObject;
    GameObject* m_snapObject;
    bool m_isDraggingCamera;
    bool m_continueSwipe;
    bool m_findSnap;
    void* m_unk540;
    cocos2d::CCLabelBMFont* m_zoomLabel;
    int m_selectedTab;
    int m_cycledObjectIndex;
    ColorSelectLiveOverlay* m_colorOverlay;
    HSVLiveOverlay* m_hsvOverlay;
    double m_keyTime;
    bool m_swipeModeTriggered;
    cocos2d::CCSprite* m_layerLockSprite;
    float m_editorZoom;
    bool m_isPaused;
    bool m_uiHidden;
    bool m_uiHiddenButton;
    bool m_reloadItems;
    cocos2d::CCNode* m_dpadMoveNode;
    int m_dpadStep;
    bool m_legacyMoveMenu;
    cocos2d::CCArray* m_dpadArrowButtons;
    cocos2d::CCArray* m_dpadStepButtons;
    cocos2d::CCLabelBMFont* m_dpadLabel;
    float m_unk6a8;
    int m_unk6ac;
    int m_unk6b0;
    bool m_unk6b4;
};
