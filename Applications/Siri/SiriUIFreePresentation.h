//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SiriUIFreePresentation : NSObject
{
    _Bool _hasReportedPresentation;	// 8 = 0x8
    MISSING_TYPE *_shouldSuppressErrorTTS;	// 9 = 0x9
    id <SiriUIPresentationDataSource> _dataSource;	// 16 = 0x10
    id <SiriUIPresentationDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000074378
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x0010000000074333
- (long long)options;	// IMP=0x0010000000074328
- (void)setShouldSuppressErrorTTS:(_Bool)arg1;	// IMP=0x001000000007431f
- (_Bool)shouldDismissForIdling;	// IMP=0x0010000000074317
- (double)idleTimerInterval;	// IMP=0x0010000000074309
- (void)_didPresentItemsAtIndexPaths:(id)arg1;	// IMP=0x0010000000073fd4
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000073fbf
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000073f07
- (void)siriDidDeactivate;	// IMP=0x0010000000073e06
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x0010000000073b58
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 dataSource:(id)arg4;	// IMP=0x0010000000073a23
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000073a07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
