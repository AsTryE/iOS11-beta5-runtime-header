/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewLabel : UILabel {
    double  _firstParagraphFirstLineHeadIndent;
    long long  _savedNumberOfLines;
    NSAttributedString * _shadowAttributedText;
    UITableViewCell * _tableCell;
}

@property (nonatomic) UITableViewCell *tableCell;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)arg1;
- (void)_cleanupErrantFirstLineHeadIndent;
- (void)_clearNumberOfLines;
- (id)_disabledFontColor;
- (void)_restoreNumberOfLines;
- (void)_setFirstParagraphFirstLineHeadIndent:(double)arg1;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAttributedText:(id)arg1;
- (void)setTableCell:(id)arg1;
- (void)setText:(id)arg1;
- (id)tableCell;
- (void)traitCollectionDidChange:(id)arg1;

@end
