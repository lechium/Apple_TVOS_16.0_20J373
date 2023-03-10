//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, VUISBIconProgressView;

__attribute__((visibility("hidden")))
@interface VUIAppInstallView : UIView
{
    UIImageView *_appIconImageView;	// 8 = 0x8
    UIView *_backgroundKnockoutView;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    VUISBIconProgressView *_progressView;	// 32 = 0x20
    UIImage *_appIcon;	// 40 = 0x28
    double _installProgress;	// 48 = 0x30
}

+ (struct CGSize)_appIconSize;	// IMP=0x00100000001dce01
+ (double)_appIconRadius;	// IMP=0x00100000001dcdcf
+ (id)_progressMaskImage;	// IMP=0x00100000001dcc66
- (void).cxx_destruct;	// IMP=0x00000000001dce93
@property(nonatomic) double installProgress; // @synthesize installProgress=_installProgress;
@property(retain, nonatomic) UIImage *appIcon; // @synthesize appIcon=_appIcon;
- (void)setWaiting;	// IMP=0x00000000001dcc3c
- (void)finishInstallationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001dcb5d
- (void)progressViewCanBeRemoved:(id)arg1;	// IMP=0x00000000001dcb25
- (void)dealloc;	// IMP=0x00000000001dcada
- (void)layoutSubviews;	// IMP=0x00000000001dca33
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001dca19
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001dc87a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

