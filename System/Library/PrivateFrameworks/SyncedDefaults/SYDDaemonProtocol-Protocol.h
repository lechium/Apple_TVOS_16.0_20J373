//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString, SYDStoreConfiguration;

@protocol SYDDaemonProtocol
- (void)allStoreIdentifiersWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)setCloudSyncUserDefaultEnabled:(_Bool)arg1 storeIdentifier:(NSString *)arg2;
- (void)isCloudSyncUserDefaultEnabledForStoreIdentifier:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)processAccountChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)synchronizeStoresWithIdentifiers:(NSArray *)arg1 type:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)synchronizeStoreWithConfiguration:(SYDStoreConfiguration *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveChangeToken:(NSData *)arg1 forStoreWithConfiguration:(SYDStoreConfiguration *)arg2 reply:(void (^)(NSError *))arg3;
- (void)changeTokenForStoreWithConfiguration:(SYDStoreConfiguration *)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)changeDictionarySinceChangeToken:(NSData *)arg1 inStoreWithConfiguration:(SYDStoreConfiguration *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)registerForChangeNotificationsForStoreWithConfiguration:(SYDStoreConfiguration *)arg1 reply:(void (^)(NSError *))arg2;
- (void)dictionaryRepresentationForStoreWithConfiguration:(SYDStoreConfiguration *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)removeObjectForKey:(NSString *)arg1 inStoreWithConfiguration:(SYDStoreConfiguration *)arg2 reply:(void (^)(NSError *))arg3;
- (void)objectForKey:(NSString *)arg1 inStoreWithConfiguration:(SYDStoreConfiguration *)arg2 reply:(void (^)(id, NSError *))arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 inStoreWithConfiguration:(SYDStoreConfiguration *)arg3 reply:(void (^)(NSError *))arg4;
@end

