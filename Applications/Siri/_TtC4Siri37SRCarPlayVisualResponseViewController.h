//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE;
@protocol SRStarkItemControllerDelegate;

@interface _TtC4Siri37SRCarPlayVisualResponseViewController : UIViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *presentationDelegate;	// 16 = 0x10
    MISSING_TYPE *snippet;	// 24 = 0x18
    MISSING_TYPE *response;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *shouldAnimateAppearance;	// 3 = 0x3
    MISSING_TYPE *shouldProceedToNextCommandAtSpeechSynthesisEnd;	// 87 = 0x57
}

- (void).cxx_destruct;	// IMP=0x004000000007fef0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000007fe90
- (_Bool)hasButtonContainer;	// IMP=0x001000000007fcf0
- (void)siriDidDeactivate;	// IMP=0x001000000007f830
- (void)siriWillCancel;	// IMP=0x001000000007f810
- (void)siriRequestWillStart;	// IMP=0x001000000007f7f0
- (void)siriDidFinishSpeakingWithIdentifier:(id)arg1;	// IMP=0x001000000007f710
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x001000000007f630
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x001000000007f4c0
- (void)updateSharedState:(id)arg1;	// IMP=0x001000000007f350
- (unsigned long long)autoDismissalReason;	// IMP=0x001000000007f340
- (long long)autoDismissalStrategy;	// IMP=0x001000000007f320
- (void)viewDidLoad;	// IMP=0x001000000007f2e0
- (void)loadView;	// IMP=0x001000000007f0e0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007eff0
- (id)initWithAceSnippet:(id)arg1;	// IMP=0x001000000007efc0
@property(nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd; // @synthesize shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(nonatomic) _Bool shouldAnimateAppearance; // @synthesize shouldAnimateAppearance;
@property(nonatomic) __weak id <SRStarkItemControllerDelegate> delegate; // @synthesize delegate;

@end

