/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAnimatablePropertyState : NSObject {
    UIViewRunningAnimationEntry * _animationEntry;
    NSObject<OS_dispatch_queue> * _animationEntryLockingQueue;
    UIViewInProcessAnimationState * _animationState;
    <UIViewAnimationComposing> * _composer;
    id /* block */  _invalidationCallback;
    int  _ownershipCount;
    <UIVectorOperatable> * _pendingTargetVelocity;
    <UIVectorOperatable> * _pendingVelocity;
}

@property (nonatomic, retain) UIViewRunningAnimationEntry *animationEntry;
@property (nonatomic) UIViewInProcessAnimationState *animationState;
@property (nonatomic, retain) <UIViewAnimationComposing> *composer;
@property (nonatomic, copy) id /* block */ invalidationCallback;
@property (nonatomic) int ownershipCount;

- (void).cxx_destruct;
- (bool)animatePropertyWithCurrentValue:(id)arg1 targetValueGetter:(id /* block */)arg2 preTickShouldRemoveCallback:(id /* block */)arg3 newValueCallback:(id /* block */)arg4 removedCallback:(id /* block */)arg5;
- (id)animationEntry;
- (id)animationState;
- (id)composer;
- (id)initWithInvalidationCallback:(id /* block */)arg1;
- (void)invalidateIfPossible;
- (id /* block */)invalidationCallback;
- (int)ownershipCount;
- (void)setAnimationEntry:(id)arg1;
- (void)setAnimationState:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setInvalidationCallback:(id /* block */)arg1;
- (void)setOwnershipCount:(int)arg1;
- (void)setVelocity:(id)arg1 target:(bool)arg2;
- (id)velocityTarget:(bool)arg1;

@end
