//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMap;

@interface IDSInvitationStore : NSObject
{
    IDSPersistentMap *_persistentMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001451c0
@property(retain, nonatomic) IDSPersistentMap *persistentMap; // @synthesize persistentMap=_persistentMap;
- (void)removeReceivedInvitation:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000144fd0
- (void)persistReceivedInvitation:(id)arg1 forService:(id)arg2 withUniqueID:(id)arg3;	// IMP=0x0010000000144df0
- (id)persistedReceivedInvitationsForService:(id)arg1;	// IMP=0x0010000000144d20
- (void)removePendingInvitation:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000144b80
- (void)persistPendingInvitation:(id)arg1 forService:(id)arg2 withUniqueID:(id)arg3;	// IMP=0x00100000001449a0
- (id)persistedPendingInvitationsForService:(id)arg1;	// IMP=0x00100000001448d0
- (_Bool)isEmpty;	// IMP=0x0010000000144840
- (id)init;	// IMP=0x00100000001446f0

@end
