/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILabel : UIView <ABText, NSCoding, UIContentSizeCategoryAdjusting, _UILabelVisualStyleSubject, _UIMultilineTextContentSizing, _UIViewBaselineSpacing> {
    bool  __textColorFollowsTintColor;
    _UILabelVisualStyle * __visualStyle;
    bool  _adjustsFontForContentSizeCategory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _baselineReferenceBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedIntrinsicContentSize;
    _UILabelContent * _content;
    long long  _contentsFormat;
    CUICatalog * _cuiCatalog;
    CUIStyleEffectConfiguration * _cuiStyleEffectConfiguration;
    NSMutableDictionary * _defaultAttributes;
    NSMutableDictionary * _fallbackColorsForUserInterfaceStyle;
    double  _firstLineBaseline;
    UIColor * _highlightedColor;
    double  _lastLineBaseline;
    id  _layout;
    long long  _lineSpacing;
    long long  _measuredNumberOfLines;
    double  _minimumFontSize;
    double  _minimumScaleFactor;
    double  _multilineContextWidth;
    long long  _numberOfLines;
    double  _preferredMaxLayoutWidth;
    double  _previousBaselineOffsetFromBottom;
    double  _previousFirstLineBaseline;
    _UILabelScaledMetrics * _scaledMetrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSAttributedString * _synthesizedAttributedText;
    struct { 
        unsigned int highlighted : 1; 
        unsigned int autosizeTextToFit : 1; 
        unsigned int autotrackTextToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int enabled : 1; 
        unsigned int wordRoundingEnabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int marqueeEnabled : 1; 
        unsigned int marqueeRunable : 1; 
        unsigned int marqueeRequired : 1; 
        unsigned int drawsLetterpress : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int explicitBaselineOffset : 1; 
        unsigned int usesSimpleTextEffects : 1; 
        unsigned int isVariableLengthString : 1; 
        unsigned int wantsUnderlineForAccessibilityButtonShapesEnabled : 1; 
        unsigned int cachedIntrinsicContentSizeIsValid : 1; 
        unsigned int overridesDrawRect : 1; 
        unsigned int overridesTextAccessors : 1; 
        unsigned int disableUpdateTextColorOnTraitCollectionChange : 1; 
        unsigned int textAlignmentFollowsWritingDirection : 1; 
        unsigned int textAlignmentMirrored : 1; 
        unsigned int shortcutIntrinsicContentSize : 1; 
        unsigned int noNeedsDisplayCheckForBaselineCalculationNeeded : 1; 
        unsigned int overallWritingDirectionFollowsLayoutDirection : 1; 
    }  _textLabelFlags;
}

@property (nonatomic, readonly) double _capOffsetFromBoundsTop;
@property (getter=_content, setter=_setContent:, nonatomic, retain) _UILabelContent *_content;
@property (setter=_setDrawsDebugBaselines:, nonatomic) bool _drawsDebugBaselines;
@property (setter=_setFirstLineBaselineFrameOriginY:, nonatomic) double _firstLineBaselineFrameOriginY;
@property (nonatomic, readonly) double _firstLineBaselineOffsetFromBoundsTop;
@property (setter=_setFirstLineCapFrameOriginY:, nonatomic) double _firstLineCapFrameOriginY;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (setter=_setLastLineBaselineFrameOriginY:, nonatomic) double _lastLineBaselineFrameOriginY;
@property (getter=_synthesizedAttributedText, setter=_setSynthesizedAttributedText:, nonatomic, retain) NSAttributedString *_synthesizedAttributedText;
@property (setter=_setTextColorFollowsTintColor:, nonatomic) bool _textColorFollowsTintColor;
@property (setter=_setVisualStyle:, nonatomic, retain) _UILabelVisualStyle *_visualStyle;
@property (setter=_setWantsUnderlineForAccessibilityButtonShapesEnabled:, nonatomic) bool _wantsUnderlineForAccessibilityButtonShapesEnabled;
@property (nonatomic, copy) NSString *ab_text;
@property (nonatomic, copy) NSDictionary *ab_textAttributes;
@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool adjustsLetterSpacingToFitWidth;
@property (nonatomic) bool allowsDefaultTighteningForTruncation;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long baselineAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIColor *highlightedTextColor;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long lineSpacing;
@property (nonatomic) double minimumFontSize;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_defaultAttributes;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_insetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forAttributedString:(id)arg2 withDefaultFont:(id)arg3 inView:(id)arg4;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForAttributedString:(id)arg1 withDefaultFont:(id)arg2 inView:(id)arg3;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForString:(id)arg1 withFont:(id)arg2 inView:(id)arg3;
+ (bool)_isMonochromeDrawingDisabled;
+ (struct CGSize { double x1; double x2; })_legacy_adjustSizeForWebKitConstraining:(struct CGSize { double x1; double x2; })arg1 withFont:(id)arg2;
+ (struct __CFCharacterSet { }*)_tooBigChars;
+ (id)defaultFont;
+ (Class)layerClass;

