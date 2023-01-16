//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class UILabel, UILayoutGuide, UIVisualEffectView, _UICAPackageView;

@interface TVSMTeachableMomentViewController : UIViewController
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    UILayoutGuide *_containerLayoutGuide;	// 16 = 0x10
    _UICAPackageView *_animationContainerView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_messageLabel;	// 40 = 0x28
    UILabel *_actionLabel;	// 48 = 0x30
}

+ (id)_remoteString;	// IMP=0x0040000000027750
+ (id)_teachableMomentAssetURL;	// IMP=0x0010000000027660
+ (id)_userInteractionAssetURL;	// IMP=0x0010000000027570
+ (double)_assetHeight;	// IMP=0x00100000000274b0
- (void).cxx_destruct;	// IMP=0x0020000000027ab0
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) _UICAPackageView *animationContainerView; // @synthesize animationContainerView=_animationContainerView;
@property(retain, nonatomic) UILayoutGuide *containerLayoutGuide; // @synthesize containerLayoutGuide=_containerLayoutGuide;
@property(readonly, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
- (id)_tvButtonInjectedStringWithBaseLocalizedString:(id)arg1;	// IMP=0x0010000000027140
- (void)_setupInterface;	// IMP=0x0010000000025120
- (void)animateTeachableMomentAction;	// IMP=0x0010000000024c20
- (void)dealloc;	// IMP=0x0010000000024bd0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000024a40
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000249a0
- (void)viewDidLoad;	// IMP=0x0010000000024940

@end

