//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject
{
    double timestamp;	// 8 = 0x8
    long long phase;	// 16 = 0x10
    unsigned long long tapCount;	// 24 = 0x18
    UIWindow *window;	// 32 = 0x20
    struct CGPoint locationInWindow;	// 40 = 0x28
    unsigned char _pathIndex;	// 56 = 0x38
    unsigned char _pathIdentity;	// 57 = 0x39
    float _pathMajorRadius;	// 60 = 0x3c
}

+ (id)syntheticTouchWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;	// IMP=0x0060000000940ec7
- (void).cxx_destruct;	// IMP=0x00000000009411ba
@property(nonatomic) float _pathMajorRadius; // @synthesize _pathMajorRadius;
@property(readonly, nonatomic) unsigned char _pathIdentity; // @synthesize _pathIdentity;
@property(readonly, nonatomic) unsigned char _pathIndex; // @synthesize _pathIndex;
@property(nonatomic) struct CGPoint locationInWindow; // @synthesize locationInWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
@property(nonatomic) unsigned long long tapCount; // @synthesize tapCount;
@property(nonatomic) long long phase; // @synthesize phase;
@property(nonatomic) double timestamp; // @synthesize timestamp;
- (void)_setLocationInWindow:(struct CGPoint)arg1 resetPrevious:(_Bool)arg2;	// IMP=0x0000000000941115
- (struct CGPoint)getLocationInWindow;	// IMP=0x00000000009410f5
- (struct CGPoint)previousLocationInView:(id)arg1;	// IMP=0x0000000000941069
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x0000000000940fdd
- (id)initWithPoint:(struct CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3;	// IMP=0x0000000000940f3a

@end
