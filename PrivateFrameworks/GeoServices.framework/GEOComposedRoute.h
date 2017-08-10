/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions> {
    GEOMapRegion * _boundingMapRegion;
    NSArray * _composedGuidanceEvents;
    unsigned long long  _currentDisplayStep;
    NSArray * _currentSectionOptions;
    GEOTransitDecoderData * _decoderData;
    GEOComposedWaypoint * _destination;
    unsigned int  _distance;
    NSArray * _enrouteNotices;
    unsigned int  _expectedTime;
    unsigned int  _firstVisiblePoint;
    GEORoute * _geoRoute;
    bool  _isWalkingOnlyTransitRoute;
    <GEOServerFormattedString> * _launchAndGoCardTitle;
    <GEOServerFormattedString> * _launchAndGoRouteDescription;
    <GEOServerFormattedString> * _launchAndGoRouteTitle;
    NSArray * _legs;
    NSString * _longTrafficDescription;
    bool  _maneuverDisplayEnabled;
    NSArray * _maneuverDisplaySteps;
    NSString * _name;
    NSHashTable * _observers;
    GEOComposedWaypoint * _origin;
    GEOTransitSuggestedRoute * _originalSuggestedRoute;
    <GEOServerFormattedString> * _pickingDurationFormatString;
    <GEOServerFormattedString> * _planningDescriptionFormatString;
    NSData * _pointData;
    double * _pointLengths;
    <GEOServerFormattedString> * _previewDurationFormatString;
    NSArray * _rideSelections;
    NSData * _routeID;
    GEORouteInitializerData * _routeInitializerData;
    NSArray * _routePlanningArtworks;
    GEORouteSet * _routeSet;
    NSMutableArray * _sections;
    unsigned long long  _selectedLegIndex;
    bool  _shouldShowSchedule;
    NSMutableArray * _snappedPaths;
    NSDate * _startDate;
    NSArray * _steps;
    GEOTransitSuggestedRoute * _suggestedRoute;
    NSString * _trafficDescription;
    NSArray * _trafficIncidentOffsets;
    NSArray * _trafficIncidents;
    NSArray * _transitAdvisories;
    <GEOServerFormattedString> * _transitDescriptionFormatString;
    <GEOServerFormattedString> * _transitRouteBadge;
    <GEOTransitRoutingIncidentMessage> * _transitRoutingIncidentMessage;
    bool  _usesZilch;
    GEOZilchDecoder * _zilchDecoder;
}

