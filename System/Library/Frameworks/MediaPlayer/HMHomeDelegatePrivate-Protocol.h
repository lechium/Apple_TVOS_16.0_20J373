//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/HMHomeDelegate-Protocol.h>

@class CLLocation, HMAccessory, HMAccessoryNetworkProtectionGroup, HMActionSet, HMHome, HMHomePersonManagerSettings, HMMediaGroupsController, HMMediaSystem, HMResidentDevice, HMRoom, HMServiceGroup, HMUser, NSArray, NSError, NSString;

@protocol HMHomeDelegatePrivate <HMHomeDelegate>

@optional
- (void)home:(HMHome *)arg1 didUpdateAreBulletinNotificationsSupported:(_Bool)arg2;
- (void)homeDidUpdateToROAR:(HMHome *)arg1;
- (void)homeDidUpdateAssistantIdentifiers:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateHasOnboardedForWalletKey:(_Bool)arg2;
- (void)homeDidRemoveWalletKey:(HMHome *)arg1;
- (void)homeDidAddWalletKey:(HMHome *)arg1;
- (void)homeDidSetHasOnboardedForAccessCode:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didFailAccessorySetupWithError:(NSError *)arg2;
- (void)home:(HMHome *)arg1 didUpdatePersonManagerSettings:(HMHomePersonManagerSettings *)arg2;
- (void)homeDidSetEnableDoorbellChime:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateAudioGroupsController:(HMMediaGroupsController *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didRemoveAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)home:(HMHome *)arg1 didAddAccessoryNetworkProtectionGroup:(HMAccessoryNetworkProtectionGroup *)arg2;
- (void)homeDidSetHasAnyUserAcknowledgedCameraRecordingOnboarding:(HMHome *)arg1;
- (void)homeDidEnableMultiUser:(HMHome *)arg1;
- (void)homeDidUpdateHomeLocationStatus:(HMHome *)arg1;
- (void)homeDidUpdateNetworkRouterSupport:(HMHome *)arg1;
- (void)homeDidUpdateProtectionMode:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateReprovisionStateForAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didRemoveMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didAddMediaSystem:(HMMediaSystem *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didEnableNotifications:(_Bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLastExecutionDateForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
@end

