//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISPlayerState;
@protocol ISBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISBehavior : NSObject
{
    _Bool _active;	// 8 = 0x8
    id <ISBehaviorDelegate> _delegate;	// 16 = 0x10
    ISPlayerState *_initialLayoutInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b5e7
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) ISPlayerState *initialLayoutInfo; // @synthesize initialLayoutInfo=_initialLayoutInfo;
@property(nonatomic) __weak id <ISBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)videoReadyForDisplayDidChange;	// IMP=0x000000000000b5a7
- (void)videoWillPlayToEnd;	// IMP=0x000000000000b5a1
- (void)videoWillPlayToPhoto;	// IMP=0x000000000000b59b
- (void)videoDidPlayToEnd;	// IMP=0x000000000000b595
- (void)setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000000b535
- (_Bool)prerollVideoAtRate:(float)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b4b1
- (_Bool)seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b407
- (_Bool)seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b379
- (void)setVideoVolume:(float)arg1;	// IMP=0x000000000000b323
- (void)setVideoPlayRate:(float)arg1;	// IMP=0x000000000000b2cd
- (void)setOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b229
- (void)videoPlayerItemDidChange;	// IMP=0x000000000000b223
- (void)activeDidChange;	// IMP=0x000000000000b21d
- (void)resignActive;	// IMP=0x000000000000b207
- (void)becomeActive;	// IMP=0x000000000000b1f1
@property(readonly, nonatomic) long long behaviorType;
- (id)initWithInitialLayoutInfo:(id)arg1;	// IMP=0x000000000000b17e

@end

