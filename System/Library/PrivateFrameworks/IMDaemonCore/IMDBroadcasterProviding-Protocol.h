//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDService;
@protocol IMDaemonListenerAVProtocol, IMDaemonListenerAccountsProtocol, IMDaemonListenerAnyProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerChatDatabaseProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerNotificationsProtocol, IMDaemonListenerServiceProtocol;

@protocol IMDBroadcasterProviding <NSObject>
@property(nonatomic, readonly) id <IMDaemonListenerAVProtocol> broadcasterForACConferenceListeners;
@property(nonatomic, readonly) id <IMDaemonListenerAVProtocol> broadcasterForAVConferenceListeners;
- (id <IMDaemonListenerAVProtocol>)broadcasterForVCConferenceListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerAVProtocol>)broadcasterForACConferenceListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerAVProtocol>)broadcasterForAVConferenceListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerNotificationsProtocol>)broadcasterForNotificationListenersSupportingService:(IMDService *)arg1;
@property(nonatomic, readonly) id <IMDaemonListenerFileProviderProtocol> broadcasterForFileProviderListeners;
@property(nonatomic, readonly) id <IMDaemonListenerChatCountsProtocol> broadcasterForChatCountsListeners;
@property(nonatomic, readonly) id <IMDaemonListenerChatDatabaseProtocol> broadcasterForChatDatabaseListeners;
- (id <IMDaemonListenerChatProtocol>)broadcasterForChatListenersUsingBlackholeRegistry:(_Bool)arg1;
- (id <IMDaemonListenerChatProtocol>)broadcasterForBlackholeChatListenersSupportingService:(IMDService *)arg1;
@property(nonatomic, readonly) id <IMDaemonListenerChatProtocol> broadcasterForBlackholeChatListeners;
- (id <IMDaemonListenerChatProtocol>)broadcasterForSentMessageListenersSupportingService:(IMDService *)arg1;
- (id <IMDaemonListenerChatProtocol>)broadcasterForChatListenersSupportingService:(IMDService *)arg1;
@property(nonatomic, readonly) id <IMDaemonListenerChatProtocol> broadcasterForChatListeners;
- (id <IMDaemonListenerServiceProtocol>)broadcasterForListenersSupportingService:(IMDService *)arg1;
@property(nonatomic, readonly) id <IMDaemonListenerAccountsProtocol> broadcasterForAccountListeners;
@property(nonatomic, readonly) id <IMDaemonListenerAnyProtocol> broadcasterForAllListeners;
@end

