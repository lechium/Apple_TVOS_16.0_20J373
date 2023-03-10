//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBShadowEffect : NSObject
{
    NSString *_colorName;	// 8 = 0x8
    double _weight;	// 16 = 0x10
    struct CGSize _offset;	// 24 = 0x18
    struct UIEdgeInsets _insets;	// 40 = 0x28
    struct UIEdgeInsets _concaveInsets;	// 72 = 0x48
}

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;	// IMP=0x001000000091c6f8
- (void).cxx_destruct;	// IMP=0x000000000091cc8a
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) struct UIEdgeInsets concaveInsets; // @synthesize concaveInsets=_concaveInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000091cb10
- (struct CGColor *)CGColor;	// IMP=0x000000000091caf1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000091c9c5
@property(readonly, copy) NSString *description;
- (id)initWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(double)arg4;	// IMP=0x000000000091c778
- (void)renderEffectWithRenderer:(id)arg1 traits:(id)arg2;	// IMP=0x000000000091c6dd
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) UIKBGradient *gradient;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

