//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMUserIdentity, NSSet;

__attribute__((visibility("hidden")))
@interface MCMCommandReferencesRemove
{
    _Bool _createDuringReconciliation;	// 8 = 0x8
    _Bool _deleteDuringReconciliation;	// 9 = 0x9
    _Bool _yesReallyApplyToAll;	// 10 = 0xa
    unsigned int _uid;	// 12 = 0xc
    unsigned long long _containerClass;	// 16 = 0x10
    NSSet *_ownerIdentifiers;	// 24 = 0x18
    NSSet *_groupIdentifiers;	// 32 = 0x20
    unsigned long long _explicitFlags;	// 40 = 0x28
    unsigned long long _privateFlags;	// 48 = 0x30
    MCMUserIdentity *_userIdentity;	// 56 = 0x38
}

+ (Class)incomingMessageClass;	// IMP=0x0010000000035b42
+ (unsigned long long)command;	// IMP=0x0010000000035b0c
- (void).cxx_destruct;	// IMP=0x0000000000035a63
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) _Bool yesReallyApplyToAll; // @synthesize yesReallyApplyToAll=_yesReallyApplyToAll;
@property(readonly, nonatomic) _Bool deleteDuringReconciliation; // @synthesize deleteDuringReconciliation=_deleteDuringReconciliation;
@property(readonly, nonatomic) _Bool createDuringReconciliation; // @synthesize createDuringReconciliation=_createDuringReconciliation;
@property(readonly, nonatomic) unsigned long long privateFlags; // @synthesize privateFlags=_privateFlags;
@property(readonly, nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) unsigned long long explicitFlags; // @synthesize explicitFlags=_explicitFlags;
@property(readonly, nonatomic) NSSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, nonatomic) NSSet *ownerIdentifiers; // @synthesize ownerIdentifiers=_ownerIdentifiers;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (void)execute;	// IMP=0x0000000000034f81
- (_Bool)preflightClientAllowed;	// IMP=0x0000000000034ee8
- (id)initWithMessage:(id)arg1 context:(id)arg2 reply:(id)arg3;	// IMP=0x0000000000034db3

@end

