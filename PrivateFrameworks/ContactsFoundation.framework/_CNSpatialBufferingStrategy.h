/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNSpatialBufferingStrategy : NSObject <_CNBufferingStrategy> {
    unsigned long long  _capacity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3;
- (void)bufferDidSendResults:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
