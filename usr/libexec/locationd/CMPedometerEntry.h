//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMPedometerEntry : NSObject
{
    struct CLExtendedStepCountEntry pedEntry;	// 8 = 0x8
}

- (struct CLExtendedStepCountEntry)pedEntry;	// IMP=0x00200000007d7046
- (double)pedometerArmConstrainedState;	// IMP=0x00100000007d7035
- (double)stepCadenceCurrent;	// IMP=0x00100000007d702a
- (double)speedCurrent;	// IMP=0x00100000007d6fff
- (double)speedInstant;	// IMP=0x00100000007d6fda
- (double)deltaDist;	// IMP=0x00100000007d6fcf
- (unsigned int)deltaSteps;	// IMP=0x00100000007d6fc3
- (double)deltaActiveTime;	// IMP=0x00100000007d6fb5
- (id)lastStepTime;	// IMP=0x00100000007d6f91
- (id)firstStepTime;	// IMP=0x00100000007d6f6d
- (id)date;	// IMP=0x00100000007d6f4c
- (id)initWithStepEntry:(struct CLExtendedStepCountEntry)arg1;	// IMP=0x00100000007d6efb

@end

