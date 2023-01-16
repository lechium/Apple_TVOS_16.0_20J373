//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSString;
@protocol SKAClientConnectionRepresentable;

@protocol SKAStatusSubscriptionManaging <NSObject>
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(void (^)(NSArray *))arg1;
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(void (^)(NSError *))arg1;
- (void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(id <SKAClientConnectionRepresentable>)arg1 completion:(void (^)(NSError *))arg2;
- (void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 client:(id <SKAClientConnectionRepresentable>)arg2 completion:(void (^)(NSError *))arg3;
- (void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 client:(id <SKAClientConnectionRepresentable>)arg2 completion:(void (^)(NSError *))arg3;
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 statusTypeIdentifier:(NSString *)arg2 applicationIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 statusTypeIdentifier:(NSString *)arg2 applicationIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id <SKAClientConnectionRepresentable>)arg1 completion:(void (^)(NSError *))arg2;
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 statusTypeIdentifier:(NSString *)arg2 client:(id <SKAClientConnectionRepresentable>)arg3 completion:(void (^)(NSError *))arg4;
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(NSString *)arg1 statusTypeIdentifier:(NSString *)arg2 client:(id <SKAClientConnectionRepresentable>)arg3 completion:(void (^)(NSError *))arg4;
@end

