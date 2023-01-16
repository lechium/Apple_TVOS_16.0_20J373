//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (NSValueUIGeometryExtensions)
+ (id)valueWithUIOffset:(struct UIOffset)arg1;	// IMP=0x0020000000781ff5
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x0020000000781fc1
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x0020000000781fa8
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0020000000781f74
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x0020000000781f40
+ (id)valueWithCGRect:(struct CGRect)arg1;	// IMP=0x0020000000781f0c
+ (id)valueWithCGSize:(struct CGSize)arg1;	// IMP=0x0020000000781ec7
+ (id)valueWithCGVector:(struct CGVector)arg1;	// IMP=0x0020000000781e82
+ (id)valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x0020000000781e3d
+ (id)valueWithUIKBHandwritingPoint:(struct)arg1;	// IMP=0x00200000008bdd96
+ (id)ui_valueWithPlatformPoint:(struct CGPoint)arg1;	// IMP=0x0020000000b28bb1
+ (id)ui_valueWithPlatformSize:(struct CGSize)arg1;	// IMP=0x0020000000ed7b58
@property(readonly, nonatomic) struct UIOffset UIOffsetValue;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets directionalEdgeInsetsValue;
@property(readonly, nonatomic) struct UIEdgeInsets UIEdgeInsetsValue;
@property(readonly, nonatomic) struct CGAffineTransform CGAffineTransformValue;
@property(readonly, nonatomic) struct CGRect CGRectValue;
@property(readonly, nonatomic) struct CGSize CGSizeValue;
@property(readonly, nonatomic) struct CGVector CGVectorValue;
@property(readonly, nonatomic) struct CGPoint CGPointValue;
@property(readonly) CDStruct_19cde01f UIKBHandwritingPointValue;
- (struct CGPoint)ui_platformPointValue;	// IMP=0x0010000000b28b9f
- (struct _UIPressTrigger)_UIPressTriggerValue;	// IMP=0x0010000000de2ec7
- (struct CGSize)ui_platformSizeValue;	// IMP=0x0010000000ed7b46
@end

