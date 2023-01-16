//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimation : NSObject
{
    id <UIVectorOperatable> _current;	// 8 = 0x8
    id <UIVectorOperatable> _velocity;	// 16 = 0x10
    id <UIVectorOperatable> _zero;	// 24 = 0x18
    CDStruct_289c5ec3 _state;	// 32 = 0x20
    CDStruct_500c0369 _parameters;	// 80 = 0x50
    id <UIVectorOperatable> _distance;	// 184 = 0xb8
    id <UIVectorOperatable> _scaledVelocity;	// 192 = 0xc0
    id <UIVectorOperatable> _epsilon;	// 200 = 0xc8
    float _velocityScalingFactor;	// 208 = 0xd0
    _Bool _parametersInitialized;	// 212 = 0xd4
    id <UIVectorOperatable> _targetValue;	// 216 = 0xd8
    id <UIVectorOperatable> _value;	// 224 = 0xe0
    id <UIVectorOperatable> _intermediate;	// 232 = 0xe8
    id <UIVectorOperatable> _intermediateVelocity;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000010aaa1c
@property(retain, nonatomic) id <UIVectorOperatable> intermediateVelocity; // @synthesize intermediateVelocity=_intermediateVelocity;
@property(retain, nonatomic) id <UIVectorOperatable> intermediate; // @synthesize intermediate=_intermediate;
@property(retain, nonatomic) id <UIVectorOperatable> value; // @synthesize value=_value;
@property(retain, nonatomic) id <UIVectorOperatable> targetValue; // @synthesize targetValue=_targetValue;
- (_Bool)isStable;	// IMP=0x00000000010aa835
@property(retain, nonatomic) id <UIVectorOperatable> velocity;
- (id)stepWithDelta:(double)arg1;	// IMP=0x00000000010aa5aa
- (id)initWithCurrent:(id)arg1 targetValue:(id)arg2;	// IMP=0x00000000010aa503
- (void)updateWithDescription:(id)arg1 initial:(_Bool)arg2;	// IMP=0x00000000010a9f5b
- (void)updateWithDescription:(id)arg1;	// IMP=0x00000000010a9f47
- (id)initWithDescription:(id)arg1 current:(id)arg2 targetValue:(id)arg3;	// IMP=0x00000000010a9d22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

