//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSKeepAlive : NSObject
{
    NSXPCConnection *_serverConnection;	// 8 = 0x8
    long long _audioType;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _keepAudioSessionActive;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x000000000003ba84
@property(nonatomic) _Bool keepAudioSessionActive; // @synthesize keepAudioSessionActive=_keepAudioSessionActive;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long audioType; // @synthesize audioType=_audioType;
- (void)_ensureKeepAliveMaintenance;	// IMP=0x000000000003b9fc
- (id)_remoteKeepAlive;	// IMP=0x000000000003b924
- (id)_serverConnection;	// IMP=0x000000000003b783
- (void)dealloc;	// IMP=0x000000000003b741

@end

