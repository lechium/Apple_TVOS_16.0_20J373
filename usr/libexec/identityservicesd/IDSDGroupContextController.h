//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTPromiseSeal, ENGroupContext;

@interface IDSDGroupContextController : NSObject
{
    ENGroupContext *_messagesGroupContext;	// 8 = 0x8
    CUTPromiseSeal *_seal;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000004e7ed0
- (void).cxx_destruct;	// IMP=0x00200000004eca20
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) ENGroupContext *messagesGroupContext; // @synthesize messagesGroupContext=_messagesGroupContext;
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004ebfa0
- (void)qSetupSeal;	// IMP=0x00100000004ebf10
- (void)_messagesGroupContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004ebdd0
- (void)centerUpdatedRegistrationIdentities:(id)arg1;	// IMP=0x00100000004eb9c0
- (void)deleteAllCachedValuesForGroupWithID:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004eb770
- (void)deleteAllKnownGroupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004eb580
- (void)fetchAllKnownGroups:(CDUnknownBlockType)arg1;	// IMP=0x00100000004eb2f0
- (void)latestCachedGroupWithStableID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004eb050
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004eab60
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004ea6e0
- (void)groupFromPublicDataRepresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004ea250
- (void)publicDataRepresentationForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004e9db0
- (void)fetchGroupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004e9730
- (void)upsertGroupWithInfo:(id)arg1 previousGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004e87e0
- (void)groupContextForProtectionSpace:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004e8270
- (id)registrationCenter;	// IMP=0x00100000004e8240
- (void)dealloc;	// IMP=0x00100000004e81c0
- (id)init;	// IMP=0x00100000004e7f90

@end

