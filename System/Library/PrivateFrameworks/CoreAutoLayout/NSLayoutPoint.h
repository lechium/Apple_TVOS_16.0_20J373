//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject
{
    NSLayoutXAxisAnchor *_xAxisAnchor;	// 8 = 0x8
    NSLayoutYAxisAnchor *_yAxisAnchor;	// 16 = 0x10
}

+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;	// IMP=0x001000000003329e
+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;	// IMP=0x00100000000330a8
@property(readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor; // @synthesize yAxisAnchor=_yAxisAnchor;
@property(readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor; // @synthesize xAxisAnchor=_xAxisAnchor;
- (id)constraintsEqualToPoint:(id)arg1;	// IMP=0x00000000000332d4
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;	// IMP=0x00000000000332c2
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;	// IMP=0x00000000000332b0
- (id)constraintsEqualToLayoutPoint:(id)arg1;	// IMP=0x00000000000331d4
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;	// IMP=0x0000000000033162
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;	// IMP=0x00000000000330db
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033038
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003302d
- (void)dealloc;	// IMP=0x0000000000032fe3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032f92
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032efa
- (id)ruleEqualToLayoutPoint:(id)arg1;	// IMP=0x000000000000509b
- (struct CGPoint)valueInItem:(id)arg1;	// IMP=0x000000000003330e

@end

