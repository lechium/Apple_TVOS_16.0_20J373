//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SRSuggestionsViewController;
@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SiriEyesFreePresentation : UIViewController
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    unsigned long long _numberOfSpeechRequestsWaitingToFinishSynthesis;	// 16 = 0x10
    id <SiriUIPresentationDataSource> _dataSource;	// 24 = 0x18
    id <SiriUIPresentationDelegate> _delegate;	// 32 = 0x20
    SRSuggestionsViewController *_siriUnavailableViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000075449
@property(readonly, nonatomic, getter=_siriUnavailableViewController) SRSuggestionsViewController *siriUnavailableViewController; // @synthesize siriUnavailableViewController=_siriUnavailableViewController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1;	// IMP=0x0010000000075299
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x0010000000075291
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000075287
- (void)suggestionsViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000075281
- (id)siriEnabledAppListForSuggestionsController:(id)arg1;	// IMP=0x0010000000075279
- (CDStruct_a82615c4)keyboardInfoForSuggestionsController:(id)arg1;	// IMP=0x0010000000075249
- (double)contentWidthForSuggestionsViewController:(id)arg1;	// IMP=0x00100000000751f2
- (double)statusViewHeightForSuggestionsViewController:(id)arg1;	// IMP=0x001000000007519b
- (struct CGRect)statusBarFrameForSuggestionsViewController:(id)arg1;	// IMP=0x0010000000075131
- (void)suggestionsViewDidShowSuggestions:(id)arg1;	// IMP=0x001000000007512b
- (void)viewDidLoad;	// IMP=0x0010000000074f0a
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x0010000000074f02
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x0010000000074efa
- (_Bool)supportsTextInput;	// IMP=0x0010000000074ef2
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0010000000074eea
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x0010000000074bb5
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000074ba0
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000074b8b
- (id)viewController;	// IMP=0x0010000000074b82
- (void)_synthesizeSpeechWithText:(id)arg1;	// IMP=0x0010000000074a67
- (long long)options;	// IMP=0x0010000000074a5c
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x00100000000748f5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0010000000074804
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x00100000000747e8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000747d0
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000747b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

