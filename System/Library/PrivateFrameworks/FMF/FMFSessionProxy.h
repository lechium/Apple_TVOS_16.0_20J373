//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FMFSession, NSString;

__attribute__((visibility("hidden")))
@interface FMFSessionProxy : NSObject
{
    FMFSession *_session;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e238
@property(nonatomic) __weak FMFSession *session; // @synthesize session=_session;
- (oneway void)didReceiveServerError:(id)arg1;	// IMP=0x000000000001e19f
- (oneway void)didUpdateLocations:(id)arg1;	// IMP=0x000000000001e12d
- (oneway void)didUpdateFollowing:(id)arg1;	// IMP=0x000000000001e0bb
- (oneway void)didUpdateFollowers:(id)arg1;	// IMP=0x000000000001e049
- (oneway void)abPreferencesDidChange;	// IMP=0x000000000001e00c
- (oneway void)abDidChange;	// IMP=0x000000000001dfcf
- (oneway void)didUpdatePreferences:(id)arg1;	// IMP=0x000000000001df5d
- (oneway void)didUpdateFences:(id)arg1;	// IMP=0x000000000001deeb
- (oneway void)didUpdateFavorites:(id)arg1;	// IMP=0x000000000001de79
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;	// IMP=0x000000000001ddf3
- (oneway void)didUpdateActiveDeviceList:(id)arg1;	// IMP=0x000000000001dd81
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;	// IMP=0x000000000001dd0f
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;	// IMP=0x000000000001dc9d
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;	// IMP=0x000000000001dc51
- (void)didReceiveFriendshipRequest:(id)arg1;	// IMP=0x000000000001dbdf
- (oneway void)didStopFollowingHandle:(id)arg1;	// IMP=0x000000000001db6d
- (oneway void)didStartFollowingHandle:(id)arg1;	// IMP=0x000000000001dafb
- (oneway void)didRemoveFollowerHandle:(id)arg1;	// IMP=0x000000000001da89
- (oneway void)didAddFollowerHandle:(id)arg1;	// IMP=0x000000000001da17
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;	// IMP=0x000000000001d991
- (oneway void)setLocations:(id)arg1;	// IMP=0x000000000001d91f
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;	// IMP=0x000000000001d8d3
- (oneway void)modelDidLoad;	// IMP=0x000000000001d896
- (id)initWithFMFSession:(id)arg1;	// IMP=0x000000000001d82e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
