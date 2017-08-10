/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider> {
    NSDictionary * _attributesForExtraLineFragment;
    double  _cacheBoundsMaxY;
    double  _cacheBoundsMinY;
    struct CGPath { } * _cachedBoundingPath;
    struct __CFArray { } * _cachedBounds;
    struct __CFArray { } * _cachedClippingAttributes;
    NSArray * _exclusionPaths;
    NSLayoutManager * _layoutManager;
    long long  _layoutOrientation;
    double  _lineFragmentPadding;
    unsigned long long  _maximumLines;
    double  _minimumWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct __tcFlags { 
        unsigned int widthTracksTextView : 1; 
        unsigned int heightTracksTextView : 1; 
        unsigned int observingFrameChanges : 1; 
        unsigned int lineBreakMode : 4; 
        unsigned int oldAPI : 1; 
        unsigned int _reserved : 8; 
    }  _tcFlags;
    id  _textView;
}

@property (nonatomic, copy) NSArray *exclusionPaths;
@property (nonatomic) bool heightTracksTextView;
@property (readonly) bool isSimpleRectangularTextContainer;
@property (nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (getter=isSimpleRectangularTextContainer, nonatomic, readonly) bool simpleRectangularTextContainer;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool widthTracksTextView;

+ (void)initialize;

- (void)_commonInit;
- (void)_resizeAccordingToTextView:(id)arg1;
- (id)attributesForExtraLineFragment;
- (struct CGSize { double x1; double x2; })containerSize;
- (void)coordinateAccess:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exclusionPaths;
- (bool)heightTracksTextView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isSimpleRectangularTextContainer;
- (id)layoutManager;
- (long long)layoutOrientation;
- (long long)lineBreakMode;
- (double)lineFragmentPadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (unsigned long long)maximumNumberOfLines;
- (double)minimumLineFragmentWidth;
- (void)replaceLayoutManager:(id)arg1;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setHeightTracksTextView:(bool)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineFragmentPadding:(double)arg1;
- (void)setMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextView:(id)arg1;
- (void)setWidthTracksTextView:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGPoint { double x1; double x2; })textContainerOrigin;
- (id)textView;
- (bool)widthTracksTextView;

@end
