//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VOTBrailleGestureHalfPattern;

@interface VOTBrailleGesturePattern : NSObject
{
    VOTBrailleGestureHalfPattern *_leftDots;	// 8 = 0x8
    VOTBrailleGestureHalfPattern *_rightDots;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e883c
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *rightDots; // @synthesize rightDots=_rightDots;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *leftDots; // @synthesize leftDots=_leftDots;
- (id)description;	// IMP=0x00100000000e873c
- (id)initWithLeftDots:(id)arg1 rightDots:(id)arg2;	// IMP=0x00100000000e869e

@end

