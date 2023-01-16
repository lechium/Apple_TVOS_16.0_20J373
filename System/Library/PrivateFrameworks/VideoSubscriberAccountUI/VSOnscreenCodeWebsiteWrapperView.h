//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIButton, UILabel, UIView;
@protocol VSOnscreenCodeViewDelegate;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeWebsiteWrapperView
{
    _Bool _showButtonLockup;	// 8 = 0x8
    id <VSOnscreenCodeViewDelegate> _delegate;	// 16 = 0x10
    UIView *_infoView;	// 24 = 0x18
    UILabel *_infoTitleLabel;	// 32 = 0x20
    UILabel *_infoDescriptionLabel;	// 40 = 0x28
    UIView *_detailsView;	// 48 = 0x30
    UIView *_detailsContentView;	// 56 = 0x38
    UILabel *_visitWebsiteLabel;	// 64 = 0x40
    UILabel *_urlLabel;	// 72 = 0x48
    UILabel *_enterCodeLabel;	// 80 = 0x50
    UILabel *_codeLabel;	// 88 = 0x58
    UIButton *_buttonLockup;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000005cd62
@property(retain, nonatomic) UIButton *buttonLockup; // @synthesize buttonLockup=_buttonLockup;
@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) UILabel *enterCodeLabel; // @synthesize enterCodeLabel=_enterCodeLabel;
@property(retain, nonatomic) UILabel *urlLabel; // @synthesize urlLabel=_urlLabel;
@property(retain, nonatomic) UILabel *visitWebsiteLabel; // @synthesize visitWebsiteLabel=_visitWebsiteLabel;
@property(retain, nonatomic) UIView *detailsContentView; // @synthesize detailsContentView=_detailsContentView;
@property(retain, nonatomic) UIView *detailsView; // @synthesize detailsView=_detailsView;
@property(retain, nonatomic) UILabel *infoDescriptionLabel; // @synthesize infoDescriptionLabel=_infoDescriptionLabel;
@property(retain, nonatomic) UILabel *infoTitleLabel; // @synthesize infoTitleLabel=_infoTitleLabel;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) _Bool showButtonLockup; // @synthesize showButtonLockup=_showButtonLockup;
@property(nonatomic) __weak id <VSOnscreenCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buttonLockupPressed;	// IMP=0x000000000005cb66
- (void)setupLocalizedStrings;	// IMP=0x000000000005c93d
- (void)setupLayout;	// IMP=0x000000000005ade4
- (void)setupDetailsView;	// IMP=0x000000000005aa67
- (void)setupInfoView;	// IMP=0x000000000005a97a
- (void)updateUIWithViewModel:(id)arg1;	// IMP=0x000000000005a831
- (id)initWithButtonLockup:(_Bool)arg1;	// IMP=0x000000000005a7a8

@end

