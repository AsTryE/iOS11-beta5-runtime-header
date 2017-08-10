/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordID : NSObject <CKSQLiteItem, CKXPCSuitableString, NSCopying, NSSecureCoding> {
    NSString * _recordName;
    CKRecordZoneID * _zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *recordName;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKRecordZoneID *zoneID;

+ (bool)isValidRecordName:(id)arg1 outError:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)CKPropertiesDescriptionWithProperties:(id)arg1;
- (id)CKXPCSuitableString;
- (id)ckShortDescription;
- (long long)compareToRecordID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recordName;
- (void)setRecordName:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)sqliteRepresentation;
- (id)zoneID;

@end
