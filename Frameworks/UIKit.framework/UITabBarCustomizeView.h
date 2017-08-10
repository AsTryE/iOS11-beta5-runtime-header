/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarCustomizeView : UIView {
    NSArray * _availableItems;
    UISnapshotView * _dragImage;
    UITabBarItem * _draggingItem;
    UITabBarItemProxy * _draggingProxy;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _firstItemRect;
    NSMutableArray * _fixedItems;
    double  _gridOffset;
    bool  _isBeingDismissed;
    long long  _itemsInRowCount;
    NSMutableArray * _proxies;
    UITabBarItem * _replaceItem;
    UIImageView * _replacementGlow;
    UITabBarItem * _selectedBeforeItem;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    UITabBar * _tabBar;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *availableItems;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (long long)_barMetrics;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void).cxx_destruct;
- (void)adjustDragImageWithTouches:(id)arg1 withEvent:(id)arg2;
- (id)availableItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemInTabBarWithTouches:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setAvailableItems:(id)arg1;
- (void)setIsBeingDismissed;
- (void)setTabBar:(id)arg1 currentItems:(id)arg2 availableItems:(id)arg3;
- (void)tabBarTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tabBarTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)tintTabBarItemsForEdit:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateProxiesSelection;

@end