@property (nonatomic, readonly) NSArray *advisoryNotices;
@property (nonatomic, readonly) bool allowsNetworkTileLoad;
@property (nonatomic, readonly) NSArray *baseTransitFares;
@property (nonatomic, readonly) GEOMapRegion *boundingMapRegion;
@property (nonatomic, readonly) NSArray *composedGuidanceEvents;
@property (nonatomic, readonly) void*controlPoints;
@property (nonatomic) unsigned long long currentDisplayStep;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEOTransitDecoderData *decoderData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) NSData *directionsResponseID;
@property (nonatomic, readonly) unsigned int distance;
@property (nonatomic, readonly) NSArray *enrouteNotices;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) unsigned int firstVisiblePoint;
@property (nonatomic, readonly) GEORoute *geoRoute;
@property (nonatomic, readonly) bool hasExpectedTime;
@property (nonatomic, readonly) bool hasHistoricTravelTime;
@property (nonatomic, readonly) bool hasRideClusters;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) unsigned long long indexOfSuggestedRoute;
@property (nonatomic, readonly) bool isNavigable;
@property (nonatomic, readonly) bool isWalkingOnlyTransitRoute;
@property (nonatomic, readonly) <GEOServerFormattedString> *launchAndGoCardTitle;
@property (nonatomic, readonly) <GEOServerFormattedString> *launchAndGoRouteDescription;
@property (nonatomic, readonly) <GEOServerFormattedString> *launchAndGoRouteTitle;
@property (nonatomic, readonly) NSArray *legs;
@property (nonatomic, readonly) NSString *longTrafficDescription;
@property (nonatomic) bool maneuverDisplayEnabled;
@property (nonatomic, retain) NSArray *maneuverDisplaySteps;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfTransitStops;
@property (nonatomic, readonly) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) GEOTransitSuggestedRoute *originalSuggestedRoute;
@property (nonatomic, readonly) <GEOServerFormattedString> *pickingDurationFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *planningDescriptionFormatString;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) double*pointLengths;
@property (nonatomic, readonly) <GEOServerFormattedString> *previewDurationFormatString;
@property (nonatomic, readonly) NSArray *rideSelections;
@property (nonatomic, readonly) GEORouteAttributes *routeAttributes;
@property (nonatomic, readonly) NSArray *routeDescriptions;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, readonly) GEORouteInitializerData *routeInitializerData;
@property (nonatomic, readonly, copy) NSArray *routePlanningArtworks;
@property (nonatomic) GEORouteSet *routeSet;
@property (nonatomic, readonly) int routeType;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic) unsigned long long selectedLegIndex;
@property (nonatomic) bool shouldShowSchedule;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (nonatomic, readonly) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) GEOTransitSuggestedRoute *suggestedRoute;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic, readonly) NSString *trafficDescription;
@property (nonatomic, retain) NSArray *trafficIncidentOffsets;
@property (nonatomic, retain) NSArray *trafficIncidents;
@property (nonatomic, readonly) NSArray *transitAdvisories;
@property (nonatomic, readonly) <GEOServerFormattedString> *transitDescriptionFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *transitRouteBadge;
@property (nonatomic, readonly) <GEOTransitRoutingIncidentMessage> *transitRoutingIncidentMessage;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, retain) NSMapTable *turnAnglesLookup;
@property (nonatomic, readonly) bool usesZilch;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 rectsCount:(unsigned long long)arg4;
- (void)_createTrafficIncidentsForRouteInitializerData:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })_findRouteCoordinateWithOffset:(float)arg1 aPos:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 aCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 bCoord:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4 pointOnSegment:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg5 bounds:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)_initializeManeuverDisplaySteps;
- (bool)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (id)_nextOptionForOption:(id)arg1 rideIndex:(unsigned long long)arg2;
- (void)_populateArtworkForSuggestedRoute:(id)arg1 decoderData:(id)arg2;
- (void)_rebuildRouteForRideChange;
- (void)_snapPaths:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_tripIndexForTripLeg:(id)arg1;
- (void)_updateSectionOptions;
- (void)addObserver:(id)arg1;
- (id)advisoryNotices;
- (bool)allowsNetworkTileLoad;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (id)baseTransitFares;
- (id)boardStepForSection:(id)arg1;
- (id)boundingMapRegion;
- (bool)checkDrivingArrivalForCoordinate:(struct { double x1; double x2; })arg1 coordinateOnRoute:(struct { double x1; double x2; })arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(bool)arg6 checkDistanceAlongRoute:(bool)arg7 checkRoadAccessPoints:(bool)arg8 isOnRoute:(bool)arg9;
- (void)clearPoints;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })closestPointOnRoute:(struct { double x1; double x2; })arg1;
- (id)composedGuidanceEvents;
- (void*)controlPoints;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (struct PolylineCoordinate { unsigned int x1; float x2; })coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (unsigned long long)currentDisplayStep;
- (void)dealloc;
- (id)decoderData;
- (id)description;
- (id)destination;
- (id)directionsResponseID;
- (unsigned int)distance;
- (double)distanceBetweenLocation:(struct { double x1; double x2; })arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2;
- (id)enrouteNoticeWithIdentifier:(id)arg1;
- (id)enrouteNotices;
- (unsigned int)expectedTime;
- (unsigned int)firstVisiblePoint;
- (void)forEachSnappedPath:(id /* block */)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (id)geoRoute;
- (void)getFormOfWay:(int*)arg1 roadClass:(int*)arg2 at:(unsigned int)arg3;
- (id)getHallForStop:(id)arg1;
- (id)getSnappedPathsForLocation:(struct { double x1; double x2; })arg1 radius:(double)arg2 observer:(id)arg3;
- (id)getSnappedPathsForVisibleRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 rectsToSnap:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4;
- (id)getStationForHall:(id)arg1;
- (id)getStationForStop:(id)arg1;
- (bool)hasExpectedTime;
- (bool)hasHistoricTravelTime;
- (bool)hasRideClusters;
- (unsigned int)historicTravelTime;
- (unsigned long long)indexOfSuggestedRoute;
- (void)initRideSelections;
- (id)initWithCompanionRoute:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)initWithRoute:(id)arg1 initializerData:(id)arg2;
- (id)initWithRoute:(id)arg1 origin:(id)arg2 destination:(id)arg3;
- (id)initWithSuggestedRoute:(id)arg1 decoderData:(id)arg2;
- (id)initWithSuggestedRoute:(id)arg1 decoderData:(id)arg2 origin:(id)arg3 destination:(id)arg4;
- (void)initializePointLengths;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGEOComposedRoute:(id)arg1;
- (bool)isNavigable;
- (bool)isSnapping;
- (bool)isStopInTerminalStructure:(id)arg1;
- (bool)isWalkingOnlyTransitRoute;
- (id)launchAndGoCardTitle;
- (id)launchAndGoRouteDescription;
- (id)launchAndGoRouteTitle;
- (id)legForPointIndex:(unsigned int)arg1;
- (id)legForStepIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForPointIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForStepIndex:(unsigned long long)arg1;
- (id)legs;
- (struct { double x1; double x2; })locationAtDistance:(double)arg1 from:(id)arg2;
- (id)longTrafficDescription;
- (bool)maneuverDisplayEnabled;
- (void)maneuverDisplayHasChanged;
- (id)maneuverDisplaySteps;
- (id)name;
- (void)notifyTrafficUpdated;
- (unsigned long long)numberOfTransitStops;
- (id)origin;
- (id)originalSuggestedRoute;
- (id)pickingDurationFormatString;
- (id)planningDescriptionFormatString;
- (struct { double x1; double x2; })pointAt:(unsigned long long)arg1;
- (struct { double x1; double x2; })pointAtRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (unsigned int)pointCount;
- (id)pointData;
- (double*)pointLengths;
- (id)previewDurationFormatString;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (void)removeObserver:(id)arg1;
- (id)rideSelections;
- (struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)roadFeatureAtPointIndex:(unsigned int)arg1;
- (void)roadFeaturesForRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 distanceAhead:(double)arg2 handler:(id /* block */)arg3;
- (id)routeAttributes;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeCoordinateAtDistance:(double)arg1 beforeRouteCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (id)routeDescriptions;
- (id)routeID;
- (id)routeInitializerData;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(bool)arg3 stopAtEndOfManeuver:(bool)arg4 date:(id)arg5;
- (id)routePlanningArtworks;
- (id)routeSet;
- (int)routeType;
- (id)sectionOptionForTripIndex:(unsigned long long)arg1;
- (id)sectionOptionForTripLeg:(id)arg1;
- (id)sections;
- (void)selectRide:(unsigned long long)arg1 forBoardStep:(id)arg2;
- (void)selectRide:(unsigned long long)arg1 forTripLeg:(id)arg2;
- (unsigned long long)selectedLegIndex;
- (void)setBoundingMapRegion:(id)arg1;
- (void)setComposedGuidanceEvents:(id)arg1;
- (void)setCurrentDisplayStep:(unsigned long long)arg1;
- (void)setEnrouteNotices:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setFirstVisiblePoint:(unsigned int)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIsWalkingOnlyTransitRoute:(bool)arg1;
- (void)setLegs:(id)arg1;
- (void)setManeuverDisplayEnabled:(bool)arg1;
- (void)setManeuverDisplaySteps:(id)arg1;
- (void)setPointData:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteSet:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedLegIndex:(unsigned long long)arg1;
- (void)setShouldShowSchedule:(bool)arg1;
- (void)setSteps:(id)arg1;
- (void)setSuggestedRoute:(id)arg1;
- (void)setTrafficIncidentOffsets:(id)arg1;
- (void)setTrafficIncidents:(id)arg1;
- (void)setUsesZilch:(bool)arg1;
- (bool)shouldShowSchedule;
- (id)startDate;
- (id)stepAtIndex:(unsigned long long)arg1;
- (double)stepDistanceFromPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1 toPoint:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2;
- (id)stepForPointIndex:(unsigned int)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (id)styleAttributes;
- (id)suggestedRoute;
- (bool)supportsSnapping;
- (unsigned int)trafficColorForDistanceRemaining:(double)arg1;
- (unsigned long long)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (id)trafficDescription;
- (id)trafficIncidentOffsets;
- (id)trafficIncidents;
- (id)transitAdvisories;
- (id)transitDescriptionFormatString;
- (id)transitRouteBadge;
- (id)transitRoutingIncidentMessage;
- (int)transportType;
- (int)transportTypeForStep:(id)arg1;
- (void)updateRouteWithOrigin:(id)arg1 destination:(id)arg2;
- (void)updateRouteWithRideSelections:(id)arg1;
- (bool)usesZilch;
- (id)zilchDataFromStepIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (void)_addPointsToArray:(id)arg1 forMapPoints:(struct { double x1; double x2; }*)arg2 pointCount:(unsigned long long)arg3 isPolylineA:(bool)arg4;
+ (void)_findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7 outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg8 outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg9 outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg10;
+ (bool)_pointsConverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7;
+ (bool)_pointsDiverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 tolerance:(double)arg5 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7;
+ (unsigned long long)_startIndexForPoints:(struct Matrix<double, 2, 1> { double x1[2]; })arg1 withPoints:(struct Matrix<double, 2, 1> { double x1[2]; }*)arg2 pointCount:(unsigned long long)arg3 toleranceSquared:(double)arg4;
+ (void)findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherCoordinates:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 distanceInMeters:(double)arg5 outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7 outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg8 outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg9;
+ (void)findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 divergenceTolerance:(double)arg5 convergenceTolerance:(double)arg6 outCoordinatesA:(out id*)arg7 outCoordinatesB:(out id*)arg8;
+ (void)findDivergenceAndConvergence:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 outDivergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outDivergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6 outConvergenceCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg7 outConvergenceCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg8;
+ (bool)pointsConverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;
+ (bool)pointsDiverge:(struct { double x1; double x2; }*)arg1 pointCount:(unsigned long long)arg2 otherPoints:(struct { double x1; double x2; }*)arg3 pointCount:(unsigned long long)arg4 outCoordinateA:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg5 outCoordinateB:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg6;

- (id)_mapPoints;
- (double)_remainingTimeFromRouteMatch:(id)arg1 etaRoute:(id)arg2 outRemainingDistance:(out double*)arg3 outDistanceToManeuverStart:(out double*)arg4 outDistanceToManeuverEnd:(out double*)arg5;
- (int)cameraFocusStyleForStep:(id)arg1;
- (id)divergenceAndConvergenceWithRoute:(id)arg1;
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 distanceInMeters:(double)arg2 outDivergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3 outConvergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg4;
- (void)findDivergenceAndConvergenceWithRoute:(id)arg1 outDivergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2 outConvergenceCoordinate:(out struct PolylineCoordinate { unsigned int x1; float x2; }*)arg3;
- (double)remainingTimeFromLocation:(id)arg1;
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2;
- (double)remainingTimeFromLocation:(id)arg1 etaRoute:(id)arg2 outRemainingDistance:(out double*)arg3 outDistanceToManeuverStart:(out double*)arg4 outDistanceToManeuverEnd:(out double*)arg5;
- (void)setTurnAnglesLookup:(id)arg1;
- (id)turnAnglesLookup;

@end
