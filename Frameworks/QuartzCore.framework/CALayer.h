/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALayer : NSObject <CAMediaTiming, CAPropertyInfo, DebugHierarchyObject, NSSecureCoding> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
    }  _attr;
}

@property (nonatomic, readonly) CALayer *_labelLayerToClipDuringBoundsSizeAnimation;
@property (nonatomic, readonly, retain) CALayer *_mapKit_mapLayer;
@property bool acceleratesDrawing;
@property (copy) NSDictionary *actions;
@property bool allowsContentsRectCornerMasking;
@property bool allowsDisplayCompositing;
@property bool allowsEdgeAntialiasing;
@property bool allowsGroupBlending;
@property bool allowsGroupOpacity;
@property bool allowsHitTesting;
@property struct CGPoint { double x1; double x2; } anchorPoint;
@property double anchorPointZ;
@property bool autoreverses;
@property struct CGColor { }*backgroundColor;
@property struct CGSize { double x1; double x2; } backgroundColorPhase;
@property (copy) NSArray *backgroundFilters;
@property double beginTime;
@property (copy) NSArray *behaviors;
@property struct CGColor { }*borderColor;
@property double borderWidth;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property bool canDrawConcurrently;
@property bool clearsContext;
@property double coefficientOfRestitution;
@property (retain) id compositingFilter;
@property (retain) id contents;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsCenter;
@property bool contentsContainsSubtitles;
@property bool contentsDither;
@property (copy) NSString *contentsFormat;
@property (copy) NSString *contentsGravity;
@property struct CGColor { }*contentsMultiplyColor;
@property bool contentsOpaque;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property double contentsScale;
@property (copy) NSString *contentsScaling;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;
@property bool continuousCorners;
@property (retain) id cornerContents;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cornerContentsCenter;
@property bool cornerContentsMasksEdges;
@property double cornerRadius;
@property (nonatomic, readonly, retain) CALayer *currentLayer;
@property (readonly, copy) NSString *debugDescription;
@property <CALayerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDoubleSided) bool doubleSided;
@property bool drawsAsynchronously;
@property double duration;
@property unsigned int edgeAntialiasingMask;
@property (copy) NSString *fillMode;
@property (copy) NSArray *filters;
@property bool flipsHorizontalAxis;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (getter=isFrozen) bool frozen;
@property (getter=isGeometryFlipped) bool geometryFlipped;
@property (readonly) unsigned long long hash;
@property (getter=isHidden) bool hidden;
@property bool hitTestsAsOpaque;
@property bool inheritsTiming;
@property bool invertsShadow;
@property bool literalContentsCenter;
@property (copy) NSString *magnificationFilter;
@property (retain) CALayer *mask;
@property unsigned long long maskedCorners;
@property bool masksToBounds;
@property double mass;
@property (copy) CAMeshTransform *meshTransform;
@property (copy) NSString *minificationFilter;
@property float minificationFilterBias;
@property double momentOfInertia;
@property double motionBlurAmount;
@property (copy) NSString *name;
@property bool needsDisplayOnBoundsChange;
@property bool needsLayoutOnGeometryChange;
@property float opacity;
@property (getter=isOpaque) bool opaque;
@property struct CGPoint { double x1; double x2; } position;
@property bool preloadsCache;
@property (copy) NSArray *presentationModifiers;
@property bool rasterizationPrefersDisplayCompositing;
@property double rasterizationScale;
@property float repeatCount;
@property double repeatDuration;
@property struct CGColor { }*shadowColor;
@property struct CGSize { double x1; double x2; } shadowOffset;
@property float shadowOpacity;
@property const struct CGPath { }*shadowPath;
@property bool shadowPathIsBounds;
@property double shadowRadius;
@property bool shouldRasterize;
@property struct CGSize { double x1; double x2; } sizeRequisition;
@property bool sortsSublayers;
@property float speed;
@property (copy) NSArray *stateTransitions;
@property (copy) NSArray *states;
@property (copy) NSDictionary *style;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } sublayerTransform;
@property (copy) NSArray *sublayers;
@property (readonly) Class superclass;
@property (readonly) CALayer *superlayer;
@property double timeOffset;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property double velocityStretch;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property double zPosition;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (void)CAMLParserEndElement:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (int (*)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (bool)_hasRenderLayerSubclass;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)layer;
+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)needsLayoutForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (bool)_canDisplayConcurrently;
- (void)_cancelAnimationTimer;
- (void)_colorSpaceDidChange;
- (void)_contentsFormatDidChange:(id)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { struct Vec4<float> { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; } x3; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (void)_dealloc;
- (bool)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (void)_display;
- (id)_initWithReference:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (unsigned int)_renderImageCopyFlags;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (struct CGColorSpace { }*)_retainColorSpace;
- (bool)_scheduleAnimationTimer;
- (void)_scrollPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (bool)acceleratesDrawing;
- (id)actionForKey:(id)arg1;
- (id)actions;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addPresentationModifier:(id)arg1;
- (void)addState:(id)arg1;
- (void)addSublayer:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (bool)allowsContentsRectCornerMasking;
- (bool)allowsDisplayCompositing;
- (bool)allowsEdgeAntialiasing;
- (bool)allowsGroupBlending;
- (bool)allowsGroupOpacity;
- (bool)allowsHitTesting;
- (bool)allowsWeakReference;
- (id)ancestorSharedWithLayer:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (double)anchorPointZ;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (bool)autoreverses;
- (struct CGColor { }*)backgroundColor;
- (struct CGSize { double x1; double x2; })backgroundColorPhase;
- (id)backgroundFilters;
- (double)beginTime;
- (id)behaviors;
- (struct CGColor { }*)borderColor;
- (double)borderWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canDrawConcurrently;
- (void)clearHasBeenCommitted;
- (bool)clearsContext;
- (double)coefficientOfRestitution;
- (id)compositingFilter;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (bool)contentsAreFlipped;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (bool)contentsContainsSubtitles;
- (bool)contentsDither;
- (id)contentsFormat;
- (id)contentsGravity;
- (struct CGColor { }*)contentsMultiplyColor;
- (bool)contentsOpaque;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (double)contentsScale;
- (id)contentsScaling;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (id)context;
- (bool)continuousCorners;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (id)cornerContents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cornerContentsCenter;
- (bool)cornerContentsMasksEdges;
- (double)cornerRadius;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)dependentStatesOfState:(id)arg1;
- (void)display;
- (void)displayIfNeeded;
- (bool)doubleSided;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (bool)drawsAsynchronously;
- (bool)drawsMipmapLevels;
- (double)duration;
- (unsigned int)edgeAntialiasingMask;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fillMode;
- (id)filters;
- (bool)flipsHorizontalAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long long)arg2;
- (bool)hasBeenCommitted;
- (bool)hidden;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)hitTestsAsOpaque;
- (bool)ignoresHitTesting;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (bool)inheritsTiming;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)invalidateContents;
- (bool)invertsShadow;
- (bool)isDescendantOf:(id)arg1;
- (bool)isDoubleSided;
- (bool)isFlipped;
- (bool)isFrozen;
- (bool)isGeometryFlipped;
- (bool)isHidden;
- (bool)isOpaque;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)layoutBelowIfNeeded;
- (void)layoutIfNeeded;
- (bool)layoutIsActive;
- (void)layoutSublayers;
- (id)lights;
- (bool)literalContentsCenter;
- (id)magnificationFilter;
- (id)mask;
- (unsigned long long)maskedCorners;
- (bool)masksToBounds;
- (double)mass;
- (id)meshTransform;
- (id)minificationFilter;
- (float)minificationFilterBias;
- (id)modelLayer;
- (double)momentOfInertia;
- (double)motionBlurAmount;
- (id)name;
- (bool)needsDisplay;
- (bool)needsDisplayOnBoundsChange;
- (bool)needsLayout;
- (bool)needsLayoutOnGeometryChange;
- (float)opacity;
- (bool)opaque;
- (struct CGPoint { double x1; double x2; })position;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (bool)preloadsCache;
- (id)presentationLayer;
- (id)presentationModifiers;
- (bool)rasterizationPrefersDisplayCompositing;
- (double)rasterizationScale;
- (void*)regionBeingDrawn;
- (oneway void)release;
- (void)reloadValueForKeyPath:(id)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeFromSuperlayer;
- (void)removePresentationModifier:(id)arg1;
- (void)removeState:(id)arg1;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (float)repeatCount;
- (double)repeatDuration;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAcceleratesDrawing:(bool)arg1;
- (void)setActions:(id)arg1;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setAllowsContentsRectCornerMasking:(bool)arg1;
- (void)setAllowsDisplayCompositing:(bool)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (void)setAllowsGroupBlending:(bool)arg1;
- (void)setAllowsGroupOpacity:(bool)arg1;
- (void)setAllowsHitTesting:(bool)arg1;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAnchorPointZ:(double)arg1;
- (void)setAutoreverses:(bool)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBackgroundColorPhase:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundFilters:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setBehaviors:(id)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCanDrawConcurrently:(bool)arg1;
- (void)setClearsContext:(bool)arg1;
- (void)setCoefficientOfRestitution:(double)arg1;
- (void)setCompositingFilter:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsChanged;
- (void)setContentsContainsSubtitles:(bool)arg1;
- (void)setContentsDither:(bool)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContentsMultiplyColor:(struct CGColor { }*)arg1;
- (void)setContentsOpaque:(bool)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScale:(double)arg1;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setContinuousCorners:(bool)arg1;
- (void)setCornerContents:(id)arg1;
- (void)setCornerContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerContentsMasksEdges:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleSided:(bool)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setFlipped:(bool)arg1;
- (void)setFlipsHorizontalAxis:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrozen:(bool)arg1;
- (void)setGeometryFlipped:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHitTestsAsOpaque:(bool)arg1;
- (void)setInheritsTiming:(bool)arg1;
- (void)setInvertsShadow:(bool)arg1;
- (void)setLights:(id)arg1;
- (void)setLiteralContentsCenter:(bool)arg1;
- (void)setMagnificationFilter:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setMasksToBounds:(bool)arg1;
- (void)setMass:(double)arg1;
- (void)setMeshTransform:(id)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setMomentOfInertia:(double)arg1;
- (void)setMotionBlurAmount:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayoutOnGeometryChange:(bool)arg1;
- (void)setOpacity:(float)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreloadsCache:(bool)arg1;
- (void)setPresentationModifiers:(id)arg1;
- (void)setRasterizationPrefersDisplayCompositing:(bool)arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setRepeatDuration:(double)arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setShadowPathIsBounds:(bool)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setSizeRequisition:(struct CGSize { double x1; double x2; })arg1;
- (void)setSortsSublayers:(bool)arg1;
- (void)setSpeed:(float)arg1;
- (void)setStyle:(id)arg1;
- (void)setSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setSublayers:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVelocityStretch:(double)arg1;
- (void)setWantsExtendedDynamicRangeContent:(bool)arg1;
- (void)setZPosition:(double)arg1;
- (struct CGColor { }*)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (float)shadowOpacity;
- (const struct CGPath { }*)shadowPath;
- (bool)shadowPathIsBounds;
- (double)shadowRadius;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeRequisition;
- (bool)sortsSublayers;
- (float)speed;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)stateWithName:(id)arg1;
- (id)style;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })sublayerTransform;
- (id)sublayers;
- (id)superlayer;
- (double)timeOffset;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (double)velocityStretch;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (bool)wantsExtendedDynamicRangeContent;
- (double)zPosition;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)debugHierarchyChildGroupingID;
- (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id*)arg2;
- (id)debugHierarchyPropertyDescriptions;
- (id)debugHierarchyValueForPropertyWithName:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertDoublePoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (id)currentLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (struct CGPoint { double x1; double x2; })doublePosition;
- (bool)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(bool)arg3;
- (bool)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(bool)arg4;
- (void)setDoubleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDoublePosition:(struct CGPoint { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)SCNJSExportProtocol;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(bool)arg1;
- (void)_ui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 usingSpringWithStiffnessFactor:(double)arg4 initialVelocity:(double)arg5 completion:(id /* block */)arg6;
- (void)_ui_removeAnimationForKeyPath:(id)arg1;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (void)setPerspectiveDistance:(double)arg1;
- (bool)uiHasFilterWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (void)web_disableAllActions;

@end