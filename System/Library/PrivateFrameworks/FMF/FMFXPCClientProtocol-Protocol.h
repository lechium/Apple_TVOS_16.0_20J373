//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FMF/NSObject-Protocol.h>

@class FMFDevice, FMFFriendshipRequest, FMFHandle, NSArray, NSDictionary, NSError, NSSet, NSString;

@protocol FMFXPCClientProtocol <NSObject>
- (oneway void)didReceiveServerError:(NSError *)arg1;
- (oneway void)didUpdatePreferences:(NSDictionary *)arg1;
- (oneway void)didUpdateFences:(NSSet *)arg1;
- (oneway void)didUpdateLocations:(NSSet *)arg1;
- (oneway void)didUpdateFollowing:(NSSet *)arg1;
- (oneway void)didUpdateFollowers:(NSSet *)arg1;
- (oneway void)abPreferencesDidChange;
- (oneway void)abDidChange;
- (oneway void)didUpdateFavorites:(NSArray *)arg1;
- (oneway void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (oneway void)didStopFollowingHandle:(FMFHandle *)arg1;
- (oneway void)didStartFollowingHandle:(FMFHandle *)arg1;
- (oneway void)didRemoveFollowerHandle:(FMFHandle *)arg1;
- (oneway void)didAddFollowerHandle:(FMFHandle *)arg1;
- (oneway void)failedToGetLocationForHandle:(FMFHandle *)arg1 error:(NSError *)arg2;
- (oneway void)setLocations:(NSSet *)arg1;
@end

