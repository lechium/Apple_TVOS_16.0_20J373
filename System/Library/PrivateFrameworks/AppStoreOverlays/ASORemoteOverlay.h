//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCSignpostSpan, ASOOverlayTransitionContext, NSString;
@protocol ASOOverlay, ASOOverlayConfiguration, ASORemoteContextProvider;

__attribute__((visibility("hidden")))
@interface ASORemoteOverlay : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    _Bool _isActive;	// 9 = 0x9
    id <ASORemoteContextProvider> _contextProvider;	// 16 = 0x10
    id <ASOOverlay> _overlay;	// 24 = 0x18
    ASCSignpostSpan *_hostSpan;	// 32 = 0x20
    ASOOverlayTransitionContext *_presentationTransitionContext;	// 40 = 0x28
}

+ (id)dismissOverlayOperationWithContextProvider:(id)arg1;	// IMP=0x001000000000662a
+ (id)log;	// IMP=0x001000000000632b
- (void).cxx_destruct;	// IMP=0x0000000000007be5
@property(retain, nonatomic) ASOOverlayTransitionContext *presentationTransitionContext; // @synthesize presentationTransitionContext=_presentationTransitionContext;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, retain, nonatomic) ASCSignpostSpan *hostSpan; // @synthesize hostSpan=_hostSpan;
@property(retain, nonatomic) id <ASOOverlay> overlay; // @synthesize overlay=_overlay;
@property(nonatomic) __weak id <ASORemoteContextProvider> contextProvider; // @synthesize contextProvider=_contextProvider;
- (void)remoteStoreOverlayDidFinishDismissal:(id)arg1;	// IMP=0x00000000000078af
- (void)remoteStoreOverlayWillStartDismissing:(id)arg1 executeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000072f9
- (void)remoteStoreOverlayDidFinishPresentation:(id)arg1;	// IMP=0x0000000000007082
- (void)remoteStoreOverlayWillStartPresenting:(id)arg1 executeBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006a82
- (void)remoteStoreOverlayDidFailToLoadWithError:(id)arg1;	// IMP=0x0000000000006788
@property(readonly, copy, nonatomic) id <ASOOverlayConfiguration> overlayConfiguration;
- (id)context;	// IMP=0x0000000000006677
- (id)presentOverlayOperation;	// IMP=0x00000000000065f4
- (void)finishWithError:(id)arg1;	// IMP=0x000000000000644e
- (id)initWithOverlay:(id)arg1 contextProvider:(id)arg2 hostSpan:(id)arg3;	// IMP=0x0000000000006387

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

