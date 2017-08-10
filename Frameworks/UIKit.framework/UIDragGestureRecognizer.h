/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragGestureRecognizer : UIGestureRecognizer {
    UIDragEvent * _dragEvent;
}

@property (nonatomic) <UIDragGestureRecognizerDelegate> *delegate;
@property (getter=_dragEvent, nonatomic, readonly) UIDragEvent *dragEvent;
@property (nonatomic, readonly) _UIDropSessionImpl *dropSession;
@property (nonatomic, readonly) _UIInternalDraggingSessionDestination *sessionDestination;

- (void).cxx_destruct;
- (id)_dragEvent;
- (bool)_shouldReceiveDragEvent:(id)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)dropSession;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (id)sessionDestination;

@end
