/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActionSheet : UIView <UIPopoverControllerDelegate> {
    long long  _actionSheetStyle;
    NSMutableArray * _actions;
    UIAlertController * _alertController;
    bool  _alertControllerShouldDismiss;
    long long  _cancelIndex;
    id  _context;
    <UIActionSheetDelegate> * _delegate;
    long long  _destructiveButtonIndex;
    bool  _dismissingAlertController;
    long long  _firstOtherButtonIndex;
    bool  _handlingAlertActionShouldDismiss;
    bool  _hasPreparedAlertActions;
    bool  _isPresented;
    _UIAlertControllerShimPresenter * _presenter;
    UIActionSheet * _retainedSelf;
}

@property (nonatomic) long long actionSheetStyle;
@property (nonatomic) long long cancelButtonIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIActionSheetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long destructiveButtonIndex;
@property (nonatomic, readonly) long long firstOtherButtonIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfButtons;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (getter=isVisible, nonatomic, readonly) bool visible;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_isAlertControllerShimClass;
+ (Class)_popoverControllerClass;

- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)_alertController;
- (id)_attributedTitleString;
- (id)_buttonAtIndex:(long long)arg1;
- (id)_contentView;
- (void)_didPresent;
- (void)_dismissForTappedIndex:(long long)arg1;
- (id)_indexesOfSelectedButtons;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)_prepareAlertActions;
- (bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (id)_relinquishPopoverController;
- (void)_setAttributedTitleString:(id)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (void)_setIndexesOfSelectedButtons:(id)arg1;
- (void)_setIsPresented:(bool)arg1;
- (void)_showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(bool)arg4;
- (id)_titleLabel;
- (void)_toggleButtonSelectionAtIndex:(unsigned long long)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (long long)actionSheetStyle;
- (long long)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)bodyText;
- (id)buttonAtIndex:(long long)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (long long)destructiveButtonIndex;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)firstOtherButtonIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (bool)isVisible;
- (id)message;
- (long long)numberOfButtons;
- (int)numberOfLinesInTitle;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentFromBarButtonItem:(id)arg1 direction:(unsigned long long)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(long long)arg4 animated:(bool)arg5;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(bool)arg6;
- (void)presentSheetInContentView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)setActionSheetStyle:(long long)arg1;
- (void)setBodyText:(id)arg1;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveButtonIndex:(long long)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(bool)arg1;
- (void)setInPopover:(bool)arg1;
- (void)setIndexOfSelectedButton:(long long)arg1;
- (void)setMessage:(id)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)setUseThreeColumnsButtonsLayout:(bool)arg1;
- (void)showFromBarButtonItem:(id)arg1 animated:(bool)arg2;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
- (void)showInView:(id)arg1;
- (id)subtitle;
- (id)title;
- (bool)useThreeColumnsButtonsLayout;

@end
