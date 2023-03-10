//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PBPIPControlButton, UIStackView;
@protocol PBPIPControlsDelegate;

@interface PBPIPControlsViewController : UIViewController
{
    id <PBPIPControlsDelegate> _delegate;	// 8 = 0x8
    UIStackView *_stackView;	// 16 = 0x10
    PBPIPControlButton *_stopPictureInPictureButton;	// 24 = 0x18
    PBPIPControlButton *_movePictureInPictureButton;	// 32 = 0x20
    PBPIPControlButton *_cancelPictureInPictureButton;	// 40 = 0x28
    long long _currentQuadrant;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000015461e
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(retain, nonatomic) PBPIPControlButton *cancelPictureInPictureButton; // @synthesize cancelPictureInPictureButton=_cancelPictureInPictureButton;
@property(retain, nonatomic) PBPIPControlButton *movePictureInPictureButton; // @synthesize movePictureInPictureButton=_movePictureInPictureButton;
@property(retain, nonatomic) PBPIPControlButton *stopPictureInPictureButton; // @synthesize stopPictureInPictureButton=_stopPictureInPictureButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <PBPIPControlsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playPausePressed:(id)arg1;	// IMP=0x0010000000154509
- (void)menuPressed:(id)arg1;	// IMP=0x00100000001544cc
- (void)cancelPictureInPictureButtonPressed:(id)arg1;	// IMP=0x001000000015448f
- (void)movePictureInPictureButtonPressed:(id)arg1;	// IMP=0x0010000000154433
- (void)expandPictureInPictureButtonPressed:(id)arg1;	// IMP=0x00100000001543f6
- (void)hideControlsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000153eee
- (void)showControlsAnimated:(_Bool)arg1;	// IMP=0x0010000000153a80
- (id)preferredFocusEnvironments;	// IMP=0x001000000015399a
- (void)viewDidLoad;	// IMP=0x0010000000153218
- (id)initWithQuadrant:(long long)arg1;	// IMP=0x0010000000153091

@end

