/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying> {
    NSArray * _results;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, copy) NSArray *results;
@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 triggerEvent:(unsigned long long)arg2;
- (id)results;
- (void)setResults:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
