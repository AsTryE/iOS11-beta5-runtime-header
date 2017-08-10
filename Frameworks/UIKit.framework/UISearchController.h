/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchController : UIViewController <DebugHierarchyObject, NSCoding, UIViewControllerAnimatedTransitioning, UIViewControllerPresenting, UIViewControllerTransitioningDelegate, _UIScrollViewScrollObserver_Internal> {
    long long  __previousSearchBarPosition;
    double  __resultsContentScrollViewPresentationOffset;
    bool  __showResultsForEmptySearch;
    <UIViewControllerAnimatedTransitioning> * _animator;
    UITapGestureRecognizer * _backButtonDismissGestureRecognizer;
    int  _barPresentationStyle;
    struct { 
        unsigned int searchBarWasTableHeaderView : 1; 
        unsigned int searchBarWasFirstResponder : 1; 
    }  _controllerFlags;
    <UISearchControllerDelegate> * _delegate;
    _UISearchControllerDidScrollDelegate * _didScrollDelegate;
    UITapGestureRecognizer * _doneButtonGestureRecognizer;
    bool  _hidesNavigationBarDuringPresentation;
    _UINavigationControllerManagedSearchPalette * _managedPalette;
    bool  _obscuresBackgroundDuringPresentation;
    UIView * _resultsControllerViewContainer;
    UISearchBar * _searchBar;
    UIViewController * _searchResultsController;
    <UISearchResultsUpdating> * _searchResultsUpdater;
    bool  _shouldFocusResults;
    UISystemInputViewController * _systemInputViewController;
    id  _windowWillAnimateToken;
}

@property (nonatomic, readonly) int _barPresentationStyle;
@property (nonatomic, readonly, retain) _UINavigationControllerManagedSearchPalette *_managedPalette;
@property (nonatomic) long long _previousSearchBarPosition;
@property (nonatomic) double _resultsContentScrollViewPresentationOffset;
@property (nonatomic, retain) UIView *_resultsControllerViewContainer;
@property (nonatomic, readonly) bool _searchbarWasTableHeaderView;
@property (setter=_setShowResultsForEmptySearch:, nonatomic) bool _showResultsForEmptySearch;
@property (nonatomic, readonly) UISystemInputViewController *_systemInputViewController;
@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISearchControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dimsBackgroundDuringPresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesNavigationBarDuringPresentation;
@property (nonatomic) bool obscuresBackgroundDuringPresentation;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, readonly) UIViewController *searchResultsController;
@property (nonatomic) <UISearchResultsUpdating> *searchResultsUpdater;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_resignSearchBarAsFirstResponder:(id)arg1;

- (void).cxx_destruct;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1;
- (void)_adjustSearchBarSizeForOrientation:(long long)arg1 oldPaletteFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)_allowFormSheetStylePresentation;
- (id)_animatorForBarPresentationStyle:(int)arg1 dismissing:(bool)arg2;
- (int)_barPresentationStyle;
- (void)_beginWatchingPresentingController;
- (void)_commonInit;
- (void)_connectSearchBar:(id)arg1;
- (bool)_containedInNavigationPaletteAndNotHidden;
- (id)_createAnimationCoordinator;
- (void)_createSystemInputViewControllerIfNeededForTraitEnvironment:(id)arg1;
- (id)_defaultAnimationController;
- (void)_didDismissSearchController;
- (void)_didPresentFromViewController:(id)arg1;
- (bool)_disableAutomaticKeyboardUI;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_dismissPresentation:(bool)arg1;
- (void)_endWatchingPresentingController;
- (void)_installBackGestureRecognizer;
- (void)_installDoneGestureRecognizer;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_locatePresentingViewController;
- (id)_managedPalette;
- (void)_navigationControllerWillShowViewController:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_performAutomaticPresentation;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_presentingViewControllerDidChange:(id)arg1;
- (void)_presentingViewControllerWillChange:(id)arg1;
- (long long)_previousSearchBarPosition;
- (bool)_requiresCustomPresentationController;
- (void)_resizeResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (double)_resultsContentScrollViewPresentationOffset;
- (id)_resultsControllerViewContainer;
- (bool)_resultsControllerWillLayoutVisibleUnderContainerView;
- (void)_searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)_searchBarCancelButtonClicked:(id)arg1;
- (void)_searchBarSearchButtonClicked:(id)arg1;
- (bool)_searchBarShouldFinalizeBecomingFirstResponder;
- (void)_searchBarSuperviewChanged;
- (void)_searchBarTextDidBeginEditing:(id)arg1;
- (id)_searchPresentationController;
- (bool)_searchbarWasTableHeaderView;
- (void)_setShowResultsForEmptySearch:(bool)arg1;
- (bool)_showResultsForEmptySearch;
- (void)_sizeSearchViewToPresentingViewController:(id)arg1;
- (void)_startManagingPalette:(id)arg1;
- (void)_stopManagingPalette;
- (id)_systemInputViewController;
- (void)_uninstallBackGestureRecognizer;
- (void)_uninstallDoneGestureRecognizer;
- (void)_updateBarPresentationStyleForPresentingViewController:(id)arg1;
- (void)_updateFocusFromDoneButton:(id)arg1;
- (void)_updateSearchBarMaskIfNecessary;
- (void)_updateSearchResultsContentScrollViewWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsControllerWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSearchResultsPositionWithDelta:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateSystemInputViewController;
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;
- (void)_updateVisibilityOfSearchResultsForSearchBar:(id)arg1;
- (void)_watchScrollView:(id)arg1 forScrolling:(bool)arg2;
- (void)_willDismissSearchController;
- (void)_willPresentFromViewController:(id)arg1;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)dimsBackgroundDuringPresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesNavigationBarDuringPresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchResultsController:(id)arg1;
- (bool)isActive;
- (void)loadView;
- (bool)obscuresBackgroundDuringPresentation;
- (id)preferredFocusEnvironments;
- (id)searchBar;
- (id)searchResultsController;
- (id)searchResultsUpdater;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsBackgroundDuringPresentation:(bool)arg1;
- (void)setHidesNavigationBarDuringPresentation:(bool)arg1;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)setObscuresBackgroundDuringPresentation:(bool)arg1;
- (void)setSearchResultsUpdater:(id)arg1;
- (void)set_previousSearchBarPosition:(long long)arg1;
- (void)set_resultsContentScrollViewPresentationOffset:(double)arg1;
- (void)set_resultsControllerViewContainer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (id)debugHierarchyPropertyDescriptions;

@end
