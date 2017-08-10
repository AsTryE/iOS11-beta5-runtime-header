/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCache : NSObject {
    NSMutableDictionary * _cacheDictionary;
}

@property (nonatomic, readonly) NSDictionary *_cacheDictionary;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_cacheDictionary;
- (id)_init;
- (void)addCacheableObject:(id)arg1;
- (id)cacheableObjectForIdentifier:(id)arg1;
- (id)consumeCacheableObjectForIdentifier:(id)arg1;
- (id)init;
- (void)removeAllCacheableObjects;
- (void)removeCacheableObject:(id)arg1;

@end
