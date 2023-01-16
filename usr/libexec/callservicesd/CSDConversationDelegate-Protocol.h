//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDConversation, CSDConversationParticipant, CXCallFailureContext, NSSet, NSString, TUConversationActivityEvent, TUConversationActivitySession, TUConversationParticipant;

@protocol CSDConversationDelegate <NSObject>
@property(readonly, nonatomic) _Bool allActiveConversationParticipantsSupportSharePlay;
- (void)conversationDidTriggerJoin:(CSDConversation *)arg1;
- (void)displaySharePlayUnableToStartAlert;
- (void)conversation:(CSDConversation *)arg1 activitySessionRemoved:(TUConversationActivitySession *)arg2 userOriginated:(_Bool)arg3;
- (void)conversation:(CSDConversation *)arg1 addedMembers:(NSSet *)arg2 triggeredLocally:(_Bool)arg3;
- (void)conversation:(CSDConversation *)arg1 changedBytesOfDataUsed:(long long)arg2;
- (void)conversation:(CSDConversation *)arg1 activityChangedOnSession:(TUConversationActivitySession *)arg2;
- (void)conversation:(CSDConversation *)arg1 appLaunchState:(unsigned long long)arg2 forActivitySession:(TUConversationActivitySession *)arg3;
- (void)conversation:(CSDConversation *)arg1 didChangeSceneAssociationForActivitySession:(TUConversationActivitySession *)arg2;
- (void)conversation:(CSDConversation *)arg1 didChangeStateForActivitySession:(TUConversationActivitySession *)arg2;
- (void)conversation:(CSDConversation *)arg1 activitySessionChanged:(TUConversationActivitySession *)arg2;
- (void)conversation:(CSDConversation *)arg1 remoteParticipantWithIdentifier:(unsigned long long)arg2 updatedVideoEnabled:(_Bool)arg3;
- (void)conversation:(CSDConversation *)arg1 remoteParticipantWithIdentifier:(unsigned long long)arg2 updatedAudioEnabled:(_Bool)arg3;
- (void)conversation:(CSDConversation *)arg1 receivedActivitySessionEvent:(TUConversationActivityEvent *)arg2;
- (void)conversation:(CSDConversation *)arg1 sendDeclineMessageToParticipantDestination:(NSString *)arg2;
- (void)conversation:(CSDConversation *)arg1 requestAVCBlobForParticipantDestination:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (void)conversation:(CSDConversation *)arg1 mediaPrioritiesChangedForParticipant:(CSDConversationParticipant *)arg2;
- (void)conversation:(CSDConversation *)arg1 updatedActiveParticipantWithScreenSharing:(CSDConversationParticipant *)arg2;
- (void)conversation:(CSDConversation *)arg1 updatedActiveParticipant:(CSDConversationParticipant *)arg2;
- (void)conversation:(CSDConversation *)arg1 removedActiveParticipant:(CSDConversationParticipant *)arg2;
- (void)conversation:(CSDConversation *)arg1 addedActiveParticipant:(CSDConversationParticipant *)arg2;
- (void)conversation:(CSDConversation *)arg1 failedWithContext:(CXCallFailureContext *)arg2;
- (void)conversation:(CSDConversation *)arg1 didChangeLocalParticipant:(TUConversationParticipant *)arg2;
- (void)conversationInvalidated:(CSDConversation *)arg1;
- (void)conversationConnectionDidStart:(CSDConversation *)arg1;
- (void)conversationChanged:(CSDConversation *)arg1;
@end

