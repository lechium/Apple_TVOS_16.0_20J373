//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutParameters : NSObject
{
    NSAttributedString *_attributedText;	// 8 = 0x8
    unsigned long long _numberOfLines;	// 16 = 0x10
    UITraitCollection *_traitCollection;	// 24 = 0x18
    long long _lineBreakMode;	// 32 = 0x20
    struct CGSize _withinSize;	// 40 = 0x28
}

+ (id)parametersSuitableForView:(id)arg1;	// IMP=0x00100000010e2643
- (void).cxx_destruct;	// IMP=0x00000000010e2a4c
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) struct CGSize withinSize; // @synthesize withinSize=_withinSize;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (_Bool)isEqualToParameters:(id)arg1;	// IMP=0x00000000010e2898
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010e2869
- (void)_copyFromParameters:(id)arg1;	// IMP=0x00000000010e2772
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000010e270a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

