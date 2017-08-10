/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalActionFilter : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _componentTypes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*componentTypes;
@property (nonatomic, readonly) unsigned long long componentTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsComponentTypes:(id)arg1;
- (void)addComponentType:(int)arg1;
- (void)clearComponentTypes;
- (int)componentTypeAtIndex:(unsigned long long)arg1;
- (int*)componentTypes;
- (id)componentTypesAsString:(int)arg1;
- (unsigned long long)componentTypesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComponentTypes:(int*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
