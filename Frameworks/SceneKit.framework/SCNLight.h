/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLight : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNTechniqueSupport> {
    NSURL * _IESProfileURL;
    SCNOrderedDictionary * _animations;
    float  _attenuationEndDistance;
    float  _attenuationFalloffExponent;
    float  _attenuationStartDistance;
    unsigned int  _automaticallyAdjustsShadowProjection;
    unsigned int  _baked;
    NSMutableDictionary * _bindings;
    double  _cascadeDebugFactor;
    unsigned int  _castsShadow;
    unsigned long long  _categoryBitMask;
    id  _color;
    unsigned int  _forcesBackFaceCasters;
    SCNMaterialProperty * _gobo;
    unsigned int  _goboProjectShadows;
    SCNMaterialProperty * _ies;
    double  _intensity;
    unsigned int  _isPresentationInstance;
    struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_12_1_1; } x12; float x13; float x14; float x15; float x16; float x17; unsigned char x18; unsigned char x19; unsigned long long x20; bool x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; double x31; double x32; double x33; struct __C3DEffectSlot {} *x34; } * _light;
    double  _maximumShadowDistance;
    NSString * _name;
    double  _orthographicScale;
    <MTLTexture> * _probeTexture;
    unsigned int  _sampleDistributedShadowMaps;
    double  _shadowBias;
    unsigned char  _shadowCascadeCount;
    double  _shadowCascadeSplittingFactor;
    id  _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowMapSize;
    float  _shadowRadius;
    unsigned char  _shadowSampleCount;
    unsigned int  _shouldBakeDirectLighting;
    unsigned int  _shouldBakeIndirectLighting;
    NSData * _sphericalHarmonics;
    float  _spotFalloffExponent;
    float  _spotInnerAngle;
    float  _spotOuterAngle;
    SCNTechnique * _technique;
    double  _temperature;
    NSString * _type;
    unsigned int  _usesDeferredShadows;
    unsigned int  _usesModulatedMode;
    double  _zFar;
    double  _zNear;
}

@property (nonatomic, retain) NSURL *IESProfileURL;
@property (readonly) NSArray *animationKeys;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) bool automaticallyAdjustsShadowProjection;
@property (nonatomic) bool castsShadow;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic, retain) id color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forcesBackFaceCasters;
@property (nonatomic, readonly) SCNMaterialProperty *gobo;
@property (readonly) unsigned long long hash;
@property (nonatomic) double intensity;
@property (nonatomic) double maximumShadowDistance;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double orthographicScale;
@property (nonatomic) bool sampleDistributedShadowMaps;
@property (nonatomic) double shadowBias;
@property (nonatomic) unsigned long long shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (nonatomic, retain) id shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowMapSize;
@property (nonatomic) long long shadowMode;
@property (nonatomic) double shadowRadius;
@property (nonatomic) unsigned long long shadowSampleCount;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (readonly) Class superclass;
@property (nonatomic, copy) SCNTechnique *technique;
@property (nonatomic) double temperature;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) double zFar;
@property (nonatomic) double zNear;

