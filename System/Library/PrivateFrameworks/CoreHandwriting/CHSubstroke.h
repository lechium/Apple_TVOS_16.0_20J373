//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject
{
    struct vector<CGPoint, std::allocator<CGPoint>> _convexHull;	// 8 = 0x8
    CHEncodedStrokeIdentifier *_strokeIdentifier;	// 32 = 0x20
    double _startTimestamp;	// 40 = 0x28
    double _endTimestamp;	// 48 = 0x30
    double _curvature;	// 56 = 0x38
    struct CGRect _bounds;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000fbe40
+ (id)substrokesForStroke:(id)arg1;	// IMP=0x00100000000fa340
- (id).cxx_construct;	// IMP=0x00000000000fc250
- (void).cxx_destruct;	// IMP=0x00000000000fc210
@property(readonly, nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fc130
- (_Bool)isEqualToSubstroke:(id)arg1;	// IMP=0x00000000000fbe50
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fba60
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fb870
- (void *)convexHull;	// IMP=0x00000000000fb860
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const void *)arg5 curvature:(double)arg6;	// IMP=0x00000000000fa240

@end

