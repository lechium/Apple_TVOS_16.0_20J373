//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPARAsset, NSURL, UIView;

__attribute__((visibility("hidden")))
@interface LPARAssetView
{
    LPARAsset *_arAsset;	// 8 = 0x8
    UIView *_arAssetView;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    NSURL *_URL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000003015
@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000002fee
- (void)layoutComponentView;	// IMP=0x0000000000002fe8
- (id)initWithHost:(id)arg1 ARAsset:(id)arg2;	// IMP=0x0000000000002f5d
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000002f4f

@end

