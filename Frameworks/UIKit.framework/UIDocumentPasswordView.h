/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate> {
    UIImageView * _iconView;
    UILabel * _label;
    UIDocumentPasswordField * _passwordTextField;
    NSObject<UIDocumentPasswordViewDelegate> * passwordDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
@property (nonatomic, readonly) UITextField *passwordField;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)_canDrawContent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_iconRectForContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_labelFont;
- (double)_labelHorizontalOffset;
- (id)_labelTextColor;
- (void)_passwordEntered:(id)arg1;
- (double)_textFieldWidth;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithDocumentName:(id)arg1;
- (void)layoutSubviews;
- (id)passwordDelegate;
- (id)passwordField;
- (void)setPasswordDelegate:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

@end
