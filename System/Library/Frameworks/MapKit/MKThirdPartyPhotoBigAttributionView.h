//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKThirdPartyPhotoBigAttributionView
{
    _MKUILabel *_firstLineLabel;	// 8 = 0x8
    _MKUILabel *_secondLineLabel;	// 16 = 0x10
    UIView *_labelsView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007f7e5
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x000000000007f7c0
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x000000000007f7a0
- (void)didUpdateAttributionViewType;	// IMP=0x000000000007f78e
- (void)didUpdateMapItem;	// IMP=0x000000000007f77c
- (id)secondLineLabelFont;	// IMP=0x000000000007f729
- (id)firstLineLabelFont;	// IMP=0x000000000007f6cb
- (void)updateInfoAttributionString;	// IMP=0x000000000007f297
- (id)initWithContext:(long long)arg1;	// IMP=0x000000000007e771

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
