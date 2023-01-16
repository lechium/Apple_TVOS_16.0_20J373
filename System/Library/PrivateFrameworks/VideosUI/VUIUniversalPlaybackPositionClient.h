//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString, SBKUniversalPlaybackPositionStore, VUIUPPClientState;

__attribute__((visibility("hidden")))
@interface VUIUniversalPlaybackPositionClient : NSObject
{
    SBKUniversalPlaybackPositionStore *_uppStore;	// 8 = 0x8
    double _lastSyncTimestamp;	// 16 = 0x10
    _Bool _needsSync;	// 24 = 0x18
    NSLock *_stateLock;	// 32 = 0x20
    VUIUPPClientState *_state;	// 40 = 0x28
}

+ (id)defaultClient;	// IMP=0x00100000001398b6
- (void).cxx_destruct;	// IMP=0x000000000013a2d2
@property(retain) VUIUPPClientState *state; // @synthesize state=_state;
- (id)allRecords;	// IMP=0x000000000013a1ef
- (void)_activeAccountDidChange:(id)arg1;	// IMP=0x000000000013a086
- (id)recordForBookmarkKey:(id)arg1;	// IMP=0x0000000000139e9d
- (void)writeItems:(id)arg1;	// IMP=0x0000000000139ca6
- (void)synchronize:(CDUnknownBlockType)arg1;	// IMP=0x0000000000139b04
- (void)_setNeedsSync;	// IMP=0x0000000000139aa3
- (void)dealloc;	// IMP=0x0000000000139a2e
- (id)init;	// IMP=0x000000000013990b
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000000013aaf9
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000013a470
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013a305

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

