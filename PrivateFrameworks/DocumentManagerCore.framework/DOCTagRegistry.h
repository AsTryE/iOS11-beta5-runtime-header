/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCTagRegistry : NSObject <DOCTagRegistryDelegate> {
    NSMutableOrderedSet * _discoveredTags;
    DOCTagRegistryICloudDataSource * _iCloudDataSource;
    bool  _inBatchUpdate;
    bool  _shouldSynchronizeAfterBatchUpdate;
    long long  _tagSerialNumber;
    NSMutableOrderedSet * _userTags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableOrderedSet *discoveredTags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) DOCTagRegistryICloudDataSource *iCloudDataSource;
@property (nonatomic) bool inBatchUpdate;
@property (nonatomic) bool shouldSynchronizeAfterBatchUpdate;
@property (readonly) Class superclass;
@property (nonatomic) long long tagSerialNumber;
@property (nonatomic, retain) NSMutableOrderedSet *userTags;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_canAddTag:(id)arg1;
- (id)_memberTag:(id)arg1;
- (id)_sanitizedTagName:(id)arg1;
- (id)_setForTagType:(long long)arg1;
- (id)_tagNameForComparing:(id)arg1;
- (bool)addTag:(id)arg1;
- (void)addTag:(id)arg1 options:(long long)arg2;
- (void)addTags:(id)arg1 options:(long long)arg2;
- (bool)canReplaceTag:(id)arg1 withTag:(id)arg2;
- (id)discoveredTags;
- (id)iCloudDataSource;
- (bool)inBatchUpdate;
- (id)init;
- (bool)insertTag:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isValidNewTagName:(id)arg1;
- (bool)moveTag:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllTagsOfType:(long long)arg1;
- (void)removeTags:(id)arg1;
- (bool)replaceTag:(id)arg1 withTag:(id)arg2;
- (void)setDiscoveredTags:(id)arg1;
- (void)setICloudDataSource:(id)arg1;
- (void)setInBatchUpdate:(bool)arg1;
- (void)setShouldSynchronizeAfterBatchUpdate:(bool)arg1;
- (void)setTagSerialNumber:(long long)arg1;
- (void)setUserTags:(id)arg1;
- (bool)shouldSynchronizeAfterBatchUpdate;
- (void)synchronize;
- (id)tagForName:(id)arg1;
- (long long)tagSerialNumber;
- (id)userTags;

@end
