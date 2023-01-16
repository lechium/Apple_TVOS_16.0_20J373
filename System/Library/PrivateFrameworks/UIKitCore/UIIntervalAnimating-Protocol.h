//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol UIVectorOperatable;

@protocol UIIntervalAnimating <NSObject>
- (void)setVelocity:(id <UIVectorOperatable>)arg1;
- (id <UIVectorOperatable>)velocity;
- (id <UIVectorOperatable>)targetValue;
- (_Bool)isStable;
- (id <UIVectorOperatable>)stepWithDelta:(double)arg1;
@end

