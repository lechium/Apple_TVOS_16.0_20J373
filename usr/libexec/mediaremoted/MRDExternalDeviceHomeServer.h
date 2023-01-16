//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDExternalDeviceHomeServerRecentlyPlayedEntry, NSMutableArray, NSString, NSUserDefaults;

@interface MRDExternalDeviceHomeServer : NSObject
{
    _Bool _sendingPlaybackStateToCompanion;	// 8 = 0x8
    MRDExternalDeviceHomeServerRecentlyPlayedEntry *_lastSentEntry;	// 16 = 0x10
    NSMutableArray *_entries;	// 24 = 0x18
    NSUserDefaults *_userDefaults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004804f
@property(nonatomic) _Bool sendingPlaybackStateToCompanion; // @synthesize sendingPlaybackStateToCompanion=_sendingPlaybackStateToCompanion;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) MRDExternalDeviceHomeServerRecentlyPlayedEntry *lastSentEntry; // @synthesize lastSentEntry=_lastSentEntry;
- (id)decodeEntries;	// IMP=0x0010000000047d6e
- (id)encodeEntries;	// IMP=0x0010000000047b6a
- (void)_addEntry:(id)arg1;	// IMP=0x001000000004770d
- (_Bool)_shouldSendCompanionLinkMessage;	// IMP=0x00100000000476f6
- (void)_maybeSendPlaybackStateMessageToCompanion;	// IMP=0x0010000000046f7f
- (void)_handleSetNearbyDevicesToRemoteControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000046e60
- (void)_maybeMostRecentlyPlayedDeviceChanged:(id)arg1;	// IMP=0x0010000000046cb0
- (void)_handleLocalPlaybackBeganNotification:(id)arg1;	// IMP=0x0010000000046aaa
- (void)_registerNotifications;	// IMP=0x00100000000468e6
- (void)_registerCompanionLinkHandlers;	// IMP=0x0010000000045ffd
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000045f82
@property(readonly, nonatomic) NSString *mostRecentDeviceUID;
- (id)init;	// IMP=0x0010000000045e0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

