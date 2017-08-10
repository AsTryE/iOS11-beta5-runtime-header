/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchUserQuotaOperationResult : CKOperationResult <NSSecureCoding> {
    unsigned long long  _quotaAvailable;
}

@property (nonatomic) unsigned long long quotaAvailable;

+ (bool)supportsSecureCoding;

- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)quotaAvailable;
- (void)setQuotaAvailable:(unsigned long long)arg1;

@end
