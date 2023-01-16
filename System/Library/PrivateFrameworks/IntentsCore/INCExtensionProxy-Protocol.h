//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class INIntent, NSArray, NSString;
@protocol INIntentResponseObserver;

@protocol INCExtensionProxy
- (void)resolveIntentSlotKeyPaths:(NSArray *)arg1 completionHandler:(void (^)(_Bool, INIntent *, NSDictionary *))arg2;
- (void)resolveIntentSlotKeyPath:(NSString *)arg1 completionHandler:(void (^)(NSData *))arg2;
- (void)handleIntentWithCompletionHandler:(void (^)(INIntentResponse *, INCExtensionError *))arg1;
- (void)confirmIntentWithCompletionHandler:(void (^)(INIntentResponse *, INCExtensionError *))arg1;

@optional
- (void)getOptionsForParameterNamed:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getDefaultValueForParameterNamed:(NSString *)arg1 completionHandler:(void (^)(id, NSError *))arg2;
- (void)getOptionsForParameterNamed:(NSString *)arg1 searchTerm:(NSString *)arg2 completionHandler:(void (^)(INObjectCollection *, NSError *))arg3;
- (void)stopSendingUpdates;
- (void)startSendingUpdatesToObserver:(id <INIntentResponseObserver>)arg1;
- (void)prewarmAppWithIntent:(INIntent *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
@end

