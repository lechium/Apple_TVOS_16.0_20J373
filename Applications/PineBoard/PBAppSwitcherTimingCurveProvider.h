//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PBAppSwitcherTimingCurveProvider : NSObject
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x002000000013551c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000135516
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000135503
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType;

@end
