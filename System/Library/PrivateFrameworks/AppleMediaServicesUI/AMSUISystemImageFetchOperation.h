//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface AMSUISystemImageFetchOperation
{
    NSString *_imageName;	// 8 = 0x8
    UITraitCollection *_traitCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000478d0
@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)main;	// IMP=0x0000000000047740
- (_Bool)isLowLatency;	// IMP=0x0000000000047738
- (id)initWithSystemImageName:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x000000000004767b

@end

