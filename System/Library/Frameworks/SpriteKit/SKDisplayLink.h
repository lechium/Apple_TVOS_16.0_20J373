//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplay, CADisplayLink, NSTimer;

__attribute__((visibility("hidden")))
@interface SKDisplayLink : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    id _client;	// 16 = 0x10
    CADisplayLink *_caDisplayLink;	// 24 = 0x18
    CADisplay *_display;	// 32 = 0x20
    _Bool _paused;	// 40 = 0x28
    _Bool _callbackAlreadyInProgress;	// 41 = 0x29
    double _previousFrameTime;	// 48 = 0x30
    float _preferredFramesPerSecond;	// 56 = 0x38
    CDUnknownBlockType _block;	// 64 = 0x40
    float _averageFrameTime;	// 72 = 0x48
    long long _frameCount;	// 80 = 0x50
    double _frameCountBeginTime;	// 88 = 0x58
}

+ (id)displayLinkWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;	// IMP=0x00600000000943c8
- (void).cxx_destruct;	// IMP=0x0000000000094a65
- (void)_caDisplayLinkCallback;	// IMP=0x00000000000949fb
- (void)dealloc;	// IMP=0x000000000009497c
- (void)_callbackForNextFrame:(double)arg1;	// IMP=0x000000000009478a
- (void)invalidate;	// IMP=0x0000000000094778
- (void)_teardown;	// IMP=0x0000000000094725
- (void)_setup;	// IMP=0x00000000000945e5
@property(retain, nonatomic) CADisplay *display;
@property(nonatomic) long long preferredFramesPerSecond;
@property(nonatomic, getter=isPaused) _Bool paused;
- (id)init;	// IMP=0x00000000000943ba
- (id)initWithDisplay:(id)arg1 handler:(CDUnknownBlockType)arg2 client:(id)arg3;	// IMP=0x00000000000942ae
- (void)_setCallbackAlreadyInProgress:(_Bool)arg1;	// IMP=0x00000000000942a5
- (_Bool)_callbackAlreadyInProgress;	// IMP=0x000000000009429c

@end
