/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObserver : NSObject

+ (id)observerWithCompletionHandler:(id /* block */)arg1;
+ (id)observerWithResultBlock:(id /* block */)arg1;
+ (id)observerWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
+ (id)observerWithWeakTarget:(id)arg1 resultSelector:(SEL)arg2;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3;
+ (void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 untilCanceled:(id)arg4;
+ (void)sendObserver:(id)arg1 resultsOfBlock:(id /* block */)arg2;
+ (void)sendResult:(id)arg1 error:(id)arg2 toObserver:(id)arg3;

@end
