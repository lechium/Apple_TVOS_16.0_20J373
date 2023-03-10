//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCMediaFoundationTranslator;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MPCItemBookmarker : NSObject
{
    MPCMediaFoundationTranslator *_translator;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_bookmarkingTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001ae4f8
@property(retain, nonatomic) NSObject<OS_dispatch_source> *bookmarkingTimer; // @synthesize bookmarkingTimer=_bookmarkingTimer;
@property(retain, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
- (void)_teardownBookmarkingTimer;	// IMP=0x00000000001ae43d
- (void)_setupBookmarkingTimerForItem:(id)arg1;	// IMP=0x00000000001ae1fe
- (void)updateDurationSnapshotWithTime:(double)arg1 forItem:(id)arg2 rate:(float)arg3;	// IMP=0x00000000001ae0e6
- (void)playbackStateDidChangeFromState:(long long)arg1 toState:(long long)arg2 forItem:(id)arg3 time:(double)arg4 rate:(float)arg5;	// IMP=0x00000000001adf82
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 time:(double)arg3;	// IMP=0x00000000001ade6e
- (void)playbackDidStopForItem:(id)arg1 time:(double)arg2;	// IMP=0x00000000001add70
- (void)playbackDidStartForItem:(id)arg1 time:(double)arg2 rate:(float)arg3;	// IMP=0x00000000001adbbe
- (void)itemDidPlayToEnd:(id)arg1 time:(double)arg2;	// IMP=0x00000000001adaee
- (void)itemDidResignCurrent:(id)arg1 time:(double)arg2;	// IMP=0x00000000001adadc
- (void)itemDidBecomeCurrent:(id)arg1 time:(double)arg2;	// IMP=0x00000000001ad930
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 time:(double)arg3;	// IMP=0x00000000001ad4ea
- (void)userDidSkipDuringPlaybackFromItem:(id)arg1 direction:(long long)arg2;	// IMP=0x00000000001ad3dd
- (id)initWithTranslator:(id)arg1;	// IMP=0x00000000001ad372

@end

