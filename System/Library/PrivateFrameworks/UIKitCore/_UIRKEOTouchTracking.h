//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIRKEOTouchTracking : NSObject
{
    _Bool _valid;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    double _largestObservedRadius;	// 24 = 0x18
    Class _beganGestureClass;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000580037
@property(retain, nonatomic) Class beganGestureClass; // @synthesize beganGestureClass=_beganGestureClass;
@property(nonatomic) double largestObservedRadius; // @synthesize largestObservedRadius=_largestObservedRadius;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;

@end

