#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJShaderState.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ShaderLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "ShaderLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ShaderLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x3bb550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShaderLayer();

    /**
     * @note[short] MacOS (ARM): 0x33a664
     * @note[short] MacOS (Intel): 0x3b3900
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x30b930
     * @note[short] Android: Rebinded
     */
     ~ShaderLayer();

    /**
     * @note[short] MacOS (Intel): 0x3b3b00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShaderLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x33a838
     * @note[short] MacOS (Intel): 0x3b3b60
     * @note[short] Windows: 0x622920
     * @note[short] iOS: 0x30b9dc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x33c00c
     * @note[short] MacOS (Intel): 0x3b53d0
     * @note[short] Windows: 0x6237c0
     * @note[short] iOS: 0x30cd2c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x340ff0
     * @note[short] MacOS (Intel): 0x3bb110
     * @note[short] Windows: 0x629b10
     * @note[short] iOS: 0x311014
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x33c378
     * @note[short] MacOS (Intel): 0x3b57a0
     * @note[short] Windows: 0x623d40
     * @note[short] Android
     */
    cocos2d::CCPoint objectPosToShaderPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x340d4c
     * @note[short] MacOS (Intel): 0x3bae00
     * @note[short] Windows: 0x6292e0
     * @note[short] iOS: 0x310f40
     * @note[short] Android
     */
    void performCalculations();

    /**
     * @note[short] MacOS (ARM): 0x340218
     * @note[short] MacOS (Intel): 0x3ba130
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preBulgeShader();

    /**
     * @note[short] MacOS (ARM): 0x33ef50
     * @note[short] MacOS (Intel): 0x3b8c40
     * @note[short] Windows: 0x626eb0
     * @note[short] Android
     */
    void preChromaticGlitchShader();

    /**
     * @note[short] MacOS (ARM): 0x33ecc4
     * @note[short] MacOS (Intel): 0x3b8970
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preChromaticShader();

    /**
     * @note[short] MacOS (ARM): 0x340960
     * @note[short] MacOS (Intel): 0x3ba8f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preColorChangeShader();

    /**
     * @note[short] MacOS (ARM): 0x33c20c
     * @note[short] MacOS (Intel): 0x3b55d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preCommonShader();

    /**
     * @note[short] MacOS (ARM): 0x33e7f0
     * @note[short] MacOS (Intel): 0x3b83c0
     * @note[short] Windows: 0x626660
     * @note[short] Android
     */
    void preGlitchShader();

    /**
     * @note[short] MacOS (Intel): 0x3ba3f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x3407b4
     * @note[short] MacOS (Intel): 0x3ba740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x3406e8
     * @note[short] MacOS (Intel): 0x3ba650
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x33f934
     * @note[short] MacOS (Intel): 0x3b9760
     * @note[short] Windows: 0x627a40
     * @note[short] Android
     */
    void preLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x33fe78
     * @note[short] MacOS (Intel): 0x3b9ce0
     * @note[short] Windows: 0x627f10
     * @note[short] Android
     */
    void preMotionBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x33f504
     * @note[short] MacOS (Intel): 0x3b92e0
     * @note[short] Windows: 0x627410
     * @note[short] Android
     */
    cocos2d::CCPoint prepareTargetContainer();

    /**
     * @note[short] MacOS (ARM): 0x340448
     * @note[short] MacOS (Intel): 0x3ba360
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void prePinchShader();

    /**
     * @note[short] MacOS (ARM): 0x33f320
     * @note[short] MacOS (Intel): 0x3b9080
     * @note[short] Windows: 0x627250
     * @note[short] Android
     */
    void prePixelateShader();

    /**
     * @note[short] MacOS (Intel): 0x3b9a30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x3405c0
     * @note[short] MacOS (Intel): 0x3ba510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preSepiaShader();

    /**
     * @note[short] Android
     */
    void preShockLineShader();

    /**
     * @note[short] Android
     */
    void preShockWaveShader();

    /**
     * @note[short] Windows: 0x628fb0
     * @note[short] Android
     */
    void preSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x341348
     * @note[short] MacOS (Intel): 0x3bb4c0
     * @note[short] Windows: 0x62a690
     * @note[short] Android
     */
    bool resetAllShaders();

    /**
     * @note[short] MacOS (Intel): 0x3b95d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetTargetContainer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupBulgeShader();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupChromaticGlitchUniforms();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupChromaticUniforms();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupColorChangeShader();

    /**
     * @note[short] Android
     */
    void setupCommonUniforms();

    /**
     * @note[short] MacOS (ARM): 0x33b734
     * @note[short] MacOS (Intel): 0x3b4b00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupGlitchUniforms();

    /**
     * @note[short] MacOS (ARM): 0x33bcb8
     * @note[short] MacOS (Intel): 0x3b5080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupGrayscaleShader();

    /**
     * @note[short] MacOS (ARM): 0x33bdc0
     * @note[short] MacOS (Intel): 0x3b5180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupHueShiftShader();

    /**
     * @note[short] MacOS (ARM): 0x33bd80
     * @note[short] MacOS (Intel): 0x3b5140
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupInvertColorShader();

    /**
     * @note[short] MacOS (ARM): 0x33b980
     * @note[short] MacOS (Intel): 0x3b4d50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupLensCircleShader();

    /**
     * @note[short] MacOS (ARM): 0x33bc30
     * @note[short] MacOS (Intel): 0x3b5000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupMotionBlurShader();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupPinchShader();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupRadialBlurShader();

    /**
     * @note[short] MacOS (ARM): 0x33bd40
     * @note[short] MacOS (Intel): 0x3b5100
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupSepiaShader();

    /**
     * @note[short] MacOS (ARM): 0x33a8f8
     * @note[short] MacOS (Intel): 0x3b3c20
     * @note[short] Windows: 0x622a30
     * @note[short] Android
     */
    void setupShader(bool reset);

    /**
     * @note[short] Android
     */
    void setupShockLineUniforms();

    /**
     * @note[short] Android
     */
    void setupShockWaveUniforms();

    /**
     * @note[short] Android
     */
    void setupSplitScreenShader();

    /**
     * @note[short] MacOS (ARM): 0x33b1b4
     * @note[short] MacOS (Intel): 0x3b4580
     * @note[short] Windows: 0x623750
     * @note[short] Android
     */
    void toggleAntiAlias(bool antiAlias);

    /**
     * @note[short] MacOS (ARM): 0x34014c
     * @note[short] MacOS (Intel): 0x3ba060
     * @note[short] Windows: 0x628220
     * @note[short] Android
     */
    void triggerBulge(float fadeTime, float bulge, float screenOffsetX, float screenOffsetY, float radius, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33edd0
     * @note[short] MacOS (Intel): 0x3b8ab0
     * @note[short] Windows: 0x626ac0
     * @note[short] Android
     */
    void triggerChromaticGlitch(bool enable, float duration, float speed, float strength, float rgbOffset, float lineThickness, float lineStrength, float segmentHeight, int easingType, float easingRate, bool relative, bool relativePos);

    /**
     * @note[short] MacOS (ARM): 0x33ec4c
     * @note[short] MacOS (Intel): 0x3b8910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerChromaticX(float fadeTime, float targetX, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33ec88
     * @note[short] MacOS (Intel): 0x3b8940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerChromaticY(float fadeTime, float targetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x340864
     * @note[short] MacOS (Intel): 0x3ba800
     * @note[short] Windows: 0x628b00
     * @note[short] Android
     */
    void triggerColorChange(float fadeTime, float cr, float cg, float cb, float br, float bg, float bb, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33e760
     * @note[short] MacOS (Intel): 0x3b8320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerGlitch(float fadeTime, float strength, float speed, float sliceHeight, float maxSliceXOff, float maxColXOff, float maxColYOff, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x3404b0
     * @note[short] MacOS (Intel): 0x3ba3c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerGrayscale(float fadeTime, float target, bool useLuminance, int tintChannel, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34079c
     * @note[short] MacOS (Intel): 0x3ba720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerHueShift(float fadeTime, float degrees, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x340618
     * @note[short] MacOS (Intel): 0x3ba570
     * @note[short] Windows: 0x628870
     * @note[short] Android
     */
    void triggerInvertColor(float fadeTime, float target, float r, float g, float b, bool editRGB, bool tweenRGB, bool clampRGB, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33f824
     * @note[short] MacOS (Intel): 0x3b9650
     * @note[short] Windows: 0x6277a0
     * @note[short] Android
     */
    void triggerLensCircle(float fadeTime, float size, float fade, float strength, int targetID, int tintChannel, float screenOffsetX, float screenOffsetY, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33fcd0
     * @note[short] MacOS (Intel): 0x3b9b40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerMotionBlurX(float fadeTime, float targetX, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x33fda4
     * @note[short] MacOS (Intel): 0x3b9c10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerMotionBlurY(float fadeTime, float targetY, float intensity, float fade, int targetID, float followEase, bool dualDir, int refChannel, int easingType, float easingRate, bool relative, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x340288
     * @note[short] MacOS (Intel): 0x3ba1a0
     * @note[short] Windows: 0x628430
     * @note[short] Android
     */
    void triggerPinchX(float fadeTime, float targetX, float screenOffsetX, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x340368
     * @note[short] MacOS (Intel): 0x3ba280
     * @note[short] Windows: 0x628650
     * @note[short] Android
     */
    void triggerPinchY(float fadeTime, float targetY, float screenOffsetY, float radius, float modifier, bool target, int targetID, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33f248
     * @note[short] MacOS (Intel): 0x3b8fa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerPixelateX(float fadeTime, float targetX, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33f2b4
     * @note[short] MacOS (Intel): 0x3b9010
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerPixelateY(float fadeTime, float targetY, bool snapGrid, bool hardEdges, int easingType, float easingRate, bool relative);

    /**
     * @note[short] MacOS (ARM): 0x33fac4
     * @note[short] MacOS (Intel): 0x3b9930
     * @note[short] Windows: 0x627c70
     * @note[short] Android
     */
    void triggerRadialBlur(float fadeTime, float size, float intensity, float fade, int refChannel, float screenOffsetX, float screenOffsetY, bool target, int targetID, int easingType, float easingRate, bool emptyOnly);

    /**
     * @note[short] MacOS (ARM): 0x3405a8
     * @note[short] MacOS (Intel): 0x3ba4f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerSepia(float fadeTime, float target, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33e1d0
     * @note[short] MacOS (Intel): 0x3b7c30
     * @note[short] Windows: 0x625a20
     * @note[short] Android
     */
    void triggerShockLine(float speed, float thickness, bool rotate, bool flip, bool dual, bool invert, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, float screenOffset, int targetID, bool target, bool follow, bool relative, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33d4fc
     * @note[short] MacOS (Intel): 0x3b6e40
     * @note[short] Windows: 0x624d50
     * @note[short] Android
     */
    void triggerShockWave(float speed, float thickness, float strength, float waveWidth, float fadeIn, float fadeOut, float timeOffset, bool invert, float inner, float screenOffsetX, float screenOffsetY, int targetID, bool target, bool follow, bool relative, float outer, float maxSize, bool animate, float fadeTime, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x340ad8
     * @note[short] MacOS (Intel): 0x3baae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerSplitScreenCols(float fadeTime, float targetX, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x340ac0
     * @note[short] MacOS (Intel): 0x3baac0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerSplitScreenRows(float fadeTime, float targetY, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x34125c
     * @note[short] MacOS (Intel): 0x3bb3b0
     * @note[short] Windows: 0x62a500
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tweenValue(float fromValue, float toValue, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x33d730
     * @note[short] MacOS (Intel): 0x3b70c0
     * @note[short] Windows: 0x629df0
     * @note[short] Android
     */
    void tweenValueAuto(float value, int action, float duration, int easingType, float easingRate);

    /**
     * @note[short] MacOS (Intel): 0x3b58f0
     * @note[short] Windows: 0x623ef0
     * @note[short] Android
     */
    void updateEffectOffsets(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x3400e4
     * @note[short] MacOS (Intel): 0x3b9fc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMotionBlurSpeedX(float x, float dt);

    /**
     * @note[short] MacOS (ARM): 0x340118
     * @note[short] MacOS (Intel): 0x3ba010
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMotionBlurSpeedY(float y, float dt);

    /**
     * @note[short] MacOS (ARM): 0x33e39c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateShockLineCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x33de24
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateShockWaveCenter(cocos2d::CCPoint center);

    /**
     * @note[short] MacOS (ARM): 0x33b128
     * @note[short] MacOS (Intel): 0x3b4500
     * @note[short] Windows: 0x62a610
     * @note[short] Android
     */
    bool updateZLayer(int minLayer, int maxLayer, bool noParticles);
    GJShaderState m_state;
    bool m_timesyncShaderActions;
    cocos2d::CCGLProgram* m_shader;
    cocos2d::CCRenderTexture* m_renderTexture;
    cocos2d::CCSprite* m_sprite;
    bool m_antiAlias;
    bool m_configuredAntiAlias;
    void* m_unk3d4;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCPoint m_savedCameraPosition;
    float m_savedCameraRotation;
    float m_shockWaveTimeMult;
    float m_scaleFactor;
    float m_aspectRatio;
    cocos2d::CCSize m_screenSize;
    cocos2d::CCSize m_textureContentSize;
    cocos2d::CCSize m_targetTextureSize;
    cocos2d::CCSize m_targetTextureSizeExtra;
    int m_textureScaleUniform;
    int m_textureScaleInvUniform;
    int m_screenAspectUniform;
    int m_screenAspectINVUniform;
    int m_shaderPositionUniform;
    int m_blurRefColorUniform;
    int m_blurUseRefUniform;
    int m_blurIntensityUniform;
    int m_blurOnlyEmptyUniform;
    int m_shockWaveTimeUniform;
    int m_shockWaveTime1Uniform;
    int m_shockWaveTime2Uniform;
    int m_shockWaveTime3Uniform;
    int m_shockWaveTime4Uniform;
    int m_shockWaveStrengthUniform;
    int m_shockWaveWavesUniform;
    int m_shockWaveCenterUniform;
    int m_shockWaveInvertUniform;
    int m_shockWaveMinSizeUniform;
    int m_shockWaveMaxSizeUniform;
    int m_shockWaveMaxDistValUniform;
    float m_shockWaveTime1;
    float m_shockWaveTime2;
    float m_shockWaveTime3;
    float m_shockWaveTime4;
    float m_shockWaveMaxDistVal;
    float m_shockWaveMinSize;
    float m_shockWaveMaxSize;
    bool m_shockWaveUnk46c;
    int m_shockLineTimeUniform;
    int m_shockLineTime1Uniform;
    int m_shockLineTime2Uniform;
    int m_shockLineTime3Uniform;
    int m_shockLineTime4Uniform;
    int m_shockLineAxisUniform;
    int m_shockLineDirectionUniform;
    int m_shockLineDualUniform;
    int m_shockLineWavesUniform;
    int m_shockLineStrengthUniform;
    int m_shockLineCenterUniform;
    int m_shockLineMaxDistValUniform;
    float m_shockLineTime1;
    float m_shockLineTime2;
    float m_shockLineTime3;
    float m_shockLineTime4;
    float m_shockLineMaxDistVal;
    int m_unk4b4;
    int m_unk4b8;
    int m_unk4bc;
    int m_glitchBotUniform;
    int m_glitchTopUniform;
    int m_glitchXOffsetUniform;
    int m_glitchColOffsetUniform;
    int m_glitchRndUniform;
    int m_chromaticXOffUniform;
    int m_chromaticYOffUniform;
    int m_cGRGBOffsetUniform;
    int m_cGYOffsetUniform;
    int m_cGTimeUniform;
    int m_cGStrengthUniform;
    int m_cGHeightUniform;
    int m_cGLineThickUniform;
    int m_cGLineStrengthUniform;
    int m_lensCircleOriginUniform;
    int m_lensCircleStartUniform;
    int m_lensCircleEndUniform;
    int m_lensCircleStrengthUniform;
    int m_lensCircleTintUniform;
    int m_lensCircleAdditiveUniform;
    int m_radialBlurCenterUniform;
    int m_radialBlurValueUniform;
    int m_blurFadeUniform;
    int m_motionBlurValueUniform;
    int m_motionBlurMultUniform;
    int m_motionBlurDualUniform;
    int m_bulgeValueUniform;
    int m_bulgeValue2Uniform;
    int m_bulgeOriginUniform;
    int m_bulgeRadiusUniform;
    int m_pinchValueUniform;
    int m_pinchCenterPosUniform;
    int m_pinchCalcUniform;
    int m_pinchRadiusUniform;
    int m_grayscaleValueUniform;
    int m_grayscaleTintUniform;
    int m_grayscaleUseLumUniform;
    int m_sepiaValueUniform;
    int m_invertColorValueUniform;
    int m_hueShiftCosAUniform;
    int m_hueShiftSinAUniform;
    int m_colorChangeCUniform;
    int m_colorChangeBUniform;
    int m_rowmodUniform;
    int m_colmodUniform;
    int m_rowmodCalcUniform;
    int m_colmodCalcUniform;
    int m_splitXStartUniform;
    int m_splitXRangeUniform;
    int m_splitXRangeMultUniform;
    int m_splitYStartUniform;
    int m_splitYRangeUniform;
    int m_splitYRangeMultUniform;
};