+ (id)light;
+ (id)lightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_12_1_1; } x12; float x13; float x14; float x15; float x16; float x17; unsigned char x18; unsigned char x19; unsigned long long x20; bool x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; double x31; double x32; double x33; struct __C3DEffectSlot {} *x34; }*)arg1;
+ (id)lightWithMDLLight:(id)arg1;
+ (id)lightWithMDLLightProbe:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)IESProfileURL;
- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNLight:(id)arg1;
- (void)_customEncodingOfSCNLight:(id)arg1;
- (void)_didDecodeSCNLight:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_probeTexture;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (double)_shadowCascadeDebugFactor;
- (id)_sphericalHarmonics;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (bool)adjustsShadowProjection;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (double)attenuationEndDistance;
- (double)attenuationFalloffExponent;
- (double)attenuationStartDistance;
- (id)attributeForKey:(id)arg1;
- (bool)automaticallyAdjustsShadowProjection;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (bool)castsShadow;
- (unsigned long long)categoryBitMask;
- (id)color;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceBackFaceCasters;
- (bool)forcesBackFaceCasters;
- (id)gobo;
- (id)identifier;
- (id)init;
- (id)initPresentationLightWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_12_1_1; } x12; float x13; float x14; float x15; float x16; float x17; unsigned char x18; unsigned char x19; unsigned long long x20; bool x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; double x31; double x32; double x33; struct __C3DEffectSlot {} *x34; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLightRef:(struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_12_1_1; } x12; float x13; float x14; float x15; float x16; float x17; unsigned char x18; unsigned char x19; unsigned long long x20; bool x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; double x31; double x32; double x33; struct __C3DEffectSlot {} *x34; }*)arg1;
- (double)intensity;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isBaked;
- (bool)isPausedOrPausedByInheritance;
- (struct __C3DLight { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_12_1_1; } x12; float x13; float x14; float x15; float x16; float x17; unsigned char x18; unsigned char x19; unsigned long long x20; bool x21; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; double x31; double x32; double x33; struct __C3DEffectSlot {} *x34; }*)lightRef;
- (double)maximumShadowDistance;
- (id)name;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)orthographicScale;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (id)presentationLight;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (bool)sampleDistributedShadowMaps;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setAdjustsShadowProjection:(bool)arg1;
- (void)setAttenuationEndDistance:(double)arg1;
- (void)setAttenuationFalloffExponent:(double)arg1;
- (void)setAttenuationStartDistance:(double)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setAutomaticallyAdjustsShadowProjection:(bool)arg1;
- (void)setBaked:(bool)arg1;
- (void)setCastsShadow:(bool)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setForceBackFaceCasters:(bool)arg1;
- (void)setForcesBackFaceCasters:(bool)arg1;
- (void)setIESProfileURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntensity:(double)arg1;
- (void)setMaximumShadowDistance:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOrthographicScale:(double)arg1;
- (void)setSampleDistributedShadowMaps:(bool)arg1;
- (void)setShadowBias:(double)arg1;
- (void)setShadowCascadeCount:(unsigned long long)arg1;
- (void)setShadowCascadeSplittingFactor:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowMapSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowMode:(long long)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowSampleCount:(unsigned long long)arg1;
- (void)setShouldBakeDirectLighting:(bool)arg1;
- (void)setShouldBakeIndirectLighting:(bool)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (void)setSpotFalloffExponent:(double)arg1;
- (void)setSpotInnerAngle:(double)arg1;
- (void)setSpotOuterAngle:(double)arg1;
- (void)setTechnique:(id)arg1;
- (void)setTemperature:(double)arg1;
- (void)setType:(id)arg1;
- (void)setUsesDeferredShadows:(bool)arg1;
- (void)setUsesModulatedMode:(bool)arg1;
- (void)setZFar:(double)arg1;
- (void)setZNear:(double)arg1;
- (void)set_probeTexture:(id)arg1;
- (void)set_shadowCascadeDebugFactor:(double)arg1;
- (void)set_sphericalHarmonics:(id)arg1;
- (double)shadowBias;
- (unsigned long long)shadowCascadeCount;
- (double)shadowCascadeSplittingFactor;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowMapSize;
- (long long)shadowMode;
- (double)shadowRadius;
- (unsigned long long)shadowSampleCount;
- (bool)shouldBakeDirectLighting;
- (bool)shouldBakeIndirectLighting;
- (id)sphericalHarmonicsCoefficients;
- (double)spotFalloffExponent;
- (double)spotInnerAngle;
- (double)spotOuterAngle;
- (id)technique;
- (double)temperature;
- (id)type;
- (void)unbindAnimatablePath:(id)arg1;
- (bool)usesDeferredShadows;
- (bool)usesModulatedMode;
- (double)zFar;
- (double)zNear;

@end