//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDestination.h>

@interface IDSDestination (CSD)
+ (id)destinationWithTUConversationParticipant:(id)arg1;	// IMP=0x0010000000008192
+ (id)destinationWithTUConversationMember:(id)arg1;	// IMP=0x00100000000080f9
- (id)deviceForService:(id)arg1;	// IMP=0x0020000000273560
- (_Bool)canReceiveMessagesForCallProvider:(id)arg1;	// IMP=0x0010000000273440
@property(nonatomic, readonly) _Bool canReceiveRelayedCalls;
@end

