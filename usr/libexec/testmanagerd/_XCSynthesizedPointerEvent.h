//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _XCSynthesizedPointerEvent : NSObject
{
    double _pressure;	// 8 = 0x8
    struct CGPoint _coordinate;	// 16 = 0x10
}

+ (id)synthesizedPointerEventWithCoordinate:(struct CGPoint)arg1 pressure:(double)arg2;	// IMP=0x0040000000023e50
@property(nonatomic) double pressure; // @synthesize pressure=_pressure;
@property(nonatomic) struct CGPoint coordinate; // @synthesize coordinate=_coordinate;
- (id)description;	// IMP=0x0010000000023eb9

@end

