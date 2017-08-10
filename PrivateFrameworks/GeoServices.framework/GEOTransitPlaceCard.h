/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitPlaceCard : PBCodable <NSCopying> {
    struct { 
        unsigned int transitCategory : 1; 
    }  _has;
    NSString * _incidentType;
    int  _transitCategory;
    GEOTransitDepartureSequenceUsage * _transitDepartureSequenceUsage;
    NSString * _transitSystemName;
}

@property (nonatomic, readonly) bool hasIncidentType;
@property (nonatomic) bool hasTransitCategory;
@property (nonatomic, readonly) bool hasTransitDepartureSequenceUsage;
@property (nonatomic, readonly) bool hasTransitSystemName;
@property (nonatomic, retain) NSString *incidentType;
@property (nonatomic) int transitCategory;
@property (nonatomic, retain) GEOTransitDepartureSequenceUsage *transitDepartureSequenceUsage;
@property (nonatomic, retain) NSString *transitSystemName;

- (void).cxx_destruct;
- (int)StringAsTransitCategory:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncidentType;
- (bool)hasTransitCategory;
- (bool)hasTransitDepartureSequenceUsage;
- (bool)hasTransitSystemName;
- (unsigned long long)hash;
- (id)incidentType;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTransitCategory:(bool)arg1;
- (void)setIncidentType:(id)arg1;
- (void)setTransitCategory:(int)arg1;
- (void)setTransitDepartureSequenceUsage:(id)arg1;
- (void)setTransitSystemName:(id)arg1;
- (int)transitCategory;
- (id)transitCategoryAsString:(int)arg1;
- (id)transitDepartureSequenceUsage;
- (id)transitSystemName;
- (void)writeTo:(id)arg1;

@end
