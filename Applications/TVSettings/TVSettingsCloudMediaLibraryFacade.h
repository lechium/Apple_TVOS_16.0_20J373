//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICMusicSubscriptionStatus;

@interface TVSettingsCloudMediaLibraryFacade : NSObject
{
    _Bool _appleMusicSubscribed;	// 8 = 0x8
    _Bool _iTunesMatchSubscribed;	// 9 = 0x9
    _Bool _supportsEnhancedAudio;	// 10 = 0xa
    _Bool _addingToPlaylistAddsToLibrary;	// 11 = 0xb
    long long _syncState;	// 16 = 0x10
    ICMusicSubscriptionStatus *_cachedSubscriptionStatus;	// 24 = 0x18
    long long _cloudStatus;	// 32 = 0x20
}

+ (id)_debugNameForCloudStatus:(long long)arg1;	// IMP=0x0040000000067c88
+ (id)_debugNameForSyncState:(long long)arg1;	// IMP=0x0010000000067c5d
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000066707
+ (id)sharedInstance;	// IMP=0x00100000000663fd
- (void).cxx_destruct;	// IMP=0x0020000000067d19
@property(nonatomic) long long cloudStatus; // @synthesize cloudStatus=_cloudStatus;
@property(retain, nonatomic) ICMusicSubscriptionStatus *cachedSubscriptionStatus; // @synthesize cachedSubscriptionStatus=_cachedSubscriptionStatus;
@property(nonatomic) _Bool addingToPlaylistAddsToLibrary; // @synthesize addingToPlaylistAddsToLibrary=_addingToPlaylistAddsToLibrary;
@property(nonatomic) _Bool supportsEnhancedAudio; // @synthesize supportsEnhancedAudio=_supportsEnhancedAudio;
@property(nonatomic, getter=isITunesMatchSubscribed) _Bool iTunesMatchSubscribed; // @synthesize iTunesMatchSubscribed=_iTunesMatchSubscribed;
@property(nonatomic, getter=isAppleMusicSubscribed) _Bool appleMusicSubscribed; // @synthesize appleMusicSubscribed=_appleMusicSubscribed;
@property(nonatomic) long long syncState; // @synthesize syncState=_syncState;
- (_Bool)_isEnhancedAudioAvailable;	// IMP=0x0010000000067b31
- (_Bool)_mediaLibraryHasContent;	// IMP=0x0010000000067adb
- (void)_updateSyncState;	// IMP=0x0010000000067922
- (void)_initializeSyncState;	// IMP=0x00100000000677e6
- (void)_updateSubscriptionStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000067146
- (void)_reinitializeState;	// IMP=0x001000000006709a
- (void)_initializeState;	// IMP=0x0010000000066fc5
- (void)_handleIsCloudUpdateInProgressDidChangeNotification:(id)arg1;	// IMP=0x0010000000066b50
- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x0010000000066a3c
- (void)_handleMediaLibraryPathDidChangeNotification:(id)arg1;	// IMP=0x0010000000066928
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000000667b0
@property(readonly, nonatomic) _Bool canAddToPlaylist;
- (id)_init;	// IMP=0x0010000000066462

@end

