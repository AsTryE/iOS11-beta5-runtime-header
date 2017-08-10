/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _MNTrackedAlternateRoute : NSObject {
    MNActiveRouteInfo * _alternateRoute;
    struct { 
        unsigned int index; 
        float offset; 
    }  _divergenceCoordinate;
    MNActiveRouteInfo * _mainRoute;
}

@property (nonatomic, retain) MNActiveRouteInfo *alternateRoute;
@property (nonatomic) struct { unsigned int x1; float x2; } divergenceCoordinate;
@property (nonatomic, retain) MNActiveRouteInfo *mainRoute;

- (void).cxx_destruct;
- (id)alternateRoute;
- (struct { unsigned int x1; float x2; })divergenceCoordinate;
- (id)mainRoute;
- (void)setAlternateRoute:(id)arg1;
- (void)setDivergenceCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (void)setMainRoute:(id)arg1;

@end
