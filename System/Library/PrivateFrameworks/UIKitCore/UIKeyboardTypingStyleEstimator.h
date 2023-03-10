//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardTypingStyleEstimator : NSObject
{
    NSTimer *_tapTypingFlipTimer;	// 8 = 0x8
    double _lastContinuousPathEvent;	// 16 = 0x10
    unsigned long long _currentTypingStyle;	// 24 = 0x18
    id <UIKeyboardTypingStyleEstimatorDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b6eef5
@property(nonatomic) __weak id <UIKeyboardTypingStyleEstimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)currentTypingStyleEstimation;	// IMP=0x0000000000b6eec4
- (void)tapTypedKey;	// IMP=0x0000000000b6eead
- (void)cancelContinuousPath;	// IMP=0x0000000000b6edda
- (void)endedContinuousPath;	// IMP=0x0000000000b6ec8a
- (void)beganContinuousPath;	// IMP=0x0000000000b6ec29
- (void)_setTypingStyleEstimation:(unsigned long long)arg1;	// IMP=0x0000000000b6eac7

@end

