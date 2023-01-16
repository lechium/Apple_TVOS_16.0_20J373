//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKProfileServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001bf212
+ (Class)interfaceClass;	// IMP=0x00100000001bf201
- (void)loadProfileForPlayer:(id)arg1 pieces:(unsigned char)arg2 context:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00200000001c4675
- (oneway void)getProfilesForPlayerIDs:(id)arg1 fetchOptions:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c41b0
- (oneway void)getProfilePrivacyWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c3ddf
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c3c3f
- (oneway void)setProfileSettings:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c3832
- (oneway void)setProfilePrivacy:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c30fb
- (oneway void)setPrivacyNoticeVersion:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c2d2d
- (oneway void)setArcadeSubscriptionExpiration:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c29c0
- (oneway void)setGlobalFriendListAccess:(int)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c2519
- (oneway void)getTermsAndConditionsURLWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c1f0c
- (oneway void)getSuggestionsForNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c18a8
- (oneway void)setPlayerNickname:(id)arg1 suggestionsCount:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c0f34
- (oneway void)setFindable:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c0a71
- (oneway void)deletePhotoWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c047a
- (oneway void)setPhotoData:(id)arg1 avatarType:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001bfe12
- (oneway void)cachePhotos:(id)arg1 avatarType:(id)arg2 fileNames:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001bf80a
- (oneway void)setStatus:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001bf21d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
