/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIRemoteKeyboardWindow : UITextEffectsWindow <_UIContextCustomBinding> {
    FBSScene * _activeScene;
    bool  _arePlaceholdersInitialised;
    FBSSceneLayer * _externalSceneLayer;
    bool  _resetRequired;
}

@property (nonatomic, readonly) struct { id x1; int x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; } _bindingDescription;
@property (setter=_setBoundContext:, nonatomic) CAContext *_boundContext;
@property (setter=_setContextBinder:, nonatomic) _UIContextBinder *_contextBinder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)remoteKeyboardWindowForScreen:(id)arg1 create:(bool)arg2;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_alwaysGetsContexts;
- (id)_initBasicWithScreen:(id)arg1 options:(id)arg2;
- (bool)_isFullscreen;
- (bool)_isHostedInAnotherProcess;
- (bool)_isTextEffectsWindowNotificationOwner;
- (bool)_isWindowServerHostingManaged;
- (bool)_matchingOptions:(id)arg1;
- (void)_resetScene;
- (void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(bool)arg3 duration:(double)arg4 force:(bool)arg5 isRotating:(bool)arg6;
- (bool)_usesWindowServerHitTesting;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_viewTransformForInterfaceOrientation:(long long)arg1;
- (bool)_wantsSceneAssociation;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)attachBindable;
- (void)dealloc;
- (void)detachBindable;
- (void)endDisablingInterfaceAutorotation;
- (void)invalidate;
- (void)resetScene;
- (void)setWindowLevel:(double)arg1;
- (bool)shouldAttachBindable;
- (bool)shouldDetachBindable;

@end