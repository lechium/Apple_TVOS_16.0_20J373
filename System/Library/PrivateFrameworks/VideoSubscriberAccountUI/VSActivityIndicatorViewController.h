//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString, UIActivityIndicatorView, UILabel, VSFontCenter;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VSActivityIndicatorViewController : UIViewController
{
    UILabel *_activityTextLabel;	// 8 = 0x8
    _Bool _showingSpinner;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_spinnerTimer;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    _Bool _activityIndicatorHidden;	// 40 = 0x28
    NSString *_activityText;	// 48 = 0x30
    double _activityIndicatorDelay;	// 56 = 0x38
    VSFontCenter *_fontCenter;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000072d91
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(nonatomic) double activityIndicatorDelay; // @synthesize activityIndicatorDelay=_activityIndicatorDelay;
@property(nonatomic, getter=isActivityIndicatorHidden) _Bool activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
@property(copy, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (id)_textColor;	// IMP=0x0000000000072cfe
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000727fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000072557
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000724c4
- (void)dealloc;	// IMP=0x0000000000072463
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000072398

@end

