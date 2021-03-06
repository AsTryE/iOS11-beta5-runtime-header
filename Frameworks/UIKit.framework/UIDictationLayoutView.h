/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationLayoutView : UIDictationView {
    NSString * _currentDictationLanguage;
    UIButton * _globeButton;
    bool  _hideSwitcher;
    UIButton * _keyboardButton;
    UILabel * _languageLabel;
    bool  _selectionGestureDetected;
    UIButton * _startButton;
    UIButton * _stopButton;
    UIButton * _waveTapEndpointButton;
}

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)dealloc;
- (void)didEndIndirectSelectionGesture;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowing;
- (void)keyboardButtonPressed;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (void)setRenderConfig:(id)arg1;
- (void)setState:(int)arg1;
- (void)startStopButtonPressed;
- (void)updateLanguageLabel;
- (void)willBeginIndirectSelectionGesture;

@end