- (id)__currentDefaultColor;
- (void)_accessibilityButtonShapesChangedNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (double)_actualScaleFactor;
- (void)_adjustPreferredFontForCurrentContentSizeCategory;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (id)_associatedScalingLabel;
- (bool)_attributedStringHasAttributesNotCoveredByPrimitives;
- (id)_attributedStringIsolatingStringWritingDirection:(id)arg1;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (double)_baselineOffsetFromBottom;
- (void)_baselineOffsetParametersDidChange;
- (double)_capOffsetFromBoundsTop;
- (void)_commonInit;
- (id)_content;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsetsFromFonts;
- (long long)_contentsFormatForNonDeepDrawing;
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1;
- (id)_cuiCatalog;
- (id)_cuiStyleEffectConfiguration;
- (id)_defaultAttributes;
- (id)_defaultAttributesForUpgradingString:(id)arg1;
- (long long)_determineContentsFormat;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_disabledFontColor;
- (void)_drawFullMarqueeTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 baselineCalculationOnly:(bool)arg2;
- (bool)_drawsDebugBaselines;
- (bool)_drawsUnderline;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ensureBaselineMetricsReturningBounds;
- (void)_evaluateContentsFormat;
- (id)_fallbackTextColorForUserInterfaceStyle:(long long)arg1;
- (double)_firstBaselineOffsetFromTop;
- (double)_firstLineBaseline;
- (double)_firstLineBaselineFrameOriginY;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (double)_firstLineCapFrameOriginY;
- (id)_fontInfoForBaselineSpacing;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (bool)_hasFontInfoForVerticalBaselineSpacing;
- (float)_hyphenationFactor;
- (id)_image;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_invalidateAsNeededForNewSize:(struct CGSize { double x1; double x2; })arg1 oldSize:(struct CGSize { double x1; double x2; })arg2 withLinkCheck:(bool)arg3;
- (void)_invalidateCachedDefaultAttributes;
- (void)_invalidateIntrinsicContentSizeNeedingLayout:(bool)arg1;
- (void)_invalidateLayout;
- (void)_invalidateSynthesizedAttributedTextAndLayout;
- (void)_invalidateTextSize;
- (void)_invalidateTextSizeIncludingIntrinsicContentSize:(bool)arg1;
- (bool)_isTextFieldCenteredLabel;
- (double)_lastLineBaseline;
- (double)_lastLineBaselineFrameOriginY;
- (id)_layoutDebuggingTitle;
- (id)_materializedAttributedString;
- (double)_maximumMarqueeTextWidth;
- (long long)_measuredNumberOfLines;
- (double)_minimumFontSize;
- (double)_multilineContextWidth;
- (bool)_needsDisplayForbaselineCalculation;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_noteInstanceCustomizationForAttributedString:(id)arg1 attributes:(id)arg2;
- (bool)_overallWritingDirectionFollowsLayoutDirection;
- (double)_preferredMaxLayoutWidth;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetUsesExplicitPreferredMaxLayoutWidth;
- (id)_safeContent:(bool*)arg1;
- (void)_setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)_setColor:(id)arg1;
- (void)_setContent:(id)arg1;
- (void)_setCuiCatalog:(id)arg1;
- (void)_setCuiStyleEffectConfiguration:(id)arg1;
- (void)_setDefaultAttributes:(id)arg1;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (void)_setFallbackTextColor:(id)arg1 forUserInterfaceStyle:(long long)arg2;
- (void)_setFirstLineBaselineFrameOriginY:(double)arg1;
- (void)_setFirstLineCapFrameOriginY:(double)arg1;
- (void)_setFont:(id)arg1;
- (void)_setHyphenationFactor:(float)arg1;
- (void)_setLastLineBaselineFrameOriginY:(double)arg1;
- (void)_setLineBreakMode:(long long)arg1;
- (void)_setMinimumFontSize:(double)arg1;
- (void)_setMultilineContextWidth:(double)arg1;
- (void)_setNeedsDisplayForInvalidatedContents;
- (void)_setNeedsUpdateConstraintsNeedingLayout:(bool)arg1;
- (void)_setOverallWritingDirectionFollowsLayoutDirection:(bool)arg1;
- (void)_setShadow:(id)arg1;
- (void)_setShadowUIOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setSynthesizedAttributedText:(id)arg1;
- (void)_setText:(id)arg1;
- (void)_setTextAlignment:(long long)arg1;
- (void)_setTextAlignmentFollowsWritingDirection:(bool)arg1;
- (void)_setTextAlignmentMirrored:(bool)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextColorFollowsTintColor:(bool)arg1;
- (void)_setUseShortcutIntrinsicContentSize:(bool)arg1;
- (void)_setUsesSimpleTextEffects:(bool)arg1;
- (void)_setVisualStyle:(id)arg1;
- (void)_setWantsUnderlineForAccessibilityButtonShapesEnabled:(bool)arg1;
- (void)_setWordRoundingEnabled:(bool)arg1;
- (id)_shadow;
- (bool)_shouldCeilSizeToViewScale;
- (bool)_shouldDrawUnderlinesLikeWebKit;
- (bool)_shouldShowAccessibilityButtonShapesUnderline;
- (id)_siblingMarqueeLabels;
- (void)_startMarquee;
- (void)_startMarqueeIfNecessary;
- (void)_stopMarqueeWithRedisplay:(bool)arg1;
- (id)_stringDrawingContext;
- (long long)_stringDrawingOptions;
- (id)_synthesizedAttributedText;
- (id)_synthesizedTextAttributes;
- (bool)_textAlignmentFollowsWritingDirection;
- (bool)_textAlignmentMirrored;
- (bool)_textColorFollowsTintColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2 includingShadow:(bool)arg3;
- (bool)_updateScaledMetricsForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (void)_updateVariableLengthStringIfNeeded;
- (bool)_useShortcutIntrinsicContentSize;
- (bool)_usesSimpleTextEffects;
- (id)_visualStyle;
- (bool)_wantsDeepDrawing;
- (bool)_wantsUnderlineForAccessibilityButtonShapesEnabled;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (id)ab_text;
- (id)ab_textAttributes;
- (bool)adjustsFontForContentSizeCategory;
- (bool)adjustsFontSizeToFitWidth;
- (bool)adjustsLetterSpacingToFitWidth;
- (bool)allowsDefaultTighteningForTruncation;
- (id)attributedText;
- (bool)autotrackTextToFit;
- (long long)baselineAdjustment;
- (bool)centersHorizontally;
- (id)color;
- (id)currentTextColor;
- (void)dealloc;
- (id)debugHierarchyPropertyDescriptions;
- (unsigned long long)defaultAccessibilityTraits;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsLetterpress;
- (bool)drawsUnderline;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAccessibilityElementByDefault;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layerWillDraw:(id)arg1;
- (id)letterpressStyle;
- (long long)lineBreakMode;
- (long long)lineSpacing;
- (bool)marqueeEnabled;
- (bool)marqueeRunning;
- (double)minimumFontSize;
- (double)minimumScaleFactor;
- (long long)numberOfLines;
- (double)preferredMaxLayoutWidth;
- (struct CGSize { double x1; double x2; })rawSize;
- (void)setAb_text:(id)arg1;
- (void)setAb_textAttributes:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAdjustsLetterSpacingToFitWidth:(bool)arg1;
- (void)setAllowsDefaultTighteningForTruncation:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAutotrackTextToFit:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineAdjustment:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCentersHorizontally:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setDrawsLetterpress:(bool)arg1;
- (void)setDrawsUnderline:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setLetterpressStyle:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setLineSpacing:(long long)arg1;
- (void)setMarqueeEnabled:(bool)arg1;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setNeedsDisplay;
- (void)setNumberOfLines:(long long)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setRawSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)set_useShortcutIntrinsicContentSize:(bool)arg1;
- (double)shadowBlur;
- (id)shadowColor;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsAsynchronousMeasurement;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(long long)arg2;
- (struct CGSize { double x1; double x2; })textSize;
- (struct CGSize { double x1; double x2; })textSizeForWidth:(double)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;

@end
